// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// Cancel @ 149ef7210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGDefaultExecutionState::Cancel(FPCGDefaultExecutionState *this)

{
  IPCGBaseSubsystem *this_00;
  IPCGGraphExecutionSource *pIVar1;
  
  if (this->Source->CurrentGenerationTask != 0xffffffffffffffff) {
    this_00 = (IPCGBaseSubsystem *)(**(code **)(this->_padding_ + 0xb0))();
    if (this_00 != (IPCGBaseSubsystem *)0x0) {
      pIVar1 = (IPCGGraphExecutionSource *)&this->Source->_padding_;
      if (this->Source == (UPCGDefaultExecutionSource *)0x0) {
        pIVar1 = (IPCGGraphExecutionSource *)0x0;
      }
      IPCGBaseSubsystem::CancelGeneration(this_00,pIVar1);
      return;
    }
  }
  return;
}

// GetBounds @ 149efefd0

TBox<double> * __thiscall
FPCGDefaultExecutionState::GetBounds
          (FPCGDefaultExecutionState *this,TBox<double> *__return_storage_ptr__)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
  uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  uVar11 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
  uVar1 = (ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20;
  uVar7 = (uint)__xmm_80000000000000008000000000000000;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_ ^ uVar7;
  uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_ ^ uVar8;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar8,
                        UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar7);
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar10,uVar9);
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z =
       (double)CONCAT44((uint)uVar1 ^ uVar8,uVar11 ^ uVar7);
  *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0 = uVar2;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uVar3;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uVar4;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uVar5;
  __return_storage_ptr__->IsValid = '\x01';
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)uVar6;
  return __return_storage_ptr__;
}

// GetDebugName @ 149eff680

FString * __thiscall
FPCGDefaultExecutionState::GetDebugName
          (FPCGDefaultExecutionState *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"PCGDefaultExecutionSource");
  return __return_storage_ptr__;
}

// GetGraph @ 149f00580

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall FPCGDefaultExecutionState::GetGraph(FPCGDefaultExecutionState *this)

{
  UPCGGraphInterface *pUVar1;
  code *pcVar2;
  bool bVar3;
  UPCGGraph *pUVar4;
  
  if (this->Source == (UPCGDefaultExecutionSource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGDefaultExecutionSource.cpp"
                       ,0x30,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UPCGGraph *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar1 = (this->Source->GraphInterface).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGGraphInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149f005cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar4 = (UPCGGraph *)(**(code **)(*(longlong *)pUVar1 + 0x2b8))();
    return pUVar4;
  }
  return (UPCGGraph *)0x0;
}

// GetGraphInstance @ 149f007c0

UPCGGraphInstance * __thiscall
FPCGDefaultExecutionState::GetGraphInstance(FPCGDefaultExecutionState *this)

{
  UPCGDefaultExecutionSource *pUVar1;
  code *pcVar2;
  bool bVar3;
  UPCGGraphInstance *pUVar4;
  UClass *pUVar5;
  
  if (this->Source == (UPCGDefaultExecutionSource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGDefaultExecutionSource.cpp"
                       ,0x36,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UPCGGraphInstance *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar1 = this->Source;
  if ((pUVar1->GraphInterface).field0_0x0.DebugPtr != (UPCGGraphInterface *)0x0) {
    pUVar5 = UPCGGraphInstance::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&pUVar1->GraphInterface,pUVar5);
    if (bVar3) {
      return (UPCGGraphInstance *)(pUVar1->GraphInterface).field0_0x0.DebugPtr;
    }
  }
  return (UPCGGraphInstance *)0x0;
}

// GetOriginalSource @ 149f02ee0

IPCGGraphExecutionSource * __thiscall
FPCGDefaultExecutionState::GetOriginalSource(FPCGDefaultExecutionState *this)

{
  IPCGGraphExecutionSource *pIVar1;
  
  pIVar1 = (IPCGGraphExecutionSource *)&this->Source->_padding_;
  if (this->Source == (UPCGDefaultExecutionSource *)0x0) {
    pIVar1 = (IPCGGraphExecutionSource *)0x0;
  }
  return pIVar1;
}

// GetSeed @ 149f04b80

int __thiscall FPCGDefaultExecutionState::GetSeed(FPCGDefaultExecutionState *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->Source != (UPCGDefaultExecutionSource *)0x0) {
    return this->Source->Seed;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Source",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGDefaultExecutionSource.cpp"
                     ,0x11,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return this->Source->Seed;
}

// GetSelfData @ 149f04c30

UPCGData * __thiscall FPCGDefaultExecutionState::GetSelfData(FPCGDefaultExecutionState *this)

{
  return (UPCGData *)0x0;
}

// GetTransform @ 149f05d00

TTransform<double> * __thiscall
FPCGDefaultExecutionState::GetTransform
          (FPCGDefaultExecutionState *this,TTransform<double> *__return_storage_ptr__)

{
  __m128d _Var1;
  __m128d _Var2;
  
  _Var1.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var2.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var2.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var1.m128d_f64;
  return __return_storage_ptr__;
}

// GetWorld @ 149f06720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FPCGDefaultExecutionState::GetWorld(FPCGDefaultExecutionState *this)

{
  return (UWorld *)0x0;
}

// HasAuthority @ 149f068b0

bool __thiscall FPCGDefaultExecutionState::HasAuthority(FPCGDefaultExecutionState *this)

{
  return false;
}

// IsGenerating @ 149f07f10

bool __thiscall FPCGDefaultExecutionState::IsGenerating(FPCGDefaultExecutionState *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->Source == (UPCGDefaultExecutionSource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGDefaultExecutionSource.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return this->Source->CurrentGenerationTask != 0xffffffffffffffff;
}

// OnGraphExecutionAborted @ 149f096f0

void __thiscall
FPCGDefaultExecutionState::OnGraphExecutionAborted
          (FPCGDefaultExecutionState *this,bool param_1,bool param_2)

{
  this->Source->CurrentGenerationTask = 0xffffffffffffffff;
  return;
}

