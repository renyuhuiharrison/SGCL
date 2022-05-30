#pragma once

#include <vtkContextItem.h>
#include <vtkContext2D.h>
#include <vtkBrush.h>
#include <vtkPen.h>
#include <vtkObjectFactory.h>

class TestContextItem : public vtkContextItem
{
public:
	static TestContextItem *New();
	vtkTypeMacro(TestContextItem, vtkContextItem);
	virtual bool Paint(vtkContext2D* painter)
	{
		//painter->GetBrush()->SetColor(255, 0, 0);
		painter->GetPen()->SetColor(255, 255, 255);
		painter->DrawRect(20, 20, 40, 40);
		return true;
	}
};

vtkStandardNewMacro(TestContextItem);