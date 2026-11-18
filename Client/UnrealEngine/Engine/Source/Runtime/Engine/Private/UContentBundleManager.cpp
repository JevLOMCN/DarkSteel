// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 148a28710

UClass * __cdecl UContentBundleManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleManager",
               &Z_Registration_Info_UClass_UContentBundleManager.InnerSingleton,
               StaticRegisterNativesUContentBundleManager,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UContentBundleManager>,
               InternalVTableHelperCtorCaller<UContentBundleManager>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleManager.InnerSingleton;
}

// UContentBundleManager @ 148a424a0

UContentBundleManager * __thiscall
UContentBundleManager::UContentBundleManager(UContentBundleManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UContentBundleManager__6B_;
  (this->ContentBundleContainers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentBundleContainers).ArrayNum = 0;
  (this->ContentBundleContainers).ArrayMax = 0;
  return this;
}

// UContentBundleManager @ 148a424e0

UContentBundleManager * __thiscall
UContentBundleManager::UContentBundleManager(UContentBundleManager *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UContentBundleManager__6B_;
  (this->ContentBundleContainers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentBundleContainers).ArrayNum = 0;
  (this->ContentBundleContainers).ArrayMax = 0;
  return this;
}

// ~UContentBundleManager @ 148a44580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UContentBundleManager::~UContentBundleManager(UContentBundleManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UContentBundleManager__6B_;
  DestructItems<TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_>,int>
            ((TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *)
             (this->ContentBundleContainers).AllocatorInstance.Data,
             (this->ContentBundleContainers).ArrayNum);
  pFVar1 = (this->ContentBundleContainers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 148a46ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`UContentBundleManager::DrawContentBundlesStatus'::__l11::<lambda_2>::operator()
          (void *this,FContentBundleBase *param_1)

{
  UContentBundleDescriptor *pUVar1;
  float *pfVar2;
  TVector2<double> *pTVar3;
  UContentBundleDescriptor *pUVar4;
  char cVar5;
  UFont *pUVar6;
  ForAnyElementType FVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  
  cVar5 = (**(code **)(param_1->_padding_ + 0x18))(param_1);
  if (cVar5 != '\0') {
    pUVar1 = (param_1->Descriptor).field0_0x0.DebugPtr;
    pfVar2 = *(float **)((longlong)this + 0x18);
    pTVar3 = *(TVector2<double> **)((longlong)this + 0x10);
    pUVar6 = UEngine::GetSmallFont();
    pUVar4 = (param_1->Descriptor).field0_0x0.DebugPtr;
    if ((4 < (byte)LogContentBundle._0_1_) &&
       ((((pUVar4->Guid).D == 0 && (pUVar4->Guid).C == 0) && (pUVar4->Guid).B == 0) &&
        (pUVar4->Guid).A == 0)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    }
    CityHash64((char *)&pUVar4->Guid,0x10);
    ::FString::PrintfImpl(&local_38,L"%X");
    ::FString::PrintfImpl(&local_48,L"%s [%s]");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_28,(wchar_t *)FVar7.Data);
    FWorldPartitionDebugHelper::DrawLegendItem
              ((UCanvas *)**(undefined8 **)((longlong)this + 8),&local_28,pUVar6,&pUVar1->DebugColor
               ,&FColor::White,pTVar3,pfVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// AddReferencedObjects @ 148a49a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UContentBundleManager::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  UClass *pUVar3;
  FString *pFVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FReferenceCollector *local_res8;
  undefined1 local_38 [16];
  FString local_28;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar4 = GetTypeName<UContentBundleManager>((FString *)local_38);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar3 = GetPrivateStaticClass();
  iVar2 = (int)pUVar3->_padding_;
  if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar3->_padding_)) {
    puVar5 = *(undefined8 **)(param_1 + 1);
    iVar2 = *(int *)&param_1[1].field_0x8;
    puVar1 = puVar5 + iVar2;
    while( true ) {
      if (*(int *)&param_1[1].field_0x8 != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (puVar5 == puVar1) break;
      local_38._8_8_ = &local_res8;
      local_38._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FContentBundleContainer::AddReferencedObjects'::__l2::<lambda_1>,void,FContentBundleBase_*>
           ::Call;
      local_res8 = param_2;
      FContentBundleContainer::ForEachContentBundle
                ((FContentBundleContainer *)*puVar5,
                 (TFunctionRef<void___cdecl(FContentBundleBase_*)> *)local_38);
      puVar5 = puVar5 + 1;
    }
    return;
  }
  pFVar4 = GetTypeName<UContentBundleManager>((FString *)local_38);
  pwVar6 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_28,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

// CanInject @ 148a4c740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UContentBundleManager::CanInject(UContentBundleManager *this)

{
  bool bVar1;
  UClass *pUVar2;
  UWorld *this_00;
  UWorldPartition *this_01;
  
  pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  this_01 = UWorld::GetWorldPartition(this_00);
  if (this_01 != (UWorldPartition *)0x0) {
    bVar1 = UWorldPartition::IsInitialized(this_01);
    return bVar1;
  }
  return false;
}

// Deinitialize @ 148a4fb70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UContentBundleManager::Deinitialize(UContentBundleManager *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lVar4 = (**(code **)(this->_padding_ + 0x180))();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar4 + 0x718),this);
  lVar4 = (**(code **)(this->_padding_ + 0x180))(this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar4 + 0x738),this);
  iVar3 = (this->ContentBundleContainers).ArrayNum;
  pFVar5 = (this->ContentBundleContainers).AllocatorInstance.Data;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ContentBundleContainers).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    FContentBundleContainer::Deinitialize(*(FContentBundleContainer **)pFVar5);
    pFVar5 = pFVar5 + 8;
  }
  DestructItems<TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_>,int>
            ((TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *)
             (this->ContentBundleContainers).AllocatorInstance.Data,
             (this->ContentBundleContainers).ArrayNum);
  piVar1 = &(this->ContentBundleContainers).ArrayMax;
  (this->ContentBundleContainers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ContentBundleContainers).AllocatorInstance,0,piVar1);
  }
  return;
}

// DrawContentBundlesStatus @ 148a50730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UContentBundleManager::DrawContentBundlesStatus
          (UContentBundleManager *this,UWorld *param_1,UCanvas *param_2,TVector2<double> *param_3)

{
  TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *pTVar1;
  UFont *pUVar2;
  UCanvas *local_res18;
  char local_58 [4];
  float local_54;
  char *local_50;
  undefined1 local_48 [16];
  TVector2<double>_u_0 local_38;
  TVector2<double> *local_28;
  UCanvas **local_20;
  TVector2<double>_u_0 *local_18;
  float *local_10;
  
  local_res18 = param_2;
  pTVar1 = GetContentBundleContainer(this,param_1);
  if ((pTVar1 != (TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *)0x0
      ) && ((pTVar1->Ptr->ContentBundles).ArrayNum != 0)) {
    local_38._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_38._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_50 = local_58;
    local_54 = 0.0;
    local_48._8_8_ = &local_50;
    local_58[0] = '\0';
    local_48._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UContentBundleManager::DrawContentBundlesStatus'::__l8::<lambda_1>,bool,FContentBundleBase_*>
         ::Call;
    FContentBundleContainer::ForEachContentBundleBreakable
              (pTVar1->Ptr,(TFunctionRef<bool___cdecl(FContentBundleBase_*)> *)local_48);
    if (local_58[0] != '\0') {
      pUVar2 = UEngine::GetSmallFont();
      ::FString::FString((FString *)local_48,L"Injected Content Bundles");
      FWorldPartitionDebugHelper::DrawText
                (local_res18,(FString *)local_48,pUVar2,&FColor::Green,
                 (TVector2<double> *)&local_38._s_0,&local_54);
      if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48._0_8_);
      }
      local_20 = &local_res18;
      local_18 = &local_38;
      local_10 = &local_54;
      local_48._8_8_ = &local_28;
      local_48._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UContentBundleManager::DrawContentBundlesStatus'::__l11::<lambda_2>,void,FContentBundleBase_*>
           ::Call;
      local_28 = param_3;
      FContentBundleContainer::ForEachContentBundle
                (pTVar1->Ptr,(TFunctionRef<void___cdecl(FContentBundleBase_*)> *)local_48);
    }
    (param_3->field0_0x0)._s_0.X =
         (double)(local_54 + __real_41200000) + (param_3->field0_0x0)._s_0.X;
  }
  return;
}

// GetContentBundle @ 148a54c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FContentBundleBase * __thiscall
UContentBundleManager::GetContentBundle(UContentBundleManager *this,UWorld *param_1,FGuid *param_2)

{
  TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *pTVar1;
  FContentBundleBase *local_res20;
  FContentBundleBase **local_28;
  FGuid *local_20;
  code *local_18;
  undefined8 **local_10;
  
  local_res20 = (FContentBundleBase *)0x0;
  pTVar1 = GetContentBundleContainer(this,param_1);
  if (pTVar1 != (TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *)0x0)
  {
    local_28 = &local_res20;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UContentBundleManager::GetContentBundle'::__l5::<lambda_1>,bool,FContentBundleBase_*>
               ::Call;
    local_20 = param_2;
    FContentBundleContainer::ForEachContentBundleBreakable
              (pTVar1->Ptr,(TFunctionRef<bool___cdecl(FContentBundleBase_*)> *)&local_18);
  }
  return local_res20;
}

// GetContentBundleContainer @ 148a54cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> * __thiscall
UContentBundleManager::GetContentBundleContainer(UContentBundleManager *this,UWorld *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *pTVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar2 = (this->ContentBundleContainers).AllocatorInstance.Data;
  iVar1 = (this->ContentBundleContainers).ArrayNum;
  pFVar8 = pFVar2;
  while( true ) {
    if (pFVar8 == pFVar2 + (longlong)iVar1 * 8) {
      return (TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *)0x0;
    }
    if (*(UWorld **)(*(longlong *)pFVar8 + 0x10) == param_1) break;
    pFVar8 = pFVar8 + 8;
  }
  uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
  if (uVar7 == 0xffffffff) {
    return (TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar7 < iVar1) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *)
             (*pcVar3)();
    return pTVar6;
  }
  return (TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *)
         ((this->ContentBundleContainers).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
}

// GetContentBundleContainer @ 148a54ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> * __thiscall
UContentBundleManager::GetContentBundleContainer(UContentBundleManager *this,UWorld *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *pTVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar2 = (this->ContentBundleContainers).AllocatorInstance.Data;
  iVar1 = (this->ContentBundleContainers).ArrayNum;
  pFVar8 = pFVar2;
  while( true ) {
    if (pFVar8 == pFVar2 + (longlong)iVar1 * 8) {
      return (TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *)0x0;
    }
    if (*(UWorld **)(*(longlong *)pFVar8 + 0x10) == param_1) break;
    pFVar8 = pFVar8 + 8;
  }
  uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
  if (uVar7 == 0xffffffff) {
    return (TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar7 < iVar1) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *)
             (*pcVar3)();
    return pTVar6;
  }
  return (TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *)
         ((this->ContentBundleContainers).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
}

// GetContentBundleContainerIndex @ 148a54d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall
UContentBundleManager::GetContentBundleContainerIndex(UContentBundleManager *this,UWorld *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->ContentBundleContainers).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->ContentBundleContainers).ArrayNum * 8) {
      return 0xffffffff;
    }
    if (*(UWorld **)(*(longlong *)pFVar2 + 0x10) == param_1) break;
    pFVar2 = pFVar2 + 8;
  }
  return (uint)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
}

// GetPrivateStaticClass @ 148a59d60

UClass * __cdecl UContentBundleManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleManager",
               &Z_Registration_Info_UClass_UContentBundleManager.InnerSingleton,
               StaticRegisterNativesUContentBundleManager,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UContentBundleManager>,
               InternalVTableHelperCtorCaller<UContentBundleManager>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleManager.InnerSingleton;
}

// Initialize @ 148a5c200

void __thiscall UContentBundleManager::Initialize(UContentBundleManager *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x180))();
  TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>::
  AddUObject<UContentBundleManager>
            ((TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>
              *)(lVar1 + 0x718),(UContentBundleManager *)&stack0x00000008,(pmf_c2420d18)this);
  lVar1 = (**(code **)(this->_padding_ + 0x180))(this);
  TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>::
  AddUObject<UContentBundleManager>
            ((TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>
              *)(lVar1 + 0x738),(UContentBundleManager *)&stack0x00000008,(pmf_c2420d18)this);
  return;
}

// OnWorldPartitionInitialized @ 148a601b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UContentBundleManager::OnWorldPartitionInitialized
          (UContentBundleManager *this,UWorldPartition *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  UWorld *pUVar7;
  TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *pTVar8;
  FContentBundleContainer *pFVar9;
  FContentBundleContainer *this_00;
  
  pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar6 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar5);
  pUVar7 = UWorldPartition::GetWorld(param_1);
  if ((pUVar7 == pUVar6) && (param_1->bDisableContentBundles == '\0')) {
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar6 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar5);
    pTVar8 = GetContentBundleContainer(this,pUVar6);
    if ((pTVar8 != (TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *)
                   0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetContentBundleContainer(InWorldPartition->GetTypedOuter<UWorld>()) == nullptr"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleWorldSubsystem.cpp"
                           ,0xee,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar6 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar5);
    pFVar9 = ::operator_new(0x18);
    this_00 = (FContentBundleContainer *)0x0;
    if (pFVar9 != (FContentBundleContainer *)0x0) {
      (pFVar9->ContentBundles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar9->ContentBundles).ArrayNum = 0;
      (pFVar9->ContentBundles).ArrayMax = 0;
      pFVar9->InjectedWorld = pUVar6;
      this_00 = pFVar9;
    }
    iVar4 = (this->ContentBundleContainers).ArrayNum;
    piVar1 = &(this->ContentBundleContainers).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ContentBundleContainers).AllocatorInstance,piVar1);
    }
    (this->ContentBundleContainers).ArrayNum = iVar4 + 1;
    *(FContentBundleContainer **)
     ((this->ContentBundleContainers).AllocatorInstance.Data + (longlong)iVar4 * 8) = this_00;
    FContentBundleContainer::Initialize(this_00);
  }
  return;
}

// OnWorldPartitionUninitialized @ 148a602c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UContentBundleManager::OnWorldPartitionUninitialized
          (UContentBundleManager *this,UWorldPartition *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UWorld *pUVar7;
  UWorld *pUVar8;
  UObject *pUVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  
  pUVar6 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar7 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar6);
  pUVar8 = UWorldPartition::GetWorld(param_1);
  if (pUVar8 == pUVar7) {
    pUVar6 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar6);
    pFVar2 = (this->ContentBundleContainers).AllocatorInstance.Data;
    iVar1 = (this->ContentBundleContainers).ArrayNum;
    pFVar11 = pFVar2;
    if (pFVar2 != pFVar2 + (longlong)iVar1 * 8) {
      while (*(UObject **)(*(longlong *)pFVar11 + 0x10) != pUVar9) {
        pFVar11 = pFVar11 + 8;
        if (pFVar11 == pFVar2 + (longlong)iVar1 * 8) {
          return;
        }
      }
      uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar2 >> 3);
      if (uVar10 != 0xffffffff) {
        if (((int)uVar10 < 0) || (iVar1 <= (int)uVar10)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContentBundleContainers.IsValidIndex(ContainerIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleWorldSubsystem.cpp"
                             ,0x100,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar5 = 0;
        if ((int)uVar10 < (this->ContentBundleContainers).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FContentBundleContainer::Deinitialize
                  (*(FContentBundleContainer **)
                    ((this->ContentBundleContainers).AllocatorInstance.Data +
                    (longlong)(int)uVar10 * 8));
        uVar5 = 0;
        if ((int)uVar10 < (this->ContentBundleContainers).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        TArray<TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(&this->ContentBundleContainers,uVar10);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->ContentBundleContainers).AllocatorInstance,
                   (this->ContentBundleContainers).ArrayNum,
                   &(this->ContentBundleContainers).ArrayMax);
      }
    }
  }
  return;
}

// StaticRegisterNativesUContentBundleManager @ 148a6a2f0

void __cdecl UContentBundleManager::StaticRegisterNativesUContentBundleManager(void)

{
  return;
}

