// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// FLightWeightInstanceSubsystem @ 147ea58a0

FLightWeightInstanceSubsystem * __thiscall
FLightWeightInstanceSubsystem::FLightWeightInstanceSubsystem(FLightWeightInstanceSubsystem *this)

{
  (this->LWInstanceManagers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LWInstanceManagers).ArrayNum = 0;
  (this->LWInstanceManagers).ArrayMax = 0;
  (this->LWIManagersRWLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->OnLevelActorAddedHandle).ID = 0;
  (this->OnLevelActorDeletedHandle).ID = 0;
  return this;
}

// ~FLightWeightInstanceSubsystem @ 147ea9070

void __thiscall
FLightWeightInstanceSubsystem::~FLightWeightInstanceSubsystem(FLightWeightInstanceSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->LWIManagersRWLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->LWIManagersRWLock);
  }
  pFVar1 = (this->LWInstanceManagers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// AddManager @ 147eae4b0

bool __thiscall
FLightWeightInstanceSubsystem::AddManager
          (FLightWeightInstanceSubsystem *this,ALightWeightInstanceManager *param_1)

{
  FPlatformRWLock *SRWLock;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FLightWeightInstanceSubsystem *pFVar7;
  ALightWeightInstanceManager *local_res10 [3];
  
  SRWLock = &this->LWIManagersRWLock;
  local_res10[0] = param_1;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar7 = Get();
  pFVar2 = (pFVar7->LWInstanceManagers).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)(pFVar7->LWInstanceManagers).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = (pFVar7->LWInstanceManagers).ArrayNum;
  piVar1 = &(pFVar7->LWInstanceManagers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar7,piVar1);
  }
  pFVar2 = (pFVar7->LWInstanceManagers).AllocatorInstance.Data;
  (pFVar7->LWInstanceManagers).ArrayNum = iVar6 + 1;
  *(ALightWeightInstanceManager **)(pFVar2 + (longlong)iVar6 * 8) = local_res10[0];
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return iVar6 != 0;
}

// CreateNewLightWeightInstance @ 147eb64e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActorInstanceHandle * __thiscall
FLightWeightInstanceSubsystem::CreateNewLightWeightInstance
          (FLightWeightInstanceSubsystem *this,FActorInstanceHandle *__return_storage_ptr__,
          UClass *param_1,FLWIData *param_2,UDataLayerInstance *param_3,UWorld *param_4)

{
  int iVar1;
  int iVar2;
  ALightWeightInstanceManager *this_00;
  UClass *pUVar3;
  ALightWeightInstanceManager *local_res20;
  FWeakObjectPtr local_48;
  IActorInstanceManagerInterface *pIStack_40;
  TWeakInterfacePtr<IActorInstanceManagerInterface> local_38;
  TVector<double>_u_0 local_28;
  
  if (param_2 != (FLWIData *)0x0) {
    local_28._s_0.X = (param_2->Transform).Translation.XY.m128d_f64[0];
    local_28._s_0.Y = (param_2->Transform).Translation.XY.m128d_f64[1];
    local_28._s_0.Z = (param_2->Transform).Translation.ZW.m128d_f64[0];
    this_00 = FindOrAddLightWeightInstanceManager
                        (this,param_1,param_4,(TVector<double> *)&local_28._s_0,param_3);
    if (this_00 != (ALightWeightInstanceManager *)0x0) {
      if ((this_00->FreeIndices).ArrayNum < 1) {
        iVar2 = (this_00->ValidIndices).ArrayNum;
      }
      else {
        iVar1 = (this_00->FreeIndices).ArrayNum;
        iVar2 = *(int *)((this_00->FreeIndices).AllocatorInstance.Data + (longlong)iVar1 * 4 + -4);
        (this_00->FreeIndices).ArrayNum = iVar1 + -1;
      }
      (**(code **)(this_00->_padding_ + 0x770))(this_00,param_2,iVar2);
      iVar2 = (**(code **)(this_00->_padding_ + 0x7a8))(this_00,iVar2);
      local_48.ObjectIndex = 0;
      local_48.ObjectSerialNumber = 0;
      pUVar3 = Z_Construct_UClass_UActorInstanceManagerInterface_NoRegister();
      pIStack_40 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar3);
      if (pIStack_40 != (IActorInstanceManagerInterface *)0x0) {
        local_res20 = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_res20);
      }
      local_38.ObjectInstance.WeakPtr = local_48;
      local_38.InterfaceInstance = pIStack_40;
      FActorInstanceHandle::FActorInstanceHandle(__return_storage_ptr__,&local_38,iVar2);
      return __return_storage_ptr__;
    }
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x1d = 0;
  __return_storage_ptr__->field_0x1f = 0;
  (__return_storage_ptr__->ReferenceObject).WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->ManagerInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->ManagerInterface).InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  __return_storage_ptr__->InstanceIndex = -1;
  __return_storage_ptr__->ResolutionStatus = Invalid;
  return __return_storage_ptr__;
}

// DeleteInstance @ 147eb7260

void __thiscall
FLightWeightInstanceSubsystem::DeleteInstance
          (FLightWeightInstanceSubsystem *this,FActorInstanceHandle *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ALightWeightInstanceManager *pAVar1;
  
  pAVar1 = FindLightWeightInstanceManager(this,param_1);
  if (pAVar1 != (ALightWeightInstanceManager *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pAVar1->_padding_ + 0x778);
                    /* WARNING: Could not recover jumptable at 0x000147eb7288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pAVar1,param_1->InstanceIndex,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// FindBestInstanceManagerClass @ 147ebab00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UClass * __thiscall
FLightWeightInstanceSubsystem::FindBestInstanceManagerClass
          (FLightWeightInstanceSubsystem *this,UClass *param_1)

{
  FScriptContainerElement *pFVar1;
  ALightWeightInstanceManager *pAVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  UClass *pUVar15;
  ForAnyElementType FVar16;
  int iVar17;
  uint local_res18 [2];
  FUObjectCppClassStaticFunctions local_res20;
  undefined8 local_98;
  FName local_90;
  FName local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  FString local_70;
  FString local_60;
  TObjectIterator<UClass> local_50;
  
  pUVar15 = (UClass *)0x0;
  local_res18[0] = 0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  local_50.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ObjectArray.ArrayNum = 0;
  local_50.ObjectArray.ArrayMax = 0;
  local_50.Index = 0xffffffff;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar9,&local_50.ObjectArray,true,RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_50);
  pUVar9 = pUVar15;
  while ((lVar14 = (longlong)local_50.Index, -1 < local_50.Index &&
         (local_50.Index < local_50.ObjectArray.ArrayNum))) {
    uVar6 = 0;
    if (local_50.Index < local_50.ObjectArray.ArrayNum) {
      uVar6 = (uint)~local_50.Index >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar9 = (UClass *)(*pcVar3)();
        return pUVar9;
      }
    }
    lVar14 = *(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar14 * 8);
    iVar8 = local_50.ObjectArray.ArrayNum;
    if (Z_Registration_Info_UClass_ALightWeightInstanceManager.InnerSingleton == (UClass *)0x0) {
      local_res20.AddReferencedObjects = AActor::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/Engine",L"LightWeightInstanceManager",
                 &Z_Registration_Info_UClass_ALightWeightInstanceManager.InnerSingleton,
                 ALightWeightInstanceManager::StaticRegisterNativesALightWeightInstanceManager,0x388
                 ,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
                 InternalConstructor<ALightWeightInstanceManager>,
                 InternalVTableHelperCtorCaller<ALightWeightInstanceManager>,&local_res20,
                 AActor::StaticClass,UObject::StaticClass);
      iVar8 = local_50.ObjectArray.ArrayNum;
      if (Z_Registration_Info_UClass_ALightWeightInstanceManager.InnerSingleton != (UClass *)0x0)
      goto LAB_147ebac93;
    }
    else {
LAB_147ebac93:
      iVar17 = (int)(Z_Registration_Info_UClass_ALightWeightInstanceManager.InnerSingleton)->
                    _padding_;
      if ((*(int *)(lVar14 + 0x38) < iVar17) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar17 * 8) !=
          &(Z_Registration_Info_UClass_ALightWeightInstanceManager.InnerSingleton)->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar14 = (longlong)local_50.Index;
        uVar7 = 0;
        uVar6 = uVar7;
        if (local_50.Index < iVar8) {
          uVar6 = (uint)~local_50.Index >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pUVar9 = (UClass *)(*pcVar3)();
            return pUVar9;
          }
          iVar8 = local_50.ObjectArray.ArrayNum;
        }
        if ((*(byte *)(*(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar14 * 8) +
                      0xd4) & 1) == 0) {
          lVar14 = (longlong)local_50.Index;
          uVar6 = uVar7;
          if (local_50.Index < iVar8) {
            uVar6 = (uint)~local_50.Index >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pUVar9 = (UClass *)(*pcVar3)();
            return pUVar9;
          }
          local_90 = *(FName *)(*(longlong *)
                                 (local_50.ObjectArray.AllocatorInstance.Data + lVar14 * 8) + 0x18);
          ::FName::ToString(&local_90,&local_60);
          bVar4 = ::FString::StartsWith(&local_60,L"SKEL_",5,IgnoreCase);
          if (bVar4) {
LAB_147ebae37:
            bVar4 = true;
          }
          else {
            lVar14 = (longlong)local_50.Index;
            uVar6 = uVar7;
            if (local_50.Index < local_50.ObjectArray.ArrayNum) {
              uVar6 = (uint)~local_50.Index >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              pUVar9 = (UClass *)(*pcVar3)();
              return pUVar9;
            }
            pUVar9 = (UClass *)&DAT_00000002;
            local_88 = *(FName *)(*(longlong *)
                                   (local_50.ObjectArray.AllocatorInstance.Data + lVar14 * 8) + 0x18
                                 );
            ::FName::ToString(&local_88,&local_70);
            bVar4 = ::FString::StartsWith(&local_70,L"REINST_",7,IgnoreCase);
            if (bVar4) goto LAB_147ebae37;
            bVar4 = false;
          }
          uVar6 = (uint)pUVar9;
          if ((pUVar9 != (UClass *)0x0) &&
             (uVar6 = 0, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          pUVar9 = (UClass *)(ulonglong)uVar6;
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          if (!bVar4) {
            lVar14 = (longlong)local_50.Index;
            if (local_50.Index < local_50.ObjectArray.ArrayNum) {
              uVar7 = (uint)~local_50.Index >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              pUVar9 = (UClass *)(*pcVar3)();
              return pUVar9;
            }
            local_98 = *(undefined8 *)(local_50.ObjectArray.AllocatorInstance.Data + lVar14 * 8);
            if (((local_80.Data <= (FScriptContainerElement *)&local_98) &&
                ((FScriptContainerElement *)&local_98 < local_80.Data + (longlong)local_78._4_4_ * 8
                )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar4)) {
              pcVar3 = (code *)swi(3);
              pUVar9 = (UClass *)(*pcVar3)();
              return pUVar9;
            }
            iVar8 = (int)local_78;
            if ((int)local_78 == local_78._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_80,(int *)((longlong)&local_78 + 4));
            }
            local_78 = CONCAT44(local_78._4_4_,iVar8 + 1);
            *(undefined8 *)(local_80.Data + (longlong)iVar8 * 8) = local_98;
          }
        }
      }
    }
    TObjectIterator<UClass>::Advance(&local_50);
  }
  if (local_50.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ObjectArray.AllocatorInstance.Data);
  }
  iVar8 = (int)local_78;
  uVar13 = (ulonglong)(int)local_78;
  iVar17 = 0x7fffffff;
  pFVar1 = local_80.Data + uVar13 * 8;
  FVar16.Data = local_80.Data;
  do {
    while( true ) {
      if ((int)uVar13 != iVar8) {
        local_res18[0] = local_res18[0] & 0xffffff00;
        `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      pUVar9 = pUVar15;
      if (FVar16.Data == pFVar1) goto LAB_147ebb177;
      pUVar9 = *(UClass **)FVar16.Data;
      if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar9);
      }
      pAVar2 = (ALightWeightInstanceManager *)(pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar10 = ALightWeightInstanceManager::StaticClass();
      lVar14 = pAVar2->_padding_;
      iVar12 = (int)pUVar10->_padding_;
      if (((*(int *)(lVar14 + 0x38) < iVar12) ||
          ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar12 * 8) !=
           &pUVar10->_padding_)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ret->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x1181,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar9 = (UClass *)(*pcVar3)();
        return pUVar9;
      }
      if (param_1 != (UClass *)0x0) break;
LAB_147ebb168:
      uVar13 = local_78 & 0xffffffff;
      FVar16.Data = FVar16.Data + 8;
    }
    pUVar10 = ALightWeightInstanceManager::GetAcceptedClass(pAVar2);
    if (pUVar10 == (UClass *)0x0) {
LAB_147ebb04b:
      bVar4 = false;
    }
    else {
      iVar12 = (int)pUVar10->_padding_;
      if (((int)param_1->_padding_ < iVar12) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar12 * 8) !=
          &pUVar10->_padding_)) goto LAB_147ebb04b;
      bVar4 = true;
    }
    if (!bVar4) goto LAB_147ebb168;
    if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar9);
    }
    pAVar2 = (ALightWeightInstanceManager *)(pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar10 = ALightWeightInstanceManager::StaticClass();
    lVar14 = pAVar2->_padding_;
    iVar12 = (int)pUVar10->_padding_;
    if (((*(int *)(lVar14 + 0x38) < iVar12) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar12 * 8) !=
         &pUVar10->_padding_)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ret->IsA(T::StaticClass())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x1181,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UClass *)(*pcVar3)();
      return pUVar9;
    }
    pUVar10 = ALightWeightInstanceManager::GetRepresentedClassInternal(pAVar2);
    if (pUVar10 == (UClass *)0x0) {
      if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar9);
      }
      pAVar2 = (ALightWeightInstanceManager *)(pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar10 = ALightWeightInstanceManager::StaticClass();
      lVar14 = pAVar2->_padding_;
      iVar12 = (int)pUVar10->_padding_;
      if (((*(int *)(lVar14 + 0x38) < iVar12) ||
          ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar12 * 8) !=
           &pUVar10->_padding_)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ret->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x1181,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar9 = (UClass *)(*pcVar3)();
        return pUVar9;
      }
      pUVar10 = ALightWeightInstanceManager::GetAcceptedClass(pAVar2);
    }
    if (param_1 == pUVar10) {
LAB_147ebb177:
      if (local_80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data);
      }
      return pUVar9;
    }
    iVar12 = 0;
    pUVar11 = param_1;
    do {
      if (pUVar11 == pUVar10) {
        if (iVar12 < iVar17) {
          pUVar15 = pUVar9;
          iVar17 = iVar12;
        }
        goto LAB_147ebb168;
      }
      pUVar11 = (UClass *)pUVar11->_padding_;
      iVar12 = iVar12 + 1;
    } while (pUVar11 != (UClass *)0x0);
    uVar13 = local_78 & 0xffffffff;
    FVar16.Data = FVar16.Data + 8;
  } while( true );
}

// FindLightWeightInstanceManager @ 147ebb490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALightWeightInstanceManager * __thiscall
FLightWeightInstanceSubsystem::FindLightWeightInstanceManager
          (FLightWeightInstanceSubsystem *this,UClass *param_1,UWorld *param_2,
          TVector<double> *param_3,UDataLayerInstance *param_4)

{
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  ALightWeightInstanceManager *pAVar10;
  UClass *pUVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  FScriptContainerElement *pFVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 local_res8 [8];
  TIntVector3<int>_u_0 local_98 [2];
  double local_78;
  
  SRWLock = &this->LWIManagersRWLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pAVar10 = (ALightWeightInstanceManager *)(*pcVar4)();
    return pAVar10;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  dVar6 = __real_3fe0000000000000;
  dVar5 = __real_3ff0000000000000;
  pFVar14 = (this->LWInstanceManagers).AllocatorInstance.Data;
  iVar2 = (this->LWInstanceManagers).ArrayNum;
  pFVar1 = pFVar14 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LWInstanceManagers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<ALightWeightInstanceManager_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar1) break;
    pAVar10 = *(ALightWeightInstanceManager **)pFVar14;
    if (((pAVar10 != (ALightWeightInstanceManager *)0x0) &&
        (((uint)pAVar10->_padding_ >> 0x1e & 1) == 0)) &&
       (pUVar11 = ALightWeightInstanceManager::GetRepresentedClassInternal(pAVar10),
       pUVar11 == param_1)) {
      ALightWeightInstanceManager::ConvertPositionToCoord
                (pAVar10,(TIntVector3<int> *)&local_98[0]._s_0,param_3);
      lVar3 = pAVar10->_padding_;
      uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar3 != 0) {
        uVar18 = *(undefined4 *)(lVar3 + 0x210);
        uVar19 = *(undefined4 *)(lVar3 + 0x214);
        uVar20 = *(undefined4 *)(lVar3 + 0x218);
        uVar21 = *(undefined4 *)(lVar3 + 0x21c);
        local_78 = *(double *)(lVar3 + 0x220);
      }
      iVar8 = (**(code **)(pAVar10->_padding_ + 0x768))(pAVar10);
      uVar9 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X;
      uVar12 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y;
      uVar13 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      if (0.0 < (float)iVar8) {
        dVar17 = dVar5 / (double)iVar8;
        dVar15 = dVar17 * (double)CONCAT44(uVar19,uVar18);
        dVar16 = dVar17 * (double)CONCAT44(uVar21,uVar20);
        uVar9 = (int)((longlong)ROUND((dVar15 + dVar15) - dVar6) >> 1);
        uVar12 = (int)((longlong)ROUND((dVar16 + dVar16) - dVar6) >> 1);
        uVar13 = (int)((longlong)ROUND((dVar17 * local_78 + dVar17 * local_78) - dVar6) >> 1);
      }
      if (((uVar9 == local_98[0]._s_0.X) && (uVar12 == local_98[0]._s_0.Y)) &&
         (uVar13 == local_98[0]._s_0.Z)) goto LAB_147ebb658;
    }
    pFVar14 = pFVar14 + 8;
  }
  pAVar10 = (ALightWeightInstanceManager *)0x0;
LAB_147ebb658:
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pAVar10;
}

// FindLightWeightInstanceManager @ 147ebb6d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALightWeightInstanceManager * __thiscall
FLightWeightInstanceSubsystem::FindLightWeightInstanceManager
          (FLightWeightInstanceSubsystem *this,FActorInstanceHandle *param_1)

{
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FWeakObjectPtr FVar7;
  bool bVar8;
  int iVar9;
  ALightWeightInstanceManager *pAVar10;
  UClass *pUVar11;
  AActor *pAVar12;
  longlong lVar13;
  TVector<double> *pTVar14;
  FScriptContainerElement *pFVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_b8;
  IActorInstanceManagerInterface *pIStack_b0;
  TIntVector3<int>_u_0 local_a8 [2];
  double local_88;
  TVector<double> local_80 [3];
  
  local_b8 = (param_1->ManagerInterface).ObjectInstance.WeakPtr;
  pIStack_b0 = (param_1->ManagerInterface).InterfaceInstance;
  if (((param_1->ManagerInterface).InterfaceInstance != (IActorInstanceManagerInterface *)0x0) &&
     (bVar8 = FWeakObjectPtr::IsValid(&local_b8), bVar8)) {
    pAVar10 = (ALightWeightInstanceManager *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->ManagerInterface);
    if (pAVar10 != (ALightWeightInstanceManager *)0x0) {
      pUVar11 = ALightWeightInstanceManager::StaticClass();
      iVar2 = (int)pUVar11->_padding_;
      if ((iVar2 <= *(int *)(pAVar10->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar10->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar11->_padding_)) {
        return pAVar10;
      }
    }
    return (ALightWeightInstanceManager *)0x0;
  }
  pAVar12 = FActorInstanceHandle::GetCachedActor(param_1);
  if (pAVar12 != (AActor *)0x0) {
    lVar3 = pAVar12->_padding_;
    SRWLock = &this->LWIManagersRWLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pAVar10 = (ALightWeightInstanceManager *)(*pcVar4)();
      return pAVar10;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    dVar6 = __real_3fe0000000000000;
    dVar5 = __real_3ff0000000000000;
    pFVar15 = (this->LWInstanceManagers).AllocatorInstance.Data;
    iVar2 = (this->LWInstanceManagers).ArrayNum;
    pFVar1 = pFVar15 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->LWInstanceManagers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<ALightWeightInstanceManager_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar15 == pFVar1) break;
      pAVar10 = *(ALightWeightInstanceManager **)pFVar15;
      lVar13 = (**(code **)(pAVar10->_padding_ + 0x28))(&pAVar10->_padding_,param_1->InstanceIndex);
      if (lVar3 == lVar13) {
        pTVar14 = FActorInstanceHandle::GetLocation(param_1,local_80);
        ALightWeightInstanceManager::ConvertPositionToCoord
                  (pAVar10,(TIntVector3<int> *)&local_a8[0]._s_0,pTVar14);
        lVar13 = pAVar10->_padding_;
        uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (lVar13 != 0) {
          uVar19 = *(undefined4 *)(lVar13 + 0x210);
          uVar20 = *(undefined4 *)(lVar13 + 0x214);
          uVar21 = *(undefined4 *)(lVar13 + 0x218);
          uVar22 = *(undefined4 *)(lVar13 + 0x21c);
          local_88 = *(double *)(lVar13 + 0x220);
        }
        iVar9 = (**(code **)(pAVar10->_padding_ + 0x768))(pAVar10);
        if ((float)iVar9 <= 0.0) {
          local_b8.ObjectIndex = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_4_;
          local_b8.ObjectSerialNumber = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._4_4_;
          FVar7 = local_b8;
          local_b8.ObjectIndex = (int)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          iVar9 = local_b8.ObjectIndex;
          local_b8 = FVar7;
          uVar19 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
        }
        else {
          dVar18 = dVar5 / (double)iVar9;
          dVar16 = dVar18 * (double)CONCAT44(uVar20,uVar19);
          dVar17 = dVar18 * (double)CONCAT44(uVar22,uVar21);
          iVar9 = (int)((longlong)ROUND((dVar16 + dVar16) - dVar6) >> 1);
          local_b8.ObjectSerialNumber = (int)((longlong)ROUND((dVar17 + dVar17) - dVar6) >> 1);
          local_b8.ObjectIndex = iVar9;
          uVar19 = (int)((longlong)ROUND((dVar18 * local_88 + dVar18 * local_88) - dVar6) >> 1);
        }
        if (((iVar9 == local_a8[0]._s_0.X) && (local_b8.ObjectSerialNumber == local_a8[0]._s_0.Y))
           && (uVar19 == local_a8[0]._s_0.Z)) {
          if (SRWLock != (FPlatformRWLock *)0x0) {
            ReleaseSRWLockShared((PSRWLOCK)SRWLock);
          }
          return pAVar10;
        }
      }
      pFVar15 = pFVar15 + 8;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
  }
  return (ALightWeightInstanceManager *)0x0;
}

// FindLightWeightInstanceManager @ 147ebb9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALightWeightInstanceManager * __thiscall
FLightWeightInstanceSubsystem::FindLightWeightInstanceManager
          (FLightWeightInstanceSubsystem *this,UClass *param_1,UDataLayerInstance *param_2,
          UWorld *param_3)

{
  code *pcVar1;
  bool bVar2;
  ALightWeightInstanceManager *pAVar3;
  
  if (param_3 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceSubsystem.cpp"
                       ,0x7a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pAVar3 = (ALightWeightInstanceManager *)(*pcVar1)();
      return pAVar3;
    }
  }
  pAVar3 = FindLightWeightInstanceManager
                     (this,param_1,param_3,&UE::Math::TVector<double>::ZeroVector,param_2);
  return pAVar3;
}

// FindOrAddLightWeightInstanceManager @ 147ebba40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALightWeightInstanceManager * __thiscall
FLightWeightInstanceSubsystem::FindOrAddLightWeightInstanceManager
          (FLightWeightInstanceSubsystem *this,UClass *param_1,UWorld *param_2,
          TVector<double> *param_3,UDataLayerInstance *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ALightWeightInstanceManager *pAVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  TIntVector3<int> *pTVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStackY_1c8 [32];
  FString local_198;
  TIntVector3<int> local_188;
  undefined1 local_178 [16];
  double local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  TTransform<double> local_118;
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pAVar5 = FindLightWeightInstanceManager(this,param_1,param_2,param_3,param_4);
  if (pAVar5 == (ALightWeightInstanceManager *)0x0) {
    pUVar6 = FindBestInstanceManagerClass(this,param_1);
    pAVar5 = (ALightWeightInstanceManager *)0x0;
    if (pUVar6 != (UClass *)0x0) {
      FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_b8);
      local_118.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_118.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_118.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_118.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_118.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_118.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_b8[0x30] = AlwaysSpawn;
      local_b8._52_4_ = RF_Transactional;
      if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar6);
      }
      pAVar5 = (ALightWeightInstanceManager *)(pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pAVar5 == (ALightWeightInstanceManager *)0x0) {
        pFVar9 = GetTypeName<ALightWeightInstanceManager>(&local_198);
        if ((pFVar9->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar12);
      }
      pUVar7 = ALightWeightInstanceManager::StaticClass();
      iVar4 = (int)pUVar7->_padding_;
      if ((*(int *)(pAVar5->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar7->_padding_)) {
        pFVar9 = GetTypeName<ALightWeightInstanceManager>(&local_140);
        pwVar12 = L"";
        if ((pFVar9->Data).ArrayNum == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
        pFVar9 = GetFullNameForCastLogError<UObject>(&local_130,(UObject *)pAVar5);
        if ((pFVar9->Data).ArrayNum != 0) {
          pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar12,pwVar13);
      }
      iVar4 = (**(code **)(pAVar5->_padding_ + 0x768))(pAVar5);
      if (0 < iVar4) {
        pTVar8 = ALightWeightInstanceManager::ConvertPositionToCoord(pAVar5,&local_188,param_3);
        dVar17 = (double)iVar4;
        local_198.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&pTVar8->field0_0x0;
        local_168 = (double)((float)iVar4 * __real_3f000000);
        dVar18 = (double)(int)local_198.Data.AllocatorInstance.Data * dVar17 + local_168;
        dVar16 = (double)(int)((ulonglong)local_198.Data.AllocatorInstance.Data >> 0x20) * dVar17 +
                 local_168;
        local_168 = (double)(pTVar8->field0_0x0)._s_0.Z * dVar17 + local_168;
        local_118.Translation.ZW.m128d_f64[1] = 0.0;
        local_118.Translation.ZW.m128d_f64[0] = local_168;
        uVar14 = SUB84(dVar16,0);
        uVar15 = (undefined4)((ulonglong)dVar16 >> 0x20);
        local_178._8_4_ = uVar14;
        local_178._0_8_ = dVar18;
        local_178._12_4_ = uVar15;
        local_118.Translation.XY.m128d_f64[1]._0_4_ = uVar14;
        local_118.Translation.XY.m128d_f64[0] = dVar18;
        local_118.Translation.XY.m128d_f64[1]._4_4_ = uVar15;
      }
      pAVar5 = (ALightWeightInstanceManager *)
               UWorld::SpawnActor(param_2,pUVar6,&local_118,(FActorSpawnParameters *)local_b8);
      if (pAVar5 == (ALightWeightInstanceManager *)0x0) {
        pAVar5 = (ALightWeightInstanceManager *)0x0;
      }
      else {
        pUVar6 = ALightWeightInstanceManager::StaticClass();
        iVar4 = (int)pUVar6->_padding_;
        if ((*(int *)(pAVar5->_padding_ + 0x38) < iVar4) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar6->_padding_)) {
          pFVar9 = GetTypeName<ALightWeightInstanceManager>(&local_160);
          pwVar12 = L"";
          if ((pFVar9->Data).ArrayNum == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
          }
          pFVar9 = GetFullNameForCastLogError<AActor>(&local_150,(AActor *)pAVar5);
          if ((pFVar9->Data).ArrayNum != 0) {
            pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar12,pwVar13);
        }
        (**(code **)(pAVar5->_padding_ + 0x760))(pAVar5,param_1);
        pFVar1 = (this->LWInstanceManagers).AllocatorInstance.Data;
        for (pFVar10 = pFVar1; pFVar10 != pFVar1 + (longlong)(this->LWInstanceManagers).ArrayNum * 8
            ; pFVar10 = pFVar10 + 8) {
          if (*(ALightWeightInstanceManager **)pFVar10 == pAVar5) {
            if ((int)((longlong)pFVar10 - (longlong)pFVar1 >> 3) != -1) goto LAB_147ebbcc6;
            break;
          }
        }
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LWInstanceManagers.Find(NewInstanceManager) != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceSubsystem.cpp"
                           ,0xcf,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pAVar5 = (ALightWeightInstanceManager *)(*pcVar2)();
          return pAVar5;
        }
      }
LAB_147ebbcc6:
      if (local_b8._64_8_ != 0) {
        plVar11 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
    }
  }
  return pAVar5;
}

// FindOrAddLightWeightInstanceManager @ 147ebbdd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALightWeightInstanceManager * __thiscall
FLightWeightInstanceSubsystem::FindOrAddLightWeightInstanceManager
          (FLightWeightInstanceSubsystem *this,UClass *param_1,UDataLayerInstance *param_2,
          UWorld *param_3)

{
  code *pcVar1;
  bool bVar2;
  ALightWeightInstanceManager *pAVar3;
  
  if (param_3 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceSubsystem.cpp"
                       ,0x81,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pAVar3 = (ALightWeightInstanceManager *)(*pcVar1)();
      return pAVar3;
    }
  }
  pAVar3 = FindOrAddLightWeightInstanceManager
                     (this,param_1,param_3,&UE::Math::TVector<double>::ZeroVector,param_2);
  return pAVar3;
}

// Get @ 147ebdf70

FLightWeightInstanceSubsystem * __cdecl FLightWeightInstanceSubsystem::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FLightWeightInstanceSubsystem *pFVar3;
  FLightWeightInstanceSubsystem *pFVar4;
  FLightWeightInstanceSubsystem *pFVar5;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_FLightWeightInstanceSubsystem&___ptr64___cdecl_FLightWeightInstanceSubsystem::Get(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_FLightWeightInstanceSubsystem&___ptr64___cdecl_FLightWeightInstanceSubsystem::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_FLightWeightInstanceSubsystem&___ptr64___cdecl_FLightWeightInstanceSubsystem::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pFVar4 = ::operator_new(0x28);
    pFVar3 = (FLightWeightInstanceSubsystem *)0x0;
    pFVar5 = pFVar3;
    if (pFVar4 != (FLightWeightInstanceSubsystem *)0x0) {
      (pFVar4->LWInstanceManagers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->LWInstanceManagers).ArrayNum = 0;
      (pFVar4->LWInstanceManagers).ArrayMax = 0;
      (pFVar4->LWIManagersRWLock).Mutex.Mutex.Ptr = (void *)0x0;
      (pFVar4->OnLevelActorAddedHandle).ID = 0;
      (pFVar4->OnLevelActorDeletedHandle).ID = 0;
      pFVar5 = pFVar4;
    }
    `public:_static_struct_FLightWeightInstanceSubsystem&___ptr64___cdecl_FLightWeightInstanceSubsystem::Get(void)'
    ::__l2::LWISubsystemSingleton.Object = pFVar5;
    pFVar4 = ::operator_new(0x18);
    if (pFVar4 != (FLightWeightInstanceSubsystem *)0x0) {
      (pFVar4->LWInstanceManagers).ArrayNum = 1;
      (pFVar4->LWInstanceManagers).AllocatorInstance.Data =
           (FScriptContainerElement *)
           &
           ___7__TReferenceControllerWithDeleter_UFLightWeightInstanceSubsystem__U__DefaultDeleter_UFLightWeightInstanceSubsystem___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      (pFVar4->LWInstanceManagers).ArrayMax = 1;
      (pFVar4->LWIManagersRWLock).Mutex.Mutex.Ptr = pFVar5;
      pFVar3 = pFVar4;
    }
    `public:_static_struct_FLightWeightInstanceSubsystem&___ptr64___cdecl_FLightWeightInstanceSubsystem::Get(void)'
    ::__l2::LWISubsystemSingleton.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pFVar3;
    atexit(`FLightWeightInstanceSubsystem::Get'::__l2::
           _dynamic_atexit_destructor_for__LWISubsystemSingleton__);
    _Init_thread_footer(&`public:_static_struct_FLightWeightInstanceSubsystem&___ptr64___cdecl_FLightWeightInstanceSubsystem::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((`public:_static_struct_FLightWeightInstanceSubsystem&___ptr64___cdecl_FLightWeightInstanceSubsystem::Get(void)'
       ::__l2::LWISubsystemSingleton.Object == (FLightWeightInstanceSubsystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLightWeightInstanceSubsystem *)(*pcVar1)();
    return pFVar3;
  }
  return `public:_static_struct_FLightWeightInstanceSubsystem&___ptr64___cdecl_FLightWeightInstanceSubsystem::Get(void)'
         ::__l2::LWISubsystemSingleton.Object;
}

// GetActorClass @ 147ebe820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UClass * __thiscall
FLightWeightInstanceSubsystem::GetActorClass
          (FLightWeightInstanceSubsystem *this,FActorInstanceHandle *param_1)

{
  AActor *pAVar1;
  UClass *pUVar2;
  ALightWeightInstanceManager *pAVar3;
  
  pAVar1 = FActorInstanceHandle::GetCachedActor(param_1);
  if (pAVar1 != (AActor *)0x0) {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    return pUVar2;
  }
  pAVar3 = FindLightWeightInstanceManager(this,param_1);
  if (pAVar3 != (ALightWeightInstanceManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ebe873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UClass *)
             (**(code **)(pAVar3->_padding_ + 0x28))(&pAVar3->_padding_,param_1->InstanceIndex);
    return pUVar2;
  }
  return (UClass *)0x0;
}

// GetActor_NoCreate @ 147ebe900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
FLightWeightInstanceSubsystem::GetActor_NoCreate
          (FLightWeightInstanceSubsystem *this,FActorInstanceHandle *param_1)

{
  AActor *pAVar1;
  
  pAVar1 = FActorInstanceHandle::GetCachedActor(param_1);
  return pAVar1;
}

// GetLevel @ 147ec09d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall
FLightWeightInstanceSubsystem::GetLevel
          (FLightWeightInstanceSubsystem *this,FActorInstanceHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  ULevel *pUVar3;
  ALightWeightInstanceManager *this_00;
  
  bVar2 = FActorInstanceHandle::IsValid(param_1);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4135954958023393607>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceSubsystem.cpp"
                       ,0x147,"Handle.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (ULevel *)(*pcVar1)();
      return pUVar3;
    }
  }
  this_00 = (ALightWeightInstanceManager *)FActorInstanceHandle::GetCachedActor(param_1);
  if (this_00 == (ALightWeightInstanceManager *)0x0) {
    this_00 = FindLightWeightInstanceManager(this,param_1);
    if (this_00 == (ALightWeightInstanceManager *)0x0) {
      return (ULevel *)0x0;
    }
  }
  pUVar3 = AActor::GetLevel((AActor *)this_00);
  return pUVar3;
}

// GetLocation @ 147ec1720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
FLightWeightInstanceSubsystem::GetLocation
          (FLightWeightInstanceSubsystem *this,TVector<double> *__return_storage_ptr__,
          FActorInstanceHandle *param_1)

{
  double dVar1;
  USceneComponent *pUVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  AActor *pAVar8;
  double *pdVar9;
  ALightWeightInstanceManager *pAVar10;
  longlong lVar11;
  undefined1 auStackY_e8 [32];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar6 = FActorInstanceHandle::IsValid(param_1);
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4135954958023393573>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceSubsystem.cpp"
                       ,0x125,"Handle.IsValid()");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pAVar8 = FActorInstanceHandle::GetCachedActor(param_1);
  if (pAVar8 == (AActor *)0x0) {
    pAVar10 = FindLightWeightInstanceManager(this,param_1);
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (pAVar10 == (ALightWeightInstanceManager *)0x0) {
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      lVar11 = (**(code **)(pAVar10->_padding_ + 0x38))(&pAVar10->_padding_,local_88,param_1);
      dVar4 = *(double *)(lVar11 + 0x28);
      dVar1 = *(double *)(lVar11 + 0x30);
      (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(lVar11 + 0x20);
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    }
  }
  else {
    pUVar2 = (pAVar8->RootComponent).field0_0x0.DebugPtr;
    if (pUVar2 == (USceneComponent *)0x0) {
      pdVar9 = &local_a0;
      local_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      pdVar9 = &local_b8;
      local_b8 = (pUVar2->ComponentToWorld).Translation.XY.m128d_f64[0];
      dStack_b0 = (pUVar2->ComponentToWorld).Translation.XY.m128d_f64[1];
      local_a8 = (pUVar2->ComponentToWorld).Translation.ZW.m128d_f64[0];
    }
    dVar4 = pdVar9[1];
    dVar1 = pdVar9[2];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar9;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  return __return_storage_ptr__;
}

// GetManagerAt @ 147ec18a0

ALightWeightInstanceManager * __thiscall
FLightWeightInstanceSubsystem::GetManagerAt(FLightWeightInstanceSubsystem *this,int param_1)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  ALightWeightInstanceManager *pAVar3;
  
  SRWLock = &this->LWIManagersRWLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pAVar3 = (ALightWeightInstanceManager *)(*pcVar1)();
      return pAVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if ((param_1 < 0) || ((this->LWInstanceManagers).ArrayNum <= param_1)) {
    pAVar3 = (ALightWeightInstanceManager *)0x0;
  }
  else {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pAVar3 = (ALightWeightInstanceManager *)(*pcVar1)();
        return pAVar3;
      }
    }
    pAVar3 = *(ALightWeightInstanceManager **)
              ((this->LWInstanceManagers).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pAVar3;
}

// GetManagerIndex @ 147ec1970

int __thiscall
FLightWeightInstanceSubsystem::GetManagerIndex
          (FLightWeightInstanceSubsystem *this,ALightWeightInstanceManager *param_1)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  SRWLock = &this->LWIManagersRWLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar3 = (this->LWInstanceManagers).ArrayNum;
  uVar6 = 0;
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar3) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
      if (*(ALightWeightInstanceManager **)
           ((this->LWInstanceManagers).AllocatorInstance.Data + lVar5) == param_1)
      goto LAB_147ec1a37;
      iVar3 = (this->LWInstanceManagers).ArrayNum;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar6 < iVar3);
  }
  uVar6 = 0xffffffff;
LAB_147ec1a37:
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return uVar6;
}

// GetName @ 147ec21c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
FLightWeightInstanceSubsystem::GetName
          (FLightWeightInstanceSubsystem *this,FString *__return_storage_ptr__,
          FActorInstanceHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  AActor *pAVar4;
  ALightWeightInstanceManager *this_00;
  FName local_res20;
  FName local_18 [2];
  
  bVar2 = FActorInstanceHandle::IsValid(param_1);
  if ((!bVar2) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4135954958023393590>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceSubsystem.cpp"
                         ,0x136,"Handle.IsValid()"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  pAVar4 = FActorInstanceHandle::GetCachedActor(param_1);
  if (pAVar4 != (AActor *)0x0) {
    local_res20 = (FName)pAVar4->_padding_;
    ::FName::ToString(&local_res20,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  this_00 = FindLightWeightInstanceManager(this,param_1);
  if (this_00 == (ALightWeightInstanceManager *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  bVar2 = ALightWeightInstanceManager::FindActorForHandle(this_00,param_1);
  if (!bVar2) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s_%u");
    return __return_storage_ptr__;
  }
  pAVar4 = FActorInstanceHandle::GetCachedActor(param_1);
  if ((pAVar4 == (AActor *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handle.GetCachedActor()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceManager.cpp"
                         ,0x178,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  pAVar4 = FActorInstanceHandle::GetCachedActor(param_1);
  local_18[0] = (FName)pAVar4->_padding_;
  ::FName::ToString(local_18,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsInLevel @ 147ecd6b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FLightWeightInstanceSubsystem::IsInLevel
          (FLightWeightInstanceSubsystem *this,FActorInstanceHandle *param_1,ULevel *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  AActor *this_00;
  ALightWeightInstanceManager *this_01;
  ULevel *pUVar4;
  
  bVar2 = FActorInstanceHandle::IsValid(param_1);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4135954958023393624>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightWeightInstanceSubsystem.cpp"
                       ,0x158,"Handle.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = FActorInstanceHandle::GetCachedActor(param_1);
  if (this_00 != (AActor *)0x0) {
    bVar2 = AActor::IsInLevel(this_00,param_2);
    return bVar2;
  }
  this_01 = FindLightWeightInstanceManager(this,param_1);
  if (this_01 != (ALightWeightInstanceManager *)0x0) {
    pUVar4 = AActor::GetLevel((AActor *)this_01);
    return pUVar4 == param_2;
  }
  return false;
}

// RemoveManager @ 147ed8720

bool __thiscall
FLightWeightInstanceSubsystem::RemoveManager
          (FLightWeightInstanceSubsystem *this,ALightWeightInstanceManager *param_1)

{
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FLightWeightInstanceSubsystem *pFVar5;
  longlong lVar6;
  ALightWeightInstanceManager *pAVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  ALightWeightInstanceManager *local_res10;
  int local_res18;
  FLightWeightInstanceSubsystem *local_res20;
  
  SRWLock = &this->LWIManagersRWLock;
  local_res10 = param_1;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar5 = Get();
  pFVar1 = (pFVar5->LWInstanceManagers).AllocatorInstance.Data;
  local_res20 = pFVar5;
  if (((pFVar1 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar1 + (longlong)(pFVar5->LWInstanceManagers).ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_res18 = (pFVar5->LWInstanceManagers).ArrayNum;
  lVar6 = (longlong)local_res18;
  iVar11 = 0;
  if (local_res18 != 0) {
    pFVar1 = (pFVar5->LWInstanceManagers).AllocatorInstance.Data;
    lVar9 = 0;
    iVar10 = 0;
    bVar3 = *(ALightWeightInstanceManager **)pFVar1 != local_res10;
    pAVar7 = local_res10;
    iVar11 = 0;
    do {
      iVar8 = iVar11;
      do {
        lVar9 = lVar9 + 1;
        iVar8 = iVar8 + 1;
        if (lVar6 <= lVar9) break;
      } while (bVar3 == (*(ALightWeightInstanceManager **)(pFVar1 + lVar9 * 8) != pAVar7));
      if (bVar3 != false) {
        if (iVar10 != iVar11) {
          memmove(pFVar1 + (longlong)iVar10 * 8,pFVar1 + (longlong)iVar11 * 8,
                  (longlong)(iVar8 - iVar11) << 3);
          pAVar7 = local_res10;
        }
        iVar10 = iVar10 + (iVar8 - iVar11);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar11 = iVar8;
    } while (lVar9 < lVar6);
    iVar11 = local_res18 - iVar10;
    (local_res20->LWInstanceManagers).ArrayNum = iVar10;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return iVar11 != 0;
}

