// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 12

// StaticClass @ 141e49030

UClass * __cdecl UGCObjectReferencer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGCObjectReferencer.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"GCObjectReferencer",
               &Z_Registration_Info_UClass_UGCObjectReferencer.InnerSingleton,
               StaticRegisterNativesUGCObjectReferencer,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGCObjectReferencer>,
               InternalVTableHelperCtorCaller<UGCObjectReferencer>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGCObjectReferencer.InnerSingleton;
}

// GetPrivateStaticClass @ 141e5bcb0

UClass * __cdecl UGCObjectReferencer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGCObjectReferencer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"GCObjectReferencer",
               &Z_Registration_Info_UClass_UGCObjectReferencer.InnerSingleton,
               StaticRegisterNativesUGCObjectReferencer,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGCObjectReferencer>,
               InternalVTableHelperCtorCaller<UGCObjectReferencer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGCObjectReferencer.InnerSingleton;
}

// StaticRegisterNativesUGCObjectReferencer @ 141e60690

void __cdecl UGCObjectReferencer::StaticRegisterNativesUGCObjectReferencer(void)

{
  return;
}

// UGCObjectReferencer @ 141e86a50

UGCObjectReferencer * __thiscall
UGCObjectReferencer::UGCObjectReferencer(UGCObjectReferencer *this,FVTableHelper *param_1)

{
  FImpl *lpCriticalSection;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGCObjectReferencer__6B_;
  lpCriticalSection = ::operator_new(0x48);
  if (lpCriticalSection == (FImpl *)0x0) {
    lpCriticalSection = (FImpl *)0x0;
  }
  else {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
    (lpCriticalSection->RemainingReferencedObjects).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (lpCriticalSection->RemainingReferencedObjects).ArrayNum = 0;
    (lpCriticalSection->RemainingReferencedObjects).ArrayMax = 0;
    (lpCriticalSection->InitialReferencedObjects).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (lpCriticalSection->InitialReferencedObjects).ArrayNum = 0;
    (lpCriticalSection->InitialReferencedObjects).ArrayMax = 0;
  }
  (this->Impl).Ptr = lpCriticalSection;
  this->CurrentlySerializingObject = (FGCObject *)0x0;
  return this;
}

// UGCObjectReferencer @ 141e86ac0

UGCObjectReferencer * __thiscall
UGCObjectReferencer::UGCObjectReferencer(UGCObjectReferencer *this,FObjectInitializer *param_1)

{
  FImpl *lpCriticalSection;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGCObjectReferencer__6B_;
  lpCriticalSection = ::operator_new(0x48);
  if (lpCriticalSection == (FImpl *)0x0) {
    lpCriticalSection = (FImpl *)0x0;
  }
  else {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
    (lpCriticalSection->RemainingReferencedObjects).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (lpCriticalSection->RemainingReferencedObjects).ArrayNum = 0;
    (lpCriticalSection->RemainingReferencedObjects).ArrayMax = 0;
    (lpCriticalSection->InitialReferencedObjects).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (lpCriticalSection->InitialReferencedObjects).ArrayNum = 0;
    (lpCriticalSection->InitialReferencedObjects).ArrayMax = 0;
  }
  (this->Impl).Ptr = lpCriticalSection;
  this->CurrentlySerializingObject = (FGCObject *)0x0;
  return this;
}

// ~UGCObjectReferencer @ 141e88490

void __thiscall UGCObjectReferencer::~UGCObjectReferencer(UGCObjectReferencer *this)

{
  FImpl *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGCObjectReferencer__6B_;
  lpCriticalSection = (this->Impl).Ptr;
  if (lpCriticalSection != (FImpl *)0x0) {
    pFVar1 = (lpCriticalSection->InitialReferencedObjects).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (lpCriticalSection->RemainingReferencedObjects).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::operator_delete(lpCriticalSection,0x48);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddInitialReferences @ 141e8e5d0

void __thiscall
UGCObjectReferencer::AddInitialReferences
          (UGCObjectReferencer *this,TArray<UObject_*_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FImpl *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FReferenceCollector local_28;
  TArray<UObject_*_*,TSizedDefaultAllocator<32>_> *local_18;
  
  pFVar3 = (this->Impl).Ptr;
  local_28.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
  local_28._padding_ = (longlong)&___7FInitialReferenceCollector__6B_;
  pFVar4 = (pFVar3->InitialReferencedObjects).AllocatorInstance.Data;
  iVar2 = (pFVar3->InitialReferencedObjects).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  local_18 = param_1;
  while( true ) {
    if ((pFVar3->InitialReferencedObjects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FGCObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar4 + 8))(*(longlong **)pFVar4,&local_28);
    pFVar4 = pFVar4 + 8;
  }
  FReferenceCollector::~FReferenceCollector(&local_28);
  return;
}

// AddObject @ 141e8ea20

void __thiscall UGCObjectReferencer::AddObject(UGCObjectReferencer *this,FGCObject *param_1)

{
  int *piVar1;
  FImpl *lpCriticalSection;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  FGCObject *local_res10 [3];
  
  local_res10[0] = param_1;
  if (param_1 == (FGCObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\GCObjectReferencer.cpp"
                       ,0x68,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((GObjUnhashUnreachableIsInProgress == (atomic<bool>)0x0) &&
     (GObjIncrementalPurgeIsInProgress == (atomic<bool>)0x0)) {
    bVar3 = IsGarbageCollectingAndLockingUObjectHashTables();
    if (bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUnrealGCMarkingPassInProgress() || IsFrankenGCDestroyingPassInProgress()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\GCObjectReferencer.cpp"
                         ,0x69,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  lpCriticalSection = (this->Impl).Ptr;
  if (lpCriticalSection == (FImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar5 = 0x38;
  if (local_res10[0]->bCanMakeInitialReferences == false) {
    lVar5 = 0x28;
  }
  pFVar6 = (ForAnyElementType *)
           ((longlong)(((this->Impl).Ptr)->ReferencedObjectsCritical).CriticalSection.Opaque1 +
           lVar5);
  if ((pFVar6->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 8)) {
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
  iVar4 = *(int *)&pFVar6[1].Data;
  piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar6,piVar1);
  }
  *(int *)&pFVar6[1].Data = iVar4 + 1;
  *(FGCObject **)(pFVar6->Data + (longlong)iVar4 * 8) = local_res10[0];
  if (lpCriticalSection != (FImpl *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// AddReferencedObjects @ 141e8f0d0

void __cdecl
UGCObjectReferencer::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  UClass *pUVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_1 == (UObject *)0x0) {
    pFVar9 = GetTypeName<UGCObjectReferencer>(&local_58);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar12);
  }
  pUVar8 = Z_Construct_UClass_UGCObjectReferencer_NoRegister();
  iVar2 = (int)pUVar8->_padding_;
  if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar8->_padding_)) {
    if (*(longlong *)&param_1[1].field_0x8 != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!This->CurrentlySerializingObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\GCObjectReferencer.cpp"
                         ,0x3a,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    cVar7 = (**(code **)(param_2->_padding_ + 0x80))(param_2);
    if (cVar7 != '\0') {
      lVar3 = *(longlong *)(param_1 + 1);
      puVar11 = *(undefined8 **)(lVar3 + 0x38);
      iVar2 = *(int *)(lVar3 + 0x40);
      puVar1 = puVar11 + iVar2;
      while( true ) {
        if (*(int *)(lVar3 + 0x40) != iVar2) {
          `TCheckedPointerIterator<FGCObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (puVar11 == puVar1) break;
        plVar4 = (longlong *)*puVar11;
        *(longlong **)&param_1[1].field_0x8 = plVar4;
        (**(code **)(*plVar4 + 8))(plVar4,param_2);
        puVar11 = puVar11 + 1;
      }
    }
    lVar3 = *(longlong *)(param_1 + 1);
    puVar11 = *(undefined8 **)(lVar3 + 0x28);
    iVar2 = *(int *)(lVar3 + 0x30);
    puVar1 = puVar11 + iVar2;
    while( true ) {
      if (*(int *)(lVar3 + 0x30) != iVar2) {
        `TCheckedPointerIterator<FGCObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (puVar11 == puVar1) break;
      plVar4 = (longlong *)*puVar11;
      *(longlong **)&param_1[1].field_0x8 = plVar4;
      (**(code **)(*plVar4 + 8))();
      puVar11 = puVar11 + 1;
    }
    *(undefined8 *)&param_1[1].field_0x8 = 0;
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar9 = GetTypeName<UGCObjectReferencer>(&local_48);
  pwVar12 = L"";
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  pFVar9 = GetFullNameForCastLogError<UObject>(&local_38,param_1);
  if ((pFVar9->Data).ArrayNum != 0) {
    pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar12,pwVar10);
}

// FinishDestroy @ 141e9df60

void __thiscall UGCObjectReferencer::FinishDestroy(UGCObjectReferencer *this)

{
  FImpl *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->_padding_ & 0x10) == 0) {
    if ((FGCObject::GGCObjectReferencer != this) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FGCObject::GGCObjectReferencer == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\GCObjectReferencer.cpp"
                           ,0xb7,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FGCObject::GGCObjectReferencer = (UGCObjectReferencer *)0x0;
    lpCriticalSection = (this->Impl).Ptr;
    if (lpCriticalSection != (FImpl *)0x0) {
      (this->Impl).Ptr = (FImpl *)0x0;
      pFVar1 = (lpCriticalSection->InitialReferencedObjects).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (lpCriticalSection->RemainingReferencedObjects).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      ::operator_delete(lpCriticalSection,0x48);
    }
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetReferencerName @ 141ea1fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UGCObjectReferencer::GetReferencerName
          (UGCObjectReferencer *this,UObject *param_1,FString *param_2,bool param_3)

{
  FGCObject *pFVar1;
  FScriptContainerElement *pFVar2;
  FImpl *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  FString *pFVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FScriptContainerElement **ppFVar13;
  undefined1 auStackY_1a8 [32];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FScriptContainerElement *local_118;
  int iStack_110;
  FScriptContainerElement *local_108;
  int local_100;
  FScriptContainerElement *local_f8 [2];
  void *local_e8 [2];
  FScriptContainerElement *local_d8;
  FScriptContainerElement *pFStack_d0;
  FReferenceFinder local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (param_3) {
    pFVar1 = this->CurrentlySerializingObject;
    if (pFVar1 != (FGCObject *)0x0) {
      pFVar9 = (FString *)(**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,local_f8);
      if (param_2 != pFVar9) {
        pFVar2 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (param_2->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_2->Data).ArrayNum = (pFVar9->Data).ArrayNum;
        (param_2->Data).ArrayMax = (pFVar9->Data).ArrayMax;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
      }
      if (local_f8[0] != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8[0]);
      }
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.Data.ArrayNum = 0;
      local_158.Data.ArrayMax = 0;
      cVar6 = (**(code **)(this->CurrentlySerializingObject->_padding_ + 0x18))
                        (this->CurrentlySerializingObject,param_1,&local_158);
      FVar10.Data = local_158.Data.AllocatorInstance.Data;
      if (cVar6 != '\0') {
        ::FString::ConcatCF(&local_138,L":",&local_158);
        iVar12 = local_138.Data.ArrayNum + -1;
        if (local_138.Data.ArrayNum == 0) {
          iVar12 = 0;
        }
        ::FString::AppendChars(param_2,(wchar_t *)local_138.Data.AllocatorInstance.Data,iVar12);
        FVar10.Data = local_158.Data.AllocatorInstance.Data;
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
          FVar10.Data = local_158.Data.AllocatorInstance.Data;
        }
      }
LAB_141ea2323:
      if (FVar10.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar10.Data);
      }
      return true;
    }
  }
  else {
    pFVar3 = (this->Impl).Ptr;
    local_118 = (pFVar3->RemainingReferencedObjects).AllocatorInstance.Data;
    iVar12 = (pFVar3->RemainingReferencedObjects).ArrayNum;
    if ((iVar12 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pFVar3 = (this->Impl).Ptr;
    iStack_110 = iVar12;
    local_108 = (pFVar3->InitialReferencedObjects).AllocatorInstance.Data;
    iVar12 = (pFVar3->InitialReferencedObjects).ArrayNum;
    if ((iVar12 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    local_100 = iVar12;
    ppFVar13 = &local_118;
    do {
      pFVar11 = *ppFVar13;
      pFStack_d0 = ppFVar13[1];
      pFVar2 = pFVar11 + (longlong)(int)ppFVar13[1] * 8;
      local_d8 = pFVar11;
      for (; pFVar11 != pFVar2; pFVar11 = pFVar11 + 8) {
        plVar4 = *(longlong **)pFVar11;
        local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.ArrayNum = 0;
        local_168.ArrayMax = 0;
        FReferenceFinder::FReferenceFinder
                  (&local_c8,&local_168,(UObject *)0x0,true,false,false,false);
        if ((plVar4 == (longlong *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GCReporter",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\GCObjectReferencer.cpp"
                               ,0x9e,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        (**(code **)(*plVar4 + 8))(plVar4,&local_c8);
        for (FVar10.Data = local_168.AllocatorInstance.Data;
            FVar10.Data != local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 8;
            FVar10.Data = FVar10.Data + 8) {
          if (*(UObject **)FVar10.Data == param_1) {
            pFVar9 = (FString *)(**(code **)(*plVar4 + 0x10))(plVar4,local_e8);
            if (param_2 != pFVar9) {
              pFVar2 = (param_2->Data).AllocatorInstance.Data;
              if (pFVar2 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar2);
              }
              (param_2->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
              (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (param_2->Data).ArrayNum = (pFVar9->Data).ArrayNum;
              (param_2->Data).ArrayMax = (pFVar9->Data).ArrayMax;
              (pFVar9->Data).ArrayNum = 0;
              (pFVar9->Data).ArrayMax = 0;
            }
            if (local_e8[0] != (void *)0x0) {
              FMemory::Free(local_e8[0]);
            }
            local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_148.Data.ArrayNum = 0;
            local_148.Data.ArrayMax = 0;
            cVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,param_1,&local_148);
            if (cVar6 != '\0') {
              ::FString::ConcatCF(&local_128,L":",&local_148);
              iVar12 = local_128.Data.ArrayNum + -1;
              if (local_128.Data.ArrayNum == 0) {
                iVar12 = 0;
              }
              ::FString::AppendChars
                        (param_2,(wchar_t *)local_128.Data.AllocatorInstance.Data,iVar12);
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
              }
            }
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
            FReferenceFinder::~FReferenceFinder(&local_c8);
            FVar10.Data = local_168.AllocatorInstance.Data;
            goto LAB_141ea2323;
          }
        }
        FReferenceFinder::~FReferenceFinder(&local_c8);
        if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.AllocatorInstance.Data);
        }
      }
      ppFVar13 = ppFVar13 + 2;
    } while (ppFVar13 != local_f8);
  }
  return false;
}

// RemoveObject @ 141eb53d0

void __thiscall UGCObjectReferencer::RemoveObject(UGCObjectReferencer *this,FGCObject *param_1)

{
  FImpl *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ForAnyElementType *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  if ((param_1 == (FGCObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\GCObjectReferencer.cpp"
                         ,0x7a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((GObjUnhashUnreachableIsInProgress == (atomic<bool>)0x0) &&
       (GObjIncrementalPurgeIsInProgress == (atomic<bool>)0x0)) &&
      (bVar3 = IsGarbageCollectingAndLockingUObjectHashTables(), bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUnrealGCMarkingPassInProgress() || IsFrankenGCDestroyingPassInProgress()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\GCObjectReferencer.cpp"
                         ,0x7b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lpCriticalSection = (this->Impl).Ptr;
  if ((lpCriticalSection == (FImpl *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar6 = 0x38;
  if (param_1->bCanMakeInitialReferences == false) {
    lVar6 = 0x28;
  }
  pFVar7 = (ForAnyElementType *)
           ((longlong)(((this->Impl).Ptr)->ReferencedObjectsCritical).CriticalSection.Opaque1 +
           lVar6);
  pFVar1 = pFVar7->Data;
  pFVar9 = pFVar1;
  do {
    if (pFVar9 == pFVar1 + (longlong)*(int *)&pFVar7[1].Data * 8) {
LAB_141eb54ce:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRemoved == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\GCObjectReferencer.cpp"
                         ,0x81,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
LAB_141eb54f4:
      if (lpCriticalSection == (FImpl *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000141eb5510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    if (*(FGCObject **)pFVar9 == param_1) {
      uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar1 >> 3);
      if (uVar8 != 0xffffffff) {
        uVar5 = 0;
        if ((int)(uVar8 + 1) <= *(int *)&pFVar7[1].Data) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = *(int *)&pFVar7[1].Data + ~uVar8;
        if (1 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          memmove(pFVar7->Data + (longlong)(int)uVar8 * 8,
                  pFVar7->Data + (longlong)(*(int *)&pFVar7[1].Data - iVar4) * 8,
                  (longlong)iVar4 << 3);
        }
        *(int *)&pFVar7[1].Data = *(int *)&pFVar7[1].Data + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,pFVar7,*(int *)&pFVar7[1].Data,(int *)((longlong)&pFVar7[1].Data + 4));
        goto LAB_141eb54f4;
      }
      goto LAB_141eb54ce;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

