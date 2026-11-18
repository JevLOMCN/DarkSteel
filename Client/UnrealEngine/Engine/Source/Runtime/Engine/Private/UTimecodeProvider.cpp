// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// UTimecodeProvider @ 147bbdd70

UTimecodeProvider * __thiscall
UTimecodeProvider::UTimecodeProvider(UTimecodeProvider *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->FrameDelay = 0.0;
  this->_padding_ = (longlong)&___7UTimecodeProvider__6B_;
  return this;
}

// UTimecodeProvider @ 147bbdda0

UTimecodeProvider * __thiscall
UTimecodeProvider::UTimecodeProvider(UTimecodeProvider *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->FrameDelay = 0.0;
  this->_padding_ = (longlong)&___7UTimecodeProvider__6B_;
  return this;
}

// ~UTimecodeProvider @ 147bbfb20

void __thiscall UTimecodeProvider::~UTimecodeProvider(UTimecodeProvider *this)

{
  this->_padding_ = (longlong)&___7UTimecodeProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// FetchAndUpdate @ 147bdbcd0

void __thiscall UTimecodeProvider::FetchAndUpdate(UTimecodeProvider *this)

{
  return;
}

// GetDelayedQualifiedFrameTime @ 147bdf710

FQualifiedFrameTime * __thiscall
UTimecodeProvider::GetDelayedQualifiedFrameTime
          (UTimecodeProvider *this,FQualifiedFrameTime *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  float fVar2;
  double dVar3;
  undefined1 in_XMM5 [16];
  undefined1 auVar4 [16];
  
  (**(code **)(this->_padding_ + 0x2c0))();
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (double)this->FrameDelay;
  auVar4 = roundpd(in_XMM5,auVar4,1);
  dVar3 = auVar4._0_8_;
  auVar1._0_8_ = (double)this->FrameDelay - dVar3;
  auVar1._8_8_ = 0;
  if (__real_41dfffffffc00000 <= dVar3) {
    dVar3 = __real_41dfffffffc00000;
  }
  if (dVar3 <= __real_c1e0000000000000) {
    dVar3 = __real_c1e0000000000000;
  }
  fVar2 = (float)auVar1._0_8_;
  if (::FFrameTime::MaxSubframe <= (float)auVar1._0_8_) {
    fVar2 = ::FFrameTime::MaxSubframe;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar2) {
    fVar2 = ::FFrameTime::MaxSubframe;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar2 = (__return_storage_ptr__->Time).SubFrame - fVar2;
  auVar4 = roundps(auVar1,ZEXT416((uint)fVar2),1);
  (__return_storage_ptr__->Time).SubFrame = fVar2 - auVar4._0_4_;
  (__return_storage_ptr__->Time).FrameNumber.Value =
       (__return_storage_ptr__->Time).FrameNumber.Value + ((int)auVar4._0_4_ - (int)dVar3);
  return __return_storage_ptr__;
}

// GetDelayedTimecode @ 147bdf7b0

FTimecode * __thiscall
UTimecodeProvider::GetDelayedTimecode(UTimecodeProvider *this,FTimecode *__return_storage_ptr__)

{
  bool bVar1;
  undefined1 auVar2 [16];
  float fVar3;
  double dVar4;
  undefined1 in_XMM5 [16];
  undefined1 auVar5 [16];
  FFrameNumber local_res8 [2];
  int local_18;
  float local_14;
  FFrameRate local_10;
  
  (**(code **)(this->_padding_ + 0x2c0))(this,&local_18);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (double)this->FrameDelay;
  auVar5 = roundpd(in_XMM5,auVar5,1);
  dVar4 = auVar5._0_8_;
  auVar2._0_8_ = (double)this->FrameDelay - dVar4;
  auVar2._8_8_ = 0;
  if (__real_41dfffffffc00000 <= dVar4) {
    dVar4 = __real_41dfffffffc00000;
  }
  if (dVar4 <= __real_c1e0000000000000) {
    dVar4 = __real_c1e0000000000000;
  }
  fVar3 = (float)auVar2._0_8_;
  if (::FFrameTime::MaxSubframe <= (float)auVar2._0_8_) {
    fVar3 = ::FFrameTime::MaxSubframe;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar3) {
    fVar3 = ::FFrameTime::MaxSubframe;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  auVar5 = roundps(auVar2,ZEXT416((uint)(local_14 - fVar3)),1);
  local_14 = (local_14 - fVar3) - auVar5._0_4_;
  local_18 = local_18 + ((int)auVar5._0_4_ - (int)dVar4);
  bVar1 = FTimecode::UseDropFormatTimecode(&local_10);
  local_res8[0].Value = local_18;
  FTimecode::FromFrameNumber(__return_storage_ptr__,local_res8,&local_10,bVar1);
  __return_storage_ptr__->Subframe = local_14;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147be5ff0

UClass * __cdecl UTimecodeProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimecodeProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TimecodeProvider",
               &Z_Registration_Info_UClass_UTimecodeProvider.InnerSingleton,
               StaticRegisterNativesUTimecodeProvider,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTimecodeProvider>,
               InternalVTableHelperCtorCaller<UTimecodeProvider>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimecodeProvider.InnerSingleton;
}

// GetQualifiedFrameTime @ 147be67d0

FQualifiedFrameTime * __thiscall
UTimecodeProvider::GetQualifiedFrameTime
          (UTimecodeProvider *this,FQualifiedFrameTime *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TimecodeProvider.h"
             ,0x47,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->Rate).Numerator = 0x18;
  (__return_storage_ptr__->Time).FrameNumber = 0;
  (__return_storage_ptr__->Time).SubFrame = 0.0;
  (__return_storage_ptr__->Rate).Denominator = 1;
  return __return_storage_ptr__;
}

// GetTimecode @ 147bebe80

FTimecode * __thiscall
UTimecodeProvider::GetTimecode(UTimecodeProvider *this,FTimecode *__return_storage_ptr__)

{
  bool bVar1;
  int *piVar2;
  FFrameNumber local_res8 [2];
  undefined1 local_18 [16];
  
  piVar2 = (int *)(**(code **)(this->_padding_ + 0x2c0))(this,local_18);
  bVar1 = FTimecode::UseDropFormatTimecode((FFrameRate *)(piVar2 + 2));
  local_res8[0].Value = *piVar2;
  FTimecode::FromFrameNumber(__return_storage_ptr__,local_res8,(FFrameRate *)(piVar2 + 2),bVar1);
  __return_storage_ptr__->Subframe = (float)piVar2[1];
  return __return_storage_ptr__;
}

// StaticRegisterNativesUTimecodeProvider @ 147c03810

void __cdecl UTimecodeProvider::StaticRegisterNativesUTimecodeProvider(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UTimecodeProvider_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execFetchAndUpdate @ 147c13c30

void __cdecl UTimecodeProvider::execFetchAndUpdate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c13c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b8))();
  return;
}

// execFetchTimecode @ 147c13c60

void __cdecl UTimecodeProvider::execFetchTimecode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar local_18 [16];
  
  local_18[8] = '\x18';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[0xc] = '\x01';
  local_18[0xd] = '\0';
  local_18[0xe] = '\0';
  local_18[0xf] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar3 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execGetDelayedQualifiedFrameTime @ 147c13e80

void __cdecl
UTimecodeProvider::execGetDelayedQualifiedFrameTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  double dVar3;
  undefined1 in_XMM5 [16];
  undefined1 auVar4 [16];
  int local_18;
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,&local_18);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (double)*(float *)(param_1 + 1);
  auVar4 = roundpd(in_XMM5,auVar4,1);
  dVar3 = auVar4._0_8_;
  auVar1._0_8_ = (double)*(float *)(param_1 + 1) - dVar3;
  auVar1._8_8_ = 0;
  if (__real_41dfffffffc00000 <= dVar3) {
    dVar3 = __real_41dfffffffc00000;
  }
  if (dVar3 <= __real_c1e0000000000000) {
    dVar3 = __real_c1e0000000000000;
  }
  fVar2 = (float)auVar1._0_8_;
  if (::FFrameTime::MaxSubframe <= (float)auVar1._0_8_) {
    fVar2 = ::FFrameTime::MaxSubframe;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar2) {
    fVar2 = ::FFrameTime::MaxSubframe;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  auVar4 = roundps(auVar1,ZEXT416((uint)(fStack_14 - fVar2)),1);
  *(int *)param_3 = local_18 + ((int)auVar4._0_4_ - (int)dVar3);
  *(float *)((longlong)param_3 + 4) = (fStack_14 - fVar2) - auVar4._0_4_;
  *(undefined4 *)((longlong)param_3 + 8) = uStack_10;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_c;
  return;
}

// execGetDelayedTimecode @ 147c13f50

void __cdecl
UTimecodeProvider::execGetDelayedTimecode(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  float fVar3;
  double dVar4;
  undefined1 in_XMM5 [16];
  undefined1 auVar5 [16];
  FFrameNumber local_res8 [2];
  int local_38;
  float local_34;
  FFrameRate local_30;
  FTimecode local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,&local_38);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (double)*(float *)(param_1 + 1);
  auVar5 = roundpd(in_XMM5,auVar5,1);
  dVar4 = auVar5._0_8_;
  auVar2._0_8_ = (double)*(float *)(param_1 + 1) - dVar4;
  auVar2._8_8_ = 0;
  if (__real_41dfffffffc00000 <= dVar4) {
    dVar4 = __real_41dfffffffc00000;
  }
  if (dVar4 <= __real_c1e0000000000000) {
    dVar4 = __real_c1e0000000000000;
  }
  fVar3 = (float)auVar2._0_8_;
  if (::FFrameTime::MaxSubframe <= (float)auVar2._0_8_) {
    fVar3 = ::FFrameTime::MaxSubframe;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar3) {
    fVar3 = ::FFrameTime::MaxSubframe;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  auVar5 = roundps(auVar2,ZEXT416((uint)(local_34 - fVar3)),1);
  local_34 = (local_34 - fVar3) - auVar5._0_4_;
  local_38 = local_38 + ((int)auVar5._0_4_ - (int)dVar4);
  bVar1 = FTimecode::UseDropFormatTimecode(&local_30);
  local_res8[0].Value = local_38;
  FTimecode::FromFrameNumber(&local_28,local_res8,&local_30,bVar1);
  *(undefined8 *)param_3 = local_28._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_28._8_8_;
  *(ulonglong *)((longlong)param_3 + 0x10) = CONCAT44(local_28._20_4_,local_34);
  return;
}

// execGetFrameRate @ 147c14050

void __cdecl UTimecodeProvider::execGetFrameRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  undefined1 local_18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_18);
  *(undefined8 *)param_3 = *(undefined8 *)(lVar1 + 8);
  return;
}

// execGetQualifiedFrameTime @ 147c14530

void __cdecl
UTimecodeProvider::execGetQualifiedFrameTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_18);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetSynchronizationState @ 147c14640

void __cdecl
UTimecodeProvider::execGetSynchronizationState(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetTimecode @ 147c146d0

void __cdecl UTimecodeProvider::execGetTimecode(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  FFrameNumber local_res8 [2];
  undefined1 local_38 [16];
  FTimecode local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  piVar3 = (int *)(**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_38);
  bVar2 = FTimecode::UseDropFormatTimecode((FFrameRate *)(piVar3 + 2));
  local_res8[0].Value = *piVar3;
  FTimecode::FromFrameNumber(&local_28,local_res8,(FFrameRate *)(piVar3 + 2),bVar2);
  iVar1 = piVar3[1];
  *(undefined8 *)param_3 = local_28._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_28._8_8_;
  *(ulonglong *)((longlong)param_3 + 0x10) = CONCAT44(local_28._20_4_,iVar1);
  return;
}

