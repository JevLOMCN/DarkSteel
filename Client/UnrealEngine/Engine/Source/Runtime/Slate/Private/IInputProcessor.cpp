// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 11

// ~IInputProcessor @ 1426ab8d0

void __thiscall IInputProcessor::~IInputProcessor(IInputProcessor *this)

{
  *this = (IInputProcessor)&___7IInputProcessor__6B_;
  return;
}

// GetDebugName @ 1426bcd40

wchar_t * __thiscall IInputProcessor::GetDebugName(IInputProcessor *this)

{
  return L"";
}

// HandleAnalogInputEvent @ 1426c0710

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IInputProcessor::HandleAnalogInputEvent
          (IInputProcessor *this,FSlateApplication *param_1,FAnalogInputEvent *param_2)

{
  return false;
}

// HandleKeyDownEvent @ 1426c0ad0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IInputProcessor::HandleKeyDownEvent
          (IInputProcessor *this,FSlateApplication *param_1,FKeyEvent *param_2)

{
  return false;
}

// HandleKeyUpEvent @ 1426c0e60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IInputProcessor::HandleKeyUpEvent
          (IInputProcessor *this,FSlateApplication *param_1,FKeyEvent *param_2)

{
  return false;
}

// HandleMotionDetectedEvent @ 1426c0eb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IInputProcessor::HandleMotionDetectedEvent
          (IInputProcessor *this,FSlateApplication *param_1,FMotionEvent *param_2)

{
  return false;
}

// HandleMouseButtonDoubleClickEvent @ 1426c0f00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IInputProcessor::HandleMouseButtonDoubleClickEvent
          (IInputProcessor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  return false;
}

// HandleMouseButtonDownEvent @ 1426c0f50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IInputProcessor::HandleMouseButtonDownEvent
          (IInputProcessor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  return false;
}

// HandleMouseButtonUpEvent @ 1426c0fa0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IInputProcessor::HandleMouseButtonUpEvent
          (IInputProcessor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  return false;
}

// HandleMouseMoveEvent @ 1426c1000

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IInputProcessor::HandleMouseMoveEvent
          (IInputProcessor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  return false;
}

// HandleMouseWheelOrGestureEvent @ 1426c1050

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IInputProcessor::HandleMouseWheelOrGestureEvent
          (IInputProcessor *this,FSlateApplication *param_1,FPointerEvent *param_2,
          FPointerEvent *param_3)

{
  return false;
}

