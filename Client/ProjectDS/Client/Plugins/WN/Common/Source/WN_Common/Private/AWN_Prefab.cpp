// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 8

// StaticClass @ 1494838d0

UClass * __cdecl AWN_Prefab::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_Prefab.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab",
               &Z_Registration_Info_UClass_AWN_Prefab.InnerSingleton,StaticRegisterNativesAWN_Prefab
               ,0x2c0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_Prefab>,InternalVTableHelperCtorCaller<AWN_Prefab>,local_res8
               ,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_Prefab.InnerSingleton;
}

// AWN_Prefab @ 14948c690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_Prefab * __thiscall AWN_Prefab::AWN_Prefab(AWN_Prefab *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7AWN_Prefab__6B_;
  return this;
}

// AWN_Prefab @ 14948c6c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_Prefab * __thiscall AWN_Prefab::AWN_Prefab(AWN_Prefab *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  FName FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  UClass *pUVar9;
  USceneComponent *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  AWN_Prefab *pAVar14;
  longlong *plVar15;
  UClass *pUVar16;
  undefined1 local_res18 [8];
  UClass *local_res20;
  UClass *local_68;
  FUObjectCppClassStaticFunctions local_60;
  FName local_58 [2];
  longlong *local_48;
  undefined8 local_40;
  
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7AWN_Prefab__6B_;
  pFVar8 = ::FName::FName(local_58,"Root Component");
  FVar4 = *pFVar8;
  pUVar9 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar10 = (USceneComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar9,pUVar9,true,false);
  AActor::SetRootComponent((AActor *)this,pUVar10);
  pUVar9 = *(UClass **)&this->field_0x1b8;
  (**(code **)(pUVar9->_padding_ + 0x5f8))(pUVar9,0);
  pUVar16 = (UClass *)0x0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar11 != (UClass *)0x0) goto LAB_14948c77e;
  }
  else if (pUVar11 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_14948c77e:
    pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar12 != (UClass *)0x0) {
      iVar2 = (int)pUVar12->_padding_;
      if (((int)pUVar11->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar12->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      pUVar12 = pUVar11;
      if (bVar7) goto LAB_14948c7b2;
    }
  }
  pUVar12 = pUVar16;
LAB_14948c7b2:
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == pUVar13) {
    local_res20 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res20,
               (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_48);
  }
  else {
    local_68 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_68,
               (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_48);
  }
  iVar2 = (int)local_40;
  plVar1 = local_48 + (int)local_40;
  plVar15 = local_48;
  while( true ) {
    if ((int)local_40 != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (plVar15 == plVar1) break;
    pUVar11 = (UClass *)*plVar15;
    if (pUVar11 != pUVar9) {
      lVar5 = pUVar11->_padding_;
      if (Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.InnerSingleton == (UClass *)0x0)
      {
        local_60.AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/WN_Common",L"WN_Prefab_StaticMeshComponent",
                   &Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.InnerSingleton,
                   UWN_Prefab_StaticMeshComponent::
                   StaticRegisterNativesUWN_Prefab_StaticMeshComponent,0x660,0x10,
                   CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
                   InternalConstructor<UWN_Prefab_StaticMeshComponent>,
                   InternalVTableHelperCtorCaller<UWN_Prefab_StaticMeshComponent>,&local_60,
                   UStaticMeshComponent::StaticClass,UObject::StaticClass);
      }
      if (Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.InnerSingleton != (UClass *)0x0)
      {
        iVar3 = (int)(Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.InnerSingleton)->
                     _padding_;
        if ((*(int *)(lVar5 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
            &(Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.InnerSingleton)->_padding_))
        {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          pUVar13 = UWN_Prefab_StaticMeshComponent::StaticClass();
          iVar3 = (int)pUVar13->_padding_;
          pUVar12 = pUVar16;
          if ((((*(int *)(pUVar11->_padding_ + 0x38) < iVar3) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar13->_padding_)) || (pUVar12 = pUVar11, pUVar11 == (UClass *)0x0)) &&
             (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_4964578866682134479>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Private\\Prefab\\WN_Prefab.cpp"
                                 ,0x31,"prefab_SMComp != nullptr"), bVar7)) {
            pcVar6 = (code *)swi(3);
            pAVar14 = (AWN_Prefab *)(*pcVar6)();
            return pAVar14;
          }
          (**(code **)(pUVar12->_padding_ + 0x790))(pUVar12,0);
        }
      }
    }
    plVar15 = plVar15 + 1;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return this;
}

// ~AWN_Prefab @ 14948fe50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_Prefab::~AWN_Prefab(AWN_Prefab *this)

{
  *(undefined ***)this = &___7AWN_Prefab__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 1494a1550

UClass * __cdecl AWN_Prefab::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_Prefab.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab",
               &Z_Registration_Info_UClass_AWN_Prefab.InnerSingleton,StaticRegisterNativesAWN_Prefab
               ,0x2c0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_Prefab>,InternalVTableHelperCtorCaller<AWN_Prefab>,local_res8
               ,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_Prefab.InnerSingleton;
}

// OnConstruction @ 1494a6c40

void __thiscall AWN_Prefab::OnConstruction(AWN_Prefab *this,TTransform<double> *param_1)

{
  return;
}

// PostLoad @ 1494a92a0

void __thiscall AWN_Prefab::PostLoad(AWN_Prefab *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPackageFileVersion FVar5;
  ForAnyElementType *pFVar6;
  AWN_Prefab *apAStack_18 [2];
  
  UObject::PostLoad((UObject *)this);
  lVar1 = *(longlong *)&this->field_0x158;
  if (lVar1 != 0) {
    pFVar6 = (ForAnyElementType *)(lVar1 + 0x1a8);
    apAStack_18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if ((pFVar6->Data <= (FScriptContainerElement *)apAStack_18) &&
       ((FScriptContainerElement *)apAStack_18 <
        pFVar6->Data + (longlong)*(int *)(lVar1 + 0x1b4) * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = *(int *)(lVar1 + 0x1b0);
    if (iVar4 == *(int *)(lVar1 + 0x1b4)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar6,(int *)(lVar1 + 0x1b4));
    }
    *(int *)(lVar1 + 0x1b0) = iVar4 + 1;
    *(AWN_Prefab **)(pFVar6->Data + (longlong)iVar4 * 8) = apAStack_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (apAStack_18[0] != (AWN_Prefab *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)apAStack_18[0]);
    }
  }
  FVar5 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar5 < 0x156) {
    this->field_0x5b = -(this->field_0x60 != '\0') & 8U | this->field_0x5b & 0xf7;
  }
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    this->field_0x59 = this->field_0x59 & 0xfb;
  }
  this->field_0x5c = this->field_0x5c | 1;
  return;
}

// StaticRegisterNativesAWN_Prefab @ 1494ae1a0

void __cdecl AWN_Prefab::StaticRegisterNativesAWN_Prefab(void)

{
  return;
}

