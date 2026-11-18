// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 35

// StaticClass @ 144645b60

UClass * __cdecl UClothingSimulationInteractor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingSimulationInteractor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothingSimulationInteractor",
               &Z_Registration_Info_UClass_UClothingSimulationInteractor.InnerSingleton,
               StaticRegisterNativesUClothingSimulationInteractor,0x90,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothingSimulationInteractor>,
               InternalVTableHelperCtorCaller<UClothingSimulationInteractor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingSimulationInteractor.InnerSingleton;
}

// UClothingSimulationInteractor @ 1446489a0

UClothingSimulationInteractor * __thiscall
UClothingSimulationInteractor::UClothingSimulationInteractor
          (UClothingSimulationInteractor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UClothingSimulationInteractor__6B_;
  *(undefined8 *)&this->ClothingInteractors = 0;
  *(undefined8 *)&(this->ClothingInteractors).field_0x8 = 0;
  *(undefined8 *)&(this->ClothingInteractors).field_0x20 = 0;
  *(undefined4 *)&(this->ClothingInteractors).field_0x28 = 0;
  *(undefined4 *)&(this->ClothingInteractors).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClothingInteractors).field_0x34 = 0;
  *(undefined4 *)&(this->ClothingInteractors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClothingInteractors).field_0x40 = 0;
  *(undefined4 *)&(this->ClothingInteractors).field_0x48 = 0;
  this->LastNumCloths = 0;
  this->LastNumKinematicParticles = 0;
  this->LastNumDynamicParticles = 0;
  this->LastNumIterations = 0;
  this->LastNumSubsteps = 0;
  this->LastSimulationTime = 0.0;
  return this;
}

// UClothingSimulationInteractor @ 144648a10

UClothingSimulationInteractor * __thiscall
UClothingSimulationInteractor::UClothingSimulationInteractor
          (UClothingSimulationInteractor *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UClothingSimulationInteractor__6B_;
  *(undefined8 *)&this->ClothingInteractors = 0;
  *(undefined8 *)&(this->ClothingInteractors).field_0x8 = 0;
  *(undefined8 *)&(this->ClothingInteractors).field_0x20 = 0;
  *(undefined4 *)&(this->ClothingInteractors).field_0x28 = 0;
  *(undefined4 *)&(this->ClothingInteractors).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClothingInteractors).field_0x34 = 0;
  *(undefined4 *)&(this->ClothingInteractors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClothingInteractors).field_0x40 = 0;
  *(undefined4 *)&(this->ClothingInteractors).field_0x48 = 0;
  this->LastNumCloths = 0;
  this->LastNumKinematicParticles = 0;
  this->LastNumDynamicParticles = 0;
  this->LastNumIterations = 0;
  this->LastNumSubsteps = 0;
  this->LastSimulationTime = 0.0;
  return this;
}

// ~UClothingSimulationInteractor @ 144648de0

void __thiscall
UClothingSimulationInteractor::~UClothingSimulationInteractor(UClothingSimulationInteractor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UClothingSimulationInteractor__6B_;
  *(undefined4 *)&(this->ClothingInteractors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ClothingInteractors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothingInteractor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothingInteractor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothingInteractor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClothingInteractors);
  UObject::~UObject((UObject *)this);
  return;
}

// ClothConfigUpdated @ 14464a840

void __thiscall
UClothingSimulationInteractor::ClothConfigUpdated(UClothingSimulationInteractor *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h"
             ,0x62,L"Pure virtual not implemented (%s)");
  return;
}

// CreateClothingInteractor @ 14464a890

UClothingInteractor * __thiscall
UClothingSimulationInteractor::CreateClothingInteractor(UClothingSimulationInteractor *this)

{
  return (UClothingInteractor *)0x0;
}

// CreateClothingInteractor @ 14464a8a0

void __thiscall
UClothingSimulationInteractor::CreateClothingInteractor
          (UClothingSimulationInteractor *this,UClothingAssetBase *param_1,int param_2)

{
  FName local_res10;
  longlong local_res20;
  FString *local_28;
  longlong *local_20;
  FString local_18;
  
  if ((param_1 != (UClothingAssetBase *)0x0) &&
     (local_res20 = (**(code **)(this->_padding_ + 0x2b0))(), local_res20 != 0)) {
    *(int *)(local_res20 + 0x28) = param_2;
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_18);
    local_28 = &local_18;
    local_20 = &local_res20;
    TSet<TTuple<FName,TObjectPtr<UClothingInteractor>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothingInteractor>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,UClothingInteractor_*_const_&>_>
              ((TSet<TTuple<FName,TObjectPtr<UClothingInteractor>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothingInteractor>,0>,FDefaultSetAllocator>
                *)&this->ClothingInteractors,
               (TPairInitializer<FString_&&,UClothingInteractor_*_const_&> *)&local_res10,
               (bool *)&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DestroyClothingInteractors @ 14464a990

void __thiscall
UClothingSimulationInteractor::DestroyClothingInteractors(UClothingSimulationInteractor *this)

{
  TSet<TTuple<FName,TObjectPtr<UClothingInteractor>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothingInteractor>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TObjectPtr<UClothingInteractor>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothingInteractor>,0>,FDefaultSetAllocator>
           *)&this->ClothingInteractors);
  return;
}

// DisableGravityOverride @ 14464aa30

void __thiscall
UClothingSimulationInteractor::DisableGravityOverride(UClothingSimulationInteractor *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h"
             ,0x71,L"Pure virtual not implemented (%s)");
  return;
}

// EnableGravityOverride @ 14464ab10

void __thiscall
UClothingSimulationInteractor::EnableGravityOverride
          (UClothingSimulationInteractor *this,TVector<double> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h"
             ,0x6c,L"Pure virtual not implemented (%s)");
  return;
}

// GetClothingInteractor @ 14464b320

UClothingInteractor * __thiscall
UClothingSimulationInteractor::GetClothingInteractor
          (UClothingSimulationInteractor *this,FName param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FObjectPtr_u_0 *pFVar5;
  UClass *pUVar6;
  UClothingInteractor *pUVar7;
  
  pFVar5 = (FObjectPtr_u_0 *)
           TMapBase<FName,TObjectPtr<UClothingInteractor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothingInteractor>,0>_>
           ::Find((TMapBase<FName,TObjectPtr<UClothingInteractor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothingInteractor>,0>_>
                   *)&this->ClothingInteractors,param_1);
  if (pFVar5 != (FObjectPtr_u_0 *)0x0) {
    return (UClothingInteractor *)(FObjectPtr)pFVar5->Handle;
  }
  pUVar6 = UClothingInteractor::StaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pUVar7 = (UClothingInteractor *)(pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = UClothingInteractor::StaticClass();
  lVar2 = pUVar7->_padding_;
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UClothingInteractor *)(*pcVar3)();
      return pUVar7;
    }
  }
  return pUVar7;
}

// GetPrivateStaticClass @ 14464bc50

UClass * __cdecl UClothingSimulationInteractor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingSimulationInteractor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothingSimulationInteractor",
               &Z_Registration_Info_UClass_UClothingSimulationInteractor.InnerSingleton,
               StaticRegisterNativesUClothingSimulationInteractor,0x90,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothingSimulationInteractor>,
               InternalVTableHelperCtorCaller<UClothingSimulationInteractor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingSimulationInteractor.InnerSingleton;
}

// PhysicsAssetUpdated @ 14464bf80

void __thiscall
UClothingSimulationInteractor::PhysicsAssetUpdated(UClothingSimulationInteractor *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h"
             ,0x5d,L"Pure virtual not implemented (%s)");
  return;
}

// SetAnimDriveSpringStiffness @ 14464c650

void __thiscall
UClothingSimulationInteractor::SetAnimDriveSpringStiffness
          (UClothingSimulationInteractor *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h"
             ,0x67,L"Pure virtual not implemented (%s)");
  return;
}

// SetMaxNumIterations @ 14464c690

void __thiscall
UClothingSimulationInteractor::SetMaxNumIterations(UClothingSimulationInteractor *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h"
             ,0x7b,L"Pure virtual not implemented (%s)");
  return;
}

// SetNumIterations @ 14464c6d0

void __thiscall
UClothingSimulationInteractor::SetNumIterations(UClothingSimulationInteractor *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h"
             ,0x76,L"Pure virtual not implemented (%s)");
  return;
}

// SetNumSubsteps @ 14464c710

void __thiscall
UClothingSimulationInteractor::SetNumSubsteps(UClothingSimulationInteractor *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationInteractor.h"
             ,0x80,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUClothingSimulationInteractor @ 14464c7f0

void __cdecl UClothingSimulationInteractor::StaticRegisterNativesUClothingSimulationInteractor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UClothingSimulationInteractor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Sync @ 14464c8c0

void __thiscall
UClothingSimulationInteractor::Sync
          (UClothingSimulationInteractor *this,IClothingSimulation *param_1,
          IClothingSimulationContext *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  float fVar16;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1 != (IClothingSimulation *)0x0) {
    iVar6 = (**(code **)(*(longlong *)param_1 + 0x90))(param_1);
    this->LastNumCloths = iVar6;
    iVar6 = (**(code **)(*(longlong *)param_1 + 0x98))(param_1);
    this->LastNumKinematicParticles = iVar6;
    iVar6 = (**(code **)(*(longlong *)param_1 + 0xa0))(param_1);
    this->LastNumDynamicParticles = iVar6;
    iVar6 = (**(code **)(*(longlong *)param_1 + 0xa8))(param_1);
    this->LastNumIterations = iVar6;
    iVar6 = (**(code **)(*(longlong *)param_1 + 0xb0))(param_1);
    this->LastNumSubsteps = iVar6;
    fVar16 = (float)(**(code **)(*(longlong *)param_1 + 0xb8))(param_1);
    iVar11 = 0;
    puVar1 = &(this->ClothingInteractors).field_0x10;
    this->LastSimulationTime = fVar16;
    iVar6 = *(int *)&(this->ClothingInteractors).field_0x28;
    uVar7 = 1;
    iVar13 = 0;
    iVar8 = 0;
    if (iVar6 != 0) {
      puVar14 = *(uint **)&(this->ClothingInteractors).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uVar10 = *puVar14;
      while (uVar10 == 0) {
        lVar9 = (longlong)iVar11;
        iVar13 = iVar13 + 0x20;
        iVar11 = iVar11 + 1;
        iVar8 = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14464c9ed;
        uVar10 = puVar14[lVar9 + 1];
      }
      uVar7 = -uVar10 & uVar10;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res20 = (int)lVar9;
      iVar8 = local_res20 + -1 + iVar13;
      if (iVar6 < iVar8) {
        iVar8 = iVar6;
      }
    }
LAB_14464c9ed:
    uVar10 = *(uint *)&(this->ClothingInteractors).field_0x28;
    uVar15 = uVar10 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar7,iVar11);
    TStack_60.CurrentBitIndex = iVar8;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar10 >> 5;
    TStack_60._28_4_ = iVar8;
    TStack_60.BaseBitIndex = iVar13;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->ClothingInteractors).field_0x8 -
                         *(int *)&(this->ClothingInteractors).field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar10 < 0) || (iVar6 < (int)uVar10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = *(uint *)&(this->ClothingInteractors).field_0x28;
    if (uVar10 != uVar7) {
      puVar12 = *(undefined1 **)&(this->ClothingInteractors).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
      while (uVar10 == 0) {
        lVar9 = (longlong)iVar11;
        uVar15 = uVar15 + 0x20;
        iVar11 = iVar11 + 1;
        uVar10 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14464caf0;
        uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar10 = (int)lVar9 + -1 + uVar15;
      if ((int)uVar7 < (int)uVar10) {
        uVar10 = uVar7;
      }
    }
LAB_14464caf0:
    while( true ) {
      if (*(int *)&(this->ClothingInteractors).field_0x8 -
          *(int *)&(this->ClothingInteractors).field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothingInteractor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_60.CurrentBitIndex == uVar10) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      plVar3 = *(longlong **)
                (*(longlong *)&this->ClothingInteractors + 8 +
                (longlong)TStack_60.CurrentBitIndex * 0x18);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b8))(plVar3,param_1);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// Sync @ 14464cb80

void __thiscall
UClothingSimulationInteractor::Sync
          (UClothingSimulationInteractor *this,IClothingSimulationInterface *param_1,
          IClothingSimulationContext *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  IClothingSimulationInterface *pIVar11;
  uint uVar12;
  int iVar13;
  IClothingSimulationInterface *pIVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  float fVar18;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pIVar14 = (IClothingSimulationInterface *)0x0;
  uVar15 = 0;
  if (param_1 == (IClothingSimulationInterface *)0x0) {
    this->LastNumCloths = 0;
    this->LastNumKinematicParticles = 0;
    this->LastNumDynamicParticles = 0;
    this->LastNumIterations = 0;
    this->LastNumSubsteps = 0;
    this->LastSimulationTime = 0.0;
    return;
  }
  pIVar11 = pIVar14;
  if (param_1->bIsLegacyInterface != false) {
    pIVar11 = param_1;
  }
  if (pIVar11 != (IClothingSimulationInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014464cbc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2c8))();
    return;
  }
  iVar6 = (**(code **)(param_1->_padding_ + 0x90))(param_1);
  this->LastNumCloths = iVar6;
  iVar6 = (**(code **)(param_1->_padding_ + 0x98))(param_1);
  this->LastNumKinematicParticles = iVar6;
  iVar6 = (**(code **)(param_1->_padding_ + 0xa0))(param_1);
  this->LastNumDynamicParticles = iVar6;
  iVar6 = (**(code **)(param_1->_padding_ + 0xa8))(param_1);
  this->LastNumIterations = iVar6;
  iVar6 = (**(code **)(param_1->_padding_ + 0xb0))(param_1);
  this->LastNumSubsteps = iVar6;
  fVar18 = (float)(**(code **)(param_1->_padding_ + 0xb8))(param_1);
  puVar1 = &(this->ClothingInteractors).field_0x10;
  this->LastSimulationTime = fVar18;
  iVar6 = *(int *)&(this->ClothingInteractors).field_0x28;
  uVar7 = 1;
  iVar8 = 0;
  uVar12 = uVar15;
  if (iVar6 != 0) {
    puVar17 = *(uint **)&(this->ClothingInteractors).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar9 = *puVar17;
    pIVar11 = pIVar14;
    uVar15 = 0;
    uVar12 = 0;
    while (uVar9 == 0) {
      iVar13 = (int)pIVar14;
      uVar15 = (int)pIVar11 + 0x20;
      pIVar11 = (IClothingSimulationInterface *)(ulonglong)uVar15;
      uVar12 = iVar13 + 1;
      pIVar14 = (IClothingSimulationInterface *)(ulonglong)uVar12;
      iVar8 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar12) goto LAB_14464cccd;
      uVar9 = puVar17[(longlong)iVar13 + 1];
    }
    uVar7 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iVar8 = (uVar15 - 1) + local_res20;
    if (iVar6 < iVar8) {
      iVar8 = iVar6;
    }
  }
LAB_14464cccd:
  uVar9 = *(uint *)&(this->ClothingInteractors).field_0x28;
  TStack_60._padding_ = CONCAT44(uVar7,uVar12);
  uVar12 = uVar9 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = uVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ClothingInteractors).field_0x8 -
                       *(int *)&(this->ClothingInteractors).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar6 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar15 = *(uint *)&(this->ClothingInteractors).field_0x28;
  if (uVar9 != uVar15) {
    puVar16 = *(undefined1 **)&(this->ClothingInteractors).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar7 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar7 == 0) {
      lVar10 = (longlong)iVar13;
      uVar12 = uVar12 + 0x20;
      iVar13 = iVar13 + 1;
      uVar9 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14464cdd0;
      uVar7 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar9 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar15 < (int)uVar9) {
      uVar9 = uVar15;
    }
  }
LAB_14464cdd0:
  while( true ) {
    if (*(int *)&(this->ClothingInteractors).field_0x8 -
        *(int *)&(this->ClothingInteractors).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UClothingInteractor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar3 = *(longlong **)
              (*(longlong *)&this->ClothingInteractors + 8 +
              (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2b8))(plVar3,param_1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// execClothConfigUpdated @ 14464d590

void __cdecl
UClothingSimulationInteractor::execClothConfigUpdated
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014464d5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2d8))();
  return;
}

// execDisableGravityOverride @ 14464d5c0

void __cdecl
UClothingSimulationInteractor::execDisableGravityOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014464d5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2f0))();
  return;
}

// execEnableGravityOverride @ 14464d5f0

void __cdecl
UClothingSimulationInteractor::execEnableGravityOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_28 [32];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1,puVar2);
  return;
}

// execGetClothingInteractor @ 14464d690

void __cdecl
UClothingSimulationInteractor::execGetClothingInteractor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TObjectPtr<UClothingInteractor>_u_0 *pTVar7;
  UClass *pUVar8;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar7 = &TMapBase<FName,TObjectPtr<UClothingInteractor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothingInteractor>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UClothingInteractor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothingInteractor>,0>_>
                    *)(param_1 + 1),local_res8)->field0_0x0;
  if (pTVar7 == (TObjectPtr<UClothingInteractor>_u_0 *)0x0) {
    pUVar8 = UClothingInteractor::StaticClass();
    if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar8);
    }
    pUVar3 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar8 = UClothingInteractor::StaticClass();
    lVar4 = *(longlong *)&pUVar3->field_0x10;
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(UObject **)param_3 = pUVar3;
  }
  else {
    *(TObjectPtr<UClothingInteractor>_u_0 *)param_3 = *pTVar7;
  }
  return;
}

// execGetNumCloths @ 14464d7b0

void __cdecl
UClothingSimulationInteractor::execGetNumCloths(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 3);
  return;
}

// execGetNumDynamicParticles @ 14464d7e0

void __cdecl
UClothingSimulationInteractor::execGetNumDynamicParticles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[3].field_0x8;
  return;
}

// execGetNumIterations @ 14464d810

void __cdecl
UClothingSimulationInteractor::execGetNumIterations(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[3].field_0xc;
  return;
}

// execGetNumKinematicParticles @ 14464d840

void __cdecl
UClothingSimulationInteractor::execGetNumKinematicParticles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[3].field_0x4;
  return;
}

// execGetNumSubsteps @ 14464d870

void __cdecl
UClothingSimulationInteractor::execGetNumSubsteps(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[3].field_0x10;
  return;
}

// execGetSimulationTime @ 14464d8a0

void __cdecl
UClothingSimulationInteractor::execGetSimulationTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[3].field_0x14;
  return;
}

// execPhysicsAssetUpdated @ 14464d8d0

void __cdecl
UClothingSimulationInteractor::execPhysicsAssetUpdated
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014464d8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2d0))();
  return;
}

// execSetAnimDriveSpringStiffness @ 14464d900

void __cdecl
UClothingSimulationInteractor::execSetAnimDriveSpringStiffness
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,local_res8[0]);
  return;
}

// execSetMaxNumIterations @ 14464d990

void __cdecl
UClothingSimulationInteractor::execSetMaxNumIterations
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x300))(param_1,local_res8[0]);
  return;
}

// execSetNumIterations @ 14464da20

void __cdecl
UClothingSimulationInteractor::execSetNumIterations(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2f8))(param_1,local_res8[0]);
  return;
}

// execSetNumSubsteps @ 14464dab0

void __cdecl
UClothingSimulationInteractor::execSetNumSubsteps(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x308))(param_1,local_res8[0]);
  return;
}

