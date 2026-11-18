// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 11

// FMoveCursor @ 1429b7950

FMoveCursor * __thiscall
FMoveCursor::FMoveCursor
          (FMoveCursor *this,ECursorMoveGranularity param_1,ECursorMoveMethod param_2,
          TVector2<double> *param_3,float param_4,ECursorAction param_5)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  FMoveCursor *pFVar5;
  float fVar6;
  float fVar7;
  
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  this->Method = param_2;
  fVar7 = (float)dVar1;
  this->Action = param_5;
  this->Granularity = param_1;
  fVar6 = (float)dVar2;
  (this->DirectionOrPosition).field0_0x0._s_0.X = fVar7;
  (this->DirectionOrPosition).field0_0x0._s_0.Y = fVar6;
  this->GeometryScale = param_4;
  if ((this->Method != ScreenPosition) &&
     (((this->Method != Cardinal || ((fVar6 != 0.0) == (fVar7 != 0.0))) &&
      (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4099620952038440893>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\ISlateEditableTextWidget.cpp"
                          ,0x43,
                          "Method == ECursorMoveMethod::ScreenPosition || (Method == ECursorMoveMethod::Cardinal && IsVerticalMovement() != IsHorizontalMovement())"
                         ), bVar4)))) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FMoveCursor *)(*pcVar3)();
    return pFVar5;
  }
  return this;
}

// Cardinal @ 1429cd000

FMoveCursor * __cdecl
FMoveCursor::Cardinal
          (FMoveCursor *__return_storage_ptr__,ECursorMoveGranularity param_1,TIntPoint<int> param_2
          ,ECursorAction param_3)

{
  code *pcVar1;
  bool bVar2;
  FMoveCursor *pFVar3;
  
  __return_storage_ptr__->Method = Cardinal;
  __return_storage_ptr__->Granularity = param_1;
  __return_storage_ptr__->Action = param_3;
  __return_storage_ptr__->GeometryScale = 1.0;
  (__return_storage_ptr__->DirectionOrPosition).field0_0x0._s_0.X = (float)param_2.field0_0x0._0_4_;
  (__return_storage_ptr__->DirectionOrPosition).field0_0x0._s_0.Y = (float)param_2.field0_0x0._4_4_;
  if ((__return_storage_ptr__->Method != ScreenPosition) &&
     (((__return_storage_ptr__->Method != Cardinal ||
       (((float)param_2.field0_0x0._4_4_ != 0.0) == ((float)param_2.field0_0x0._0_4_ != 0.0))) &&
      (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4099620952038440893>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\ISlateEditableTextWidget.cpp"
                          ,0x43,
                          "Method == ECursorMoveMethod::ScreenPosition || (Method == ECursorMoveMethod::Cardinal && IsVerticalMovement() != IsHorizontalMovement())"
                         ), bVar2)))) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMoveCursor *)(*pcVar1)();
    return pFVar3;
  }
  return __return_storage_ptr__;
}

// GetAction @ 1429e8c20

ECursorAction __thiscall FMoveCursor::GetAction(FMoveCursor *this)

{
  return this->Action;
}

// GetGeometryScale @ 1429eb7f0

float __thiscall FMoveCursor::GetGeometryScale(FMoveCursor *this)

{
  return this->GeometryScale;
}

// GetGranularity @ 1429eb8b0

ECursorMoveGranularity __thiscall FMoveCursor::GetGranularity(FMoveCursor *this)

{
  return this->Granularity;
}

// GetLocalPosition @ 1429ebd10

TVector2<double> * __thiscall
FMoveCursor::GetLocalPosition(FMoveCursor *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  
  fVar1 = (this->DirectionOrPosition).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(this->DirectionOrPosition).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// GetMoveDirection @ 1429ec080

TIntPoint<int> __thiscall FMoveCursor::GetMoveDirection(FMoveCursor *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(int *)in_RDX = (int)(this->DirectionOrPosition).field0_0x0._s_0.X;
  *(int *)((longlong)in_RDX + 4) = (int)(this->DirectionOrPosition).field0_0x0._s_0.Y;
  return (TIntPoint<int>)in_RDX;
}

// GetMoveMethod @ 1429ec0a0

ECursorMoveMethod __thiscall FMoveCursor::GetMoveMethod(FMoveCursor *this)

{
  return this->Method;
}

// IsHorizontalMovement @ 1429f55a0

bool __thiscall FMoveCursor::IsHorizontalMovement(FMoveCursor *this)

{
  if ((this->DirectionOrPosition).field0_0x0._s_0.X != 0.0) {
    return true;
  }
  return false;
}

// IsVerticalMovement @ 1429f6800

bool __thiscall FMoveCursor::IsVerticalMovement(FMoveCursor *this)

{
  if ((this->DirectionOrPosition).field0_0x0._s_0.Y != 0.0) {
    return true;
  }
  return false;
}

// ViaScreenPointer @ 142a14f80

FMoveCursor * __cdecl
FMoveCursor::ViaScreenPointer
          (FMoveCursor *__return_storage_ptr__,TVector2<double> *param_1,float param_2,
          ECursorAction param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  FMoveCursor *pFVar5;
  float fVar6;
  float fVar7;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  __return_storage_ptr__->Method = ScreenPosition;
  __return_storage_ptr__->GeometryScale = param_2;
  fVar7 = (float)dVar2;
  __return_storage_ptr__->Granularity = Character;
  __return_storage_ptr__->Action = param_3;
  fVar6 = (float)dVar3;
  (__return_storage_ptr__->DirectionOrPosition).field0_0x0._s_0.X = fVar7;
  (__return_storage_ptr__->DirectionOrPosition).field0_0x0._s_0.Y = fVar6;
  if ((__return_storage_ptr__->Method != ScreenPosition) &&
     (((__return_storage_ptr__->Method != Cardinal || ((fVar6 != 0.0) == (fVar7 != 0.0))) &&
      (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4099620952038440893>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\ISlateEditableTextWidget.cpp"
                          ,0x43,
                          "Method == ECursorMoveMethod::ScreenPosition || (Method == ECursorMoveMethod::Cardinal && IsVerticalMovement() != IsHorizontalMovement())"
                         ), bVar4)))) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FMoveCursor *)(*pcVar1)();
    return pFVar5;
  }
  return __return_storage_ptr__;
}

