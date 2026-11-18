// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 148679950

UClass * __cdecl USoundSubmixBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundSubmixBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundSubmixBase",
               &Z_Registration_Info_UClass_USoundSubmixBase.InnerSingleton,
               StaticRegisterNativesUSoundSubmixBase,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundSubmixBase>,
               InternalVTableHelperCtorCaller<USoundSubmixBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundSubmixBase.InnerSingleton;
}

// USoundSubmixBase @ 1486981e0

USoundSubmixBase * __thiscall
USoundSubmixBase::USoundSubmixBase(USoundSubmixBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bAutoDisable = true;
  this->_padding_ = (longlong)&___7USoundSubmixBase__6B_;
  (this->ChildSubmixes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildSubmixes).ArrayNum = 0;
  (this->ChildSubmixes).ArrayMax = 0;
  *(undefined8 *)&this->DynamicChildSubmixes = 0;
  *(undefined8 *)&(this->DynamicChildSubmixes).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicChildSubmixes).field_0x20 = 0;
  this->AutoDisableTime = 0.01;
  *(undefined4 *)&(this->DynamicChildSubmixes).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicChildSubmixes).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicChildSubmixes).field_0x34 = 0;
  *(undefined4 *)&(this->DynamicChildSubmixes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DynamicChildSubmixes).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicChildSubmixes).field_0x48 = 0;
  return this;
}

// USoundSubmixBase @ 148698250

USoundSubmixBase * __thiscall
USoundSubmixBase::USoundSubmixBase(USoundSubmixBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this);
  this->bAutoDisable = true;
  this->_padding_ = (longlong)&___7USoundSubmixBase__6B_;
  (this->ChildSubmixes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildSubmixes).ArrayNum = 0;
  (this->ChildSubmixes).ArrayMax = 0;
  *(undefined8 *)&this->DynamicChildSubmixes = 0;
  *(undefined8 *)&(this->DynamicChildSubmixes).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicChildSubmixes).field_0x20 = 0;
  this->AutoDisableTime = 0.01;
  *(undefined4 *)&(this->DynamicChildSubmixes).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicChildSubmixes).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicChildSubmixes).field_0x34 = 0;
  *(undefined4 *)&(this->DynamicChildSubmixes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DynamicChildSubmixes).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicChildSubmixes).field_0x48 = 0;
  return this;
}

// ~USoundSubmixBase @ 14869bff0

void __thiscall USoundSubmixBase::~USoundSubmixBase(USoundSubmixBase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7USoundSubmixBase__6B_;
  *(undefined4 *)&(this->DynamicChildSubmixes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DynamicChildSubmixes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicChildSubmixes);
  pFVar2 = (this->ChildSubmixes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 1486a6a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundSubmixBase::BeginDestroy(USoundSubmixBase *this)

{
  FAudioDeviceManager *this_00;
  
  if (GEngine != (UEngine *)0x0) {
    this_00 = UEngine::GetAudioDeviceManager(GEngine);
    if (this_00 != (FAudioDeviceManager *)0x0) {
      FAudioDeviceManager::UnregisterSoundSubmix(this_00,this);
    }
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// DynamicConnect @ 1486b0f20

bool __thiscall
USoundSubmixBase::DynamicConnect(USoundSubmixBase *this,UObject *param_1,USoundSubmixBase *param_2)

{
  return false;
}

// DynamicDisconnect @ 1486b1950

bool __thiscall USoundSubmixBase::DynamicDisconnect(USoundSubmixBase *this,UObject *param_1)

{
  return false;
}

// FindDynamicAncestor @ 1486b66b0

USoundSubmixBase * __thiscall USoundSubmixBase::FindDynamicAncestor(USoundSubmixBase *this)

{
  return (USoundSubmixBase *)0x0;
}

// GetDesc @ 1486bd780

FString * __thiscall
USoundSubmixBase::GetDesc(USoundSubmixBase *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Sound Submix");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1486c59b0

UClass * __cdecl USoundSubmixBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundSubmixBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundSubmixBase",
               &Z_Registration_Info_UClass_USoundSubmixBase.InnerSingleton,
               StaticRegisterNativesUSoundSubmixBase,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundSubmixBase>,
               InternalVTableHelperCtorCaller<USoundSubmixBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundSubmixBase.InnerSingleton;
}

// IsDynamic @ 1486d0f80

bool __thiscall USoundSubmixBase::IsDynamic(USoundSubmixBase *this,bool param_1)

{
  return false;
}

// PostLoad @ 1486e0cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundSubmixBase::PostLoad(USoundSubmixBase *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  FAudioDeviceManager *this_00;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 local_res10 [8];
  FString local_38;
  
  UObject::PostLoad((UObject *)this);
  if ((ClearBrokenSubmixAssetsCVar != 0) &&
     (iVar10 = (this->ChildSubmixes).ArrayNum + -1, -1 < iVar10)) {
    lVar9 = (longlong)iVar10;
    lVar11 = lVar9 * 8;
    do {
      if (((this->ChildSubmixes).ArrayNum <= iVar10) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)((this->ChildSubmixes).AllocatorInstance.Data + lVar11);
      if (lVar3 != 0) {
        pUVar8 = USoundSubmixWithParentBase::StaticClass();
        iVar2 = (int)pUVar8->_padding_;
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar8->_padding_)) {
          local_res10[0] = 0;
          `USoundSubmixBase::PostLoad'::__l36::<lambda_1>::operator()(local_res10);
        }
        else {
          if (*(USoundSubmixBase **)(lVar3 + 0x90) == (USoundSubmixBase *)0x0) {
            bVar6 = this == (USoundSubmixBase *)0x0;
          }
          else {
            bVar6 = *(USoundSubmixBase **)(lVar3 + 0x90) == this;
          }
          if (bVar6) goto LAB_1486e0e99;
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2364199159361176015>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundSubmix.cpp"
                             ,0x1cf,"CastedChildSubmix->ParentSubmix == this");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (2 < (byte)LogAudio._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          }
        }
        if (((this->ChildSubmixes).ArrayNum <= iVar10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar2 = (this->ChildSubmixes).ArrayNum;
        pFVar4 = (this->ChildSubmixes).AllocatorInstance.Data;
        iVar7 = (iVar2 - iVar10) + -1;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar4 + lVar9 * 8,pFVar4 + (longlong)(iVar2 - iVar7) * 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->ChildSubmixes).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->ChildSubmixes).AllocatorInstance,(this->ChildSubmixes).ArrayNum,
                   &(this->ChildSubmixes).ArrayMax);
      }
LAB_1486e0e99:
      lVar9 = lVar9 + -1;
      lVar11 = lVar11 + -8;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  if (GEngine == (UEngine *)0x0) {
    this_00 = (FAudioDeviceManager *)0x0;
  }
  else {
    this_00 = UEngine::GetAudioDeviceManager(GEngine);
  }
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
  bVar6 = ::FString::StartsWith(&local_38,L"/Temp/",6,IgnoreCase);
  if ((this_00 != (FAudioDeviceManager *)0x0) && (!bVar6)) {
    FAudioDeviceManager::RegisterSoundSubmix(this_00,this);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUSoundSubmixBase @ 1486f1a80

void __cdecl USoundSubmixBase::StaticRegisterNativesUSoundSubmixBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_USoundSubmixBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDynamicConnect @ 1486fa7e0

void __cdecl USoundSubmixBase::execDynamicConnect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res10,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execDynamicDisconnect @ 1486fa8c0

void __cdecl USoundSubmixBase::execDynamicDisconnect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execFindDynamicAncestor @ 1486fa970

void __cdecl
USoundSubmixBase::execFindDynamicAncestor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// operator() @ 15052f950

bool __thiscall `USoundSubmixBase::PostLoad'::__l36::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2364199159361176023>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2364199159361176023>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

