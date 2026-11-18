// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// Draw @ 14d59e790

/* WARNING: Removing unreachable block (ram,0x00014d59e813) */
/* WARNING: Removing unreachable block (ram,0x00014d59e838) */
/* WARNING: Removing unreachable block (ram,0x00014d59e84d) */
/* WARNING: Removing unreachable block (ram,0x00014d59e872) */

void __thiscall
UE::Cameras::FCameraDebugClock::Draw
          (FCameraDebugClock *this,FCanvas *param_1,FCameraDebugClockDrawParams *param_2)

{
  uchar uVar1;
  undefined1 local_res8 [8];
  FCameraDebugClockRenderer local_78;
  
  local_78.DrawParams.ClockPosition.field0_0x0._s_0 = (param_2->ClockPosition).field0_0x0;
  local_78.DrawParams.ClockName.TextData.Reference = (param_2->ClockName).TextData.Reference;
  local_78.DrawParams.ClockSize.field0_0x0 = (param_2->ClockSize).field0_0x0;
  local_78.DrawParams.ClockBackgroundColor.field0_0x0._s_0.R =
       (param_2->ClockBackgroundColor).field0_0x0._s_0.R;
  local_78.DrawParams.ClockBackgroundColor.field0_0x0._s_0.G =
       (param_2->ClockBackgroundColor).field0_0x0._s_0.G;
  local_78.DrawParams.ClockBackgroundColor.field0_0x0._s_0.B =
       (param_2->ClockBackgroundColor).field0_0x0._s_0.B;
  local_78.DrawParams.ClockBackgroundColor.field0_0x0._s_0.A =
       (param_2->ClockBackgroundColor).field0_0x0._s_0.A;
  local_78.Canvas = param_1;
  if (local_78.DrawParams.ClockName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.DrawParams.ClockName.TextData.Reference + 8))
              (local_78.DrawParams.ClockName.TextData.Reference,local_res8);
  }
  local_78.DrawParams.ClockNameColor.field0_0x0._0_8_ =
       *(undefined8 *)&(param_2->ClockNameColor).field0_0x0;
  local_78.DrawParams.ClockNameColor.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&(param_2->ClockNameColor).field0_0x0 + 8);
  local_78.DrawParams.ClockName.Flags = (param_2->ClockName).Flags;
  local_78.DrawParams.ClockFaceColor.field0_0x0._0_8_ =
       *(undefined8 *)&(param_2->ClockFaceColor).field0_0x0;
  local_78.DrawParams.ClockFaceColor.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&(param_2->ClockFaceColor).field0_0x0 + 8);
  uVar1 = (this->Value).TypeIndex;
  local_78.DrawParams.ClockValueLineColor.field0_0x0._s_0.R =
       (param_2->ClockValueLineColor).field0_0x0._s_0.R;
  local_78.DrawParams.ClockValueLineColor.field0_0x0._s_0.G =
       (param_2->ClockValueLineColor).field0_0x0._s_0.G;
  local_78.DrawParams.ClockValueLineColor.field0_0x0._s_0.B =
       (param_2->ClockValueLineColor).field0_0x0._s_0.B;
  local_78.DrawParams.ClockValueLineColor.field0_0x0._s_0.A =
       (param_2->ClockValueLineColor).field0_0x0._s_0.A;
  if (uVar1 == '\0') {
    Cameras::Internal::FCameraDebugClockRenderer::DrawVectorClock
              (&local_78,(TVector2<double> *)this,(double)(this->Value)._padding_);
  }
  else if (uVar1 == '\x01') {
    Cameras::Internal::FCameraDebugClockRenderer::DrawAngleClock
              (&local_78,(double)(this->Value)._padding_);
  }
  if (local_78.DrawParams.ClockName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.DrawParams.ClockName.TextData.Reference + 0x10))();
  }
  return;
}

// Serialize @ 14d5ccd30

void __thiscall UE::Cameras::FCameraDebugClock::Serialize(FCameraDebugClock *this,FArchive *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  byte local_res8 [8];
  uchar local_res10 [8];
  FArchive *local_res18 [2];
  
  if ((param_1->field_0x28 & 1) == 0) {
    local_res10[0] = (this->Value).TypeIndex;
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uchar *)plVar1[1] < (uchar *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
    }
    else {
      local_res10[0] = *(uchar *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    local_res18[0] = param_1;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`class_FArchive&___ptr64___cdecl_operator<<<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>(FArchive&___ptr64,TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>&___ptr64)'::`14'::<lambda_1>,0,1,0,TVariant<struct_UE::Cameras::FCameraDebugClock::FVectorValue,struct_UE::Cameras::FCameraDebugClock::FAngleValue>&___ptr64>(unsigned___int64,`class_FArchive&___ptr64___cdecl_operator<<<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>(FArchive&___ptr64,TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>&___ptr64)'::`14'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>&___ptr64)'
      ::__l2::Invokers[(this->Value).TypeIndex])((<lambda_1> *)local_res18,&this->Value);
    return;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(byte *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (1 < local_res8[0]) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < sizeof...(Ts)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x12a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = (ulonglong)local_res8[0];
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Loaders)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x122,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TVariantLoadFromArchiveLookup<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>::Load(unsigned___int64,FArchive&___ptr64,TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>&___ptr64)'
              ::__l2::Loaders)[uVar4])(param_1,this);
  return;
}

// Update @ 14d5d2b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Cameras::FCameraDebugClock::Update(FCameraDebugClock *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_68 [56];
  TVector2<double>_u_0 local_30;
  double local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  uVar5 = (ulonglong)(this->Value).TypeIndex;
  if (1 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) != '\0') {
    if ((this->Value).TypeIndex != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    local_30._s_0 = *(TVector2<double>_u_0_s_0 *)&param_1->field0_0x0;
    local_18 = 0;
    dVar2 = (param_1->field0_0x0)._s_0.X;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar1 * dVar1 + dVar2 * dVar2;
    auVar6 = sqrtpd((undefined1  [16])local_30,auVar6);
    dVar1 = (double)(this->Value)._padding_;
    local_20 = auVar6._0_8_;
    if (auVar6._0_8_ <= dVar1) {
      local_20 = dVar1;
    }
    TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>
    ::operator=(&this->Value,
                (TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>
                 *)&local_30._s_0);
  }
  return;
}

// Update @ 14d5d2c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Cameras::FCameraDebugClock::Update(FCameraDebugClock *this,double param_1)

{
  undefined1 auStack_58 [32];
  TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>
  local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38.TypeIndex = '\x01';
  local_38._padding_ = (longlong)param_1;
  TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>
  ::operator=(&this->Value,&local_38);
  return;
}

