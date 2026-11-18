// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// GatherDefaultSubobjectsForDuplication @ 14226d800

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
FObjectDuplicationHelperMethods::GatherDefaultSubobjectsForDuplication
          (UObject *param_1,UObject *param_2,FUObjectAnnotationSparse<FDuplicatedObject,0> *param_3,
          FDuplicateDataWriter *param_4)

{
  FPlatformRWLock *SRWLock;
  FPlatformRWLock *SRWLock_00;
  int *piVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  code *pcVar4;
  UObjectBase *pUVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  UObject *pUVar11;
  ForAnyElementType FVar12;
  undefined1 local_b8 [8];
  UObjectBase *local_b0;
  uint local_a8;
  FWeakObjectPtr FStack_a4;
  uint local_9c;
  UObjectBase *local_98;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_90;
  undefined8 local_80;
  int local_78;
  UObject *local_70;
  TPairInitializer<UObjectBase_const_*_const_&,FDuplicatedObject_const_&> local_68;
  FScriptContainerElement *local_58;
  UObjectBase **local_50;
  undefined8 *local_48;
  
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  UObject::GetDefaultSubobjects(param_1,&local_90);
  uVar9 = (ulonglong)local_90.ArrayNum;
  local_9c = local_90.ArrayNum;
  pFVar10 = local_90.AllocatorInstance.Data + uVar9 * 8;
  FVar12.Data = local_90.AllocatorInstance.Data;
  local_58 = pFVar10;
  do {
    if (local_90.ArrayNum != (int)uVar9) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_b8)
      ;
    }
    if (FVar12.Data == pFVar10) {
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      return;
    }
    local_b0 = *(UObjectBase **)FVar12.Data;
    if ((local_b0 != (UObjectBase *)0x0) &&
       (pUVar8 = UObject::GetDefaultSubobjectByName(param_2,(local_b0->NamePrivate).Name),
       local_70 = pUVar8, pUVar8 != (UObject *)0x0)) {
      local_a8 = local_a8 & 0xffffff00;
      pUVar11 = (UObject *)0x0;
      if (pUVar8 != (UObject *)0xffffffffffffffff) {
        pUVar11 = pUVar8;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar11);
      }
      FStack_a4.ObjectIndex = 0;
      FStack_a4.ObjectSerialNumber = 0;
      local_68.Value = (FDuplicatedObject *)pUVar11;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar11);
      }
      FWeakObjectPtr::operator=(&FStack_a4,(FObjectPtr)&local_68.Value);
      local_98 = local_b0;
      if ((local_b0 == (UObjectBase *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                             ,0x5f,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_80 = CONCAT44(FStack_a4.ObjectIndex,local_a8);
      local_78 = FStack_a4.ObjectSerialNumber;
      if ((char)local_a8 == '\0') {
        SRWLock = &param_3->AnnotationMapCritical;
        if ((SRWLock == (FPlatformRWLock *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                               ,0xa2,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
        iVar7 = *(int *)&(param_3->AnnotationMap).field_0x34;
        local_50 = &local_98;
        iVar3 = *(int *)&(param_3->AnnotationMap).field_0x8;
        local_48 = &local_80;
        TSet<TTuple<UObjectBase_const_*,FDuplicatedObject>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FDuplicatedObject_const_&>_>
                  ((TSet<TTuple<UObjectBase_const_*,FDuplicatedObject>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FDuplicatedObject,0>,FDefaultSetAllocator>
                    *)&param_3->AnnotationMap,&local_68,(bool *)&local_50);
        pUVar5 = local_98;
        SRWLock_00 = &param_3->AnnotationCacheCritical;
        if ((SRWLock_00 == (FPlatformRWLock *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                               ,0xa2,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
        (param_3->AnnotationCacheValue).bIsDefault = (bool)(undefined1)local_80;
        *(undefined3 *)&(param_3->AnnotationCacheValue).field_0x1 = local_80._1_3_;
        (param_3->AnnotationCacheValue).DuplicatedObject.WeakPtr.ObjectIndex = local_80._4_4_;
        (param_3->AnnotationCacheValue).DuplicatedObject.WeakPtr.ObjectSerialNumber = local_78;
        param_3->AnnotationCacheKey = pUVar5;
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
        pUVar8 = local_70;
        if (iVar3 == iVar7) {
          FUObjectAnnotationSparse<FDuplicatedObject,0>::ProcessRegistration(param_3);
          pUVar8 = local_70;
        }
      }
      else {
        FUObjectAnnotationSparse<FDuplicatedObject,0>::RemoveAnnotation(param_3,local_98);
      }
      pTVar2 = &param_4->UnserializedObjects;
      pFVar10 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_b0) &&
          ((FScriptContainerElement *)&local_b0 <
           pFVar10 + (longlong)(param_4->UnserializedObjects).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (param_4->UnserializedObjects).ArrayNum;
      piVar1 = &(param_4->UnserializedObjects).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (param_4->UnserializedObjects).ArrayNum = iVar7 + 1;
      *(UObjectBase **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_b0;
      GatherDefaultSubobjectsForDuplication((UObject *)local_b0,pUVar8,param_3,param_4);
      pFVar10 = local_58;
    }
    uVar9 = (ulonglong)local_9c;
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

