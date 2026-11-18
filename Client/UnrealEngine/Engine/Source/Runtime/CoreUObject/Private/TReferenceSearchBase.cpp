// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// operator() @ 1421b9410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::
CollectAllReferences'::__l8::<lambda_1>::operator()(void *this,int param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FUObjectItem *pFVar7;
  ulonglong uVar8;
  undefined1 auStackY_1f8 [32];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_180;
  UObjectBase *local_170;
  TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FCollector<0>_>
  local_168;
  FScriptContainerElement *local_160;
  int iStack_158;
  undefined4 uStack_154;
  FProcessor local_150;
  FWorkerContext local_140;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_150.This = *(FDirectReferenceSearch **)((longlong)this + 0x10);
  local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar4 = *(uint *)((longlong)this + 0x24);
  local_180.ArrayNum = 0;
  local_180.ArrayMax = 0;
  local_150.ThreadIndex = param_1;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&local_180.AllocatorInstance,0,&local_180.ArrayMax);
  }
  uVar4 = *(uint *)((longlong)this + 0x24);
  iVar5 = *(int *)((longlong)this + 0x20) + -1;
  uVar6 = uVar4 * param_1 + *(int *)((longlong)this + 0x18);
  if (iVar5 <= param_1) {
    uVar4 = *(int *)((longlong)this + 0x1c) - uVar4 * iVar5;
  }
  if (0 < (int)uVar4) {
    uVar8 = (ulonglong)uVar4;
    do {
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar6) || ((int)uVar6 < 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((uint)GUObjectArray.ObjObjects.NumChunks <= uVar6 >> 0x10) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ChunkIndex < (uint32)NumChunks",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x363,L"ChunkIndex (%d) < NumChunks (%d)"), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((GUObjectArray.ObjObjects.MaxElements <= (int)uVar6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < MaxElements",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x364,L"Index (%d) < MaxElements (%d)"), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar7 = GUObjectArray.ObjObjects.Objects[uVar6 >> 0x10];
      if ((pFVar7 == (FUObjectItem *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chunk",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x366,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar7 = pFVar7 + (uVar6 & 0xffff);
      if ((pFVar7 == (FUObjectItem *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_170 = (pFVar7->field1_0x8).Object;
      if ((local_170 != (UObjectBase *)0x0) &&
         (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        if ((local_180.AllocatorInstance.Data <= (FScriptContainerElement *)&local_170) &&
           (((FScriptContainerElement *)&local_170 <
             local_180.AllocatorInstance.Data + (longlong)local_180.ArrayMax * 8 &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)))) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = local_180.ArrayNum;
        if (local_180.ArrayNum == local_180.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_180.AllocatorInstance,&local_180.ArrayMax);
        }
        local_180.ArrayNum = iVar5 + 1;
        *(UObjectBase **)(local_180.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_170;
      }
      uVar6 = uVar6 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  UE::GC::FWorkerContext::FWorkerContext(&local_140);
  UE::GC::PadObjectArray(&local_180);
  FVar2.Data = local_180.AllocatorInstance.Data;
  iStack_158 = local_180.ArrayNum;
  local_160 = local_180.AllocatorInstance.Data;
  if ((local_180.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((iStack_158 != 0) &&
      (bVar3 = UObjectBase::IsValidLowLevel
                         (*(UObjectBase **)(FVar2.Data + (ulonglong)(iStack_158 + 0xf) * 8)), !bVar3
      )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("PaddedObjects.IsEmpty() || PaddedObjects.GetData()[PaddedObjects.Num() + ObjectLookahead - 1]->IsValidLowLevel()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                                ,0x181,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_140.InitialObjects._12_4_ = uStack_154;
  local_140.InitialObjects.ArrayNum = iStack_158;
  local_168.Processor = &local_150;
  local_140.InitialObjects.DataPtr = (UObject **)local_160;
  UE::GC::
  TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FCollector<0>_>
  ::ProcessObjectArray(&local_168,&local_140);
  UE::GC::FWorkerContext::~FWorkerContext(&local_140);
  if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1421b9790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::
CollectAllReferences'::__l8::<lambda_1>::operator()(void *this,int param_1)

{
  TObjectPtr<UObject>_u_0 TVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  FUObjectItem *pFVar9;
  TObjectPtr<UObject>_u_0 *this_00;
  TObjectPtr<UObject>_u_0 TVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStackY_258 [32];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_200;
  TObjectPtr<UObject>_u_0 local_1f0;
  int local_1e8;
  int local_1e4;
  TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FCollector<0>_>
  local_1e0;
  TObjectPtr<UObject>_u_0 *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FProcessor local_1c8 [4];
  FWorkerContext local_180;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1c8[0].This = *(FMinimalReferenceSearch **)((longlong)this + 0x10);
  uVar6 = *(uint *)((longlong)this + 0x24);
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  local_1c8[0].ThreadIndex = param_1;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (0 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar6,&local_200.AllocatorInstance,0,&local_200.ArrayMax);
  }
  uVar6 = *(uint *)((longlong)this + 0x24);
  iVar7 = *(int *)((longlong)this + 0x20) + -1;
  uVar12 = uVar6 * param_1 + *(int *)((longlong)this + 0x18);
  if (iVar7 <= param_1) {
    uVar6 = *(int *)((longlong)this + 0x1c) - uVar6 * iVar7;
  }
  if (0 < (int)uVar6) {
    uVar11 = (ulonglong)uVar6;
    do {
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar12) || ((int)uVar12 < 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((uint)GUObjectArray.ObjObjects.NumChunks <= uVar12 >> 0x10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ChunkIndex < (uint32)NumChunks",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x363,L"ChunkIndex (%d) < NumChunks (%d)"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((GUObjectArray.ObjObjects.MaxElements <= (int)uVar12) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < MaxElements",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x364,L"Index (%d) < MaxElements (%d)"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = GUObjectArray.ObjObjects.Objects[uVar12 >> 0x10];
      if ((pFVar9 == (FUObjectItem *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chunk",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x366,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = pFVar9 + (uVar12 & 0xffff);
      if ((pFVar9 == (FUObjectItem *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TVar1 = (TObjectPtr<UObject>_u_0)(pFVar9->field1_0x8).Object;
      local_1f0 = TVar1;
      if (((UObjectBase *)TVar1.DebugPtr != (UObjectBase *)0x0) &&
         (((uint)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        puVar2 = *(undefined8 **)((longlong)this + 0x10);
        if ((UObjectBase *)TVar1.DebugPtr != (UObjectBase *)0x0) {
          TVar10 = TVar1;
          do {
            uVar6 = ((uint)((ulonglong)TVar10.DebugPtr >> 0x14) & 0xffff ^
                    (uint)((ulonglong)TVar10.DebugPtr >> 4)) * -0x7a143595;
            uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
            if (*(int *)(puVar2 + 4) != *(int *)((longlong)puVar2 + 0x4c)) {
              puVar8 = puVar2 + 10;
              if ((undefined8 *)puVar2[0xb] != (undefined8 *)0x0) {
                puVar8 = (undefined8 *)puVar2[0xb];
              }
              iVar7 = *(int *)((longlong)puVar8 +
                              (ulonglong)(*(int *)(puVar2 + 0xc) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4
                              );
              if (iVar7 != -1) {
                do {
                  if (*(UObjectBase **)(puVar2[3] + (longlong)iVar7 * 0x10) ==
                      (UObjectBase *)TVar10.DebugPtr) {
                    if ((((TNonAccessTrackedObjectPtr<UObject> *)&(TVar1.DebugPtr)->field_0x20)->
                        ObjectPtr).field0_0x0.DebugPtr != (UObject *)0x0) {
                      uVar6 = 0;
                      if (param_1 < *(int *)(puVar2 + 2)) {
                        uVar6 = (uint)~param_1 >> 0x1f;
                      }
                      if ((uVar6 == 0) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar5)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      this_00 = (TObjectPtr<UObject>_u_0 *)((longlong)param_1 * 0x88 + puVar2[1]);
                      UE::ReferenceChainSearch::
                      TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::
                      FThreadData::FlushEdgeList
                                ((FThreadData *)&this_00->ObjectPtr,(FPolicyUObjectHeap *)*puVar2);
                      this_00->DebugPtr = (UObject *)TVar1;
                      iVar7 = *(int *)&((((TNonAccessTrackedObjectPtr<UObject> *)
                                         &(TVar1.DebugPtr)->field_0x20)->ObjectPtr).field0_0x0.
                                       DebugPtr)->field_0xc;
                      if ((iVar7 < 0) || (GUObjectArray.ObjObjects.NumElements <= iVar7)) {
                        UE::Logging::Private::BasicFatalLog
                                  ((FStaticBasicLogRecord *)
                                   &`public:_int___cdecl_UE::ReferenceChainSearch::FPolicyUObjectHeap::ObjectToVertex(UObject_const*___ptr64)const___ptr64'
                                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
                      }
                      local_1e8 = iVar7;
                      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                                 &this_00[1].ObjectPtr,&local_1e4,(bool *)&local_1e8);
                      goto LAB_1421b9acb;
                    }
                    break;
                  }
                  iVar7 = *(int *)(puVar2[3] + 8 + (longlong)iVar7 * 0x10);
                } while (iVar7 != -1);
              }
            }
            TVar10 = (TObjectPtr<UObject>_u_0)
                     (((TNonAccessTrackedObjectPtr<UObject> *)&(TVar10.DebugPtr)->field_0x20)->
                     ObjectPtr).field0_0x0.DebugPtr;
          } while ((UObjectBase *)TVar10.DebugPtr != (UObjectBase *)0x0);
        }
        if (((local_200.AllocatorInstance.Data <= &local_1f0) &&
            (&local_1f0 <
             (TObjectPtr<UObject>_u_0 *)
             (local_200.AllocatorInstance.Data + (longlong)local_200.ArrayMax * 8))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_200.ArrayNum;
        if (local_200.ArrayNum == local_200.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_200.AllocatorInstance,&local_200.ArrayMax);
        }
        local_200.ArrayNum = iVar7 + 1;
        ((TObjectPtr<UObject>_u_0 *)(local_200.AllocatorInstance.Data + (longlong)iVar7 * 8))->
        DebugPtr = (UObject *)local_1f0;
      }
LAB_1421b9acb:
      uVar12 = uVar12 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  UE::GC::FWorkerContext::FWorkerContext(&local_180);
  UE::GC::PadObjectArray(&local_200);
  FVar4.Data = local_200.AllocatorInstance.Data;
  iStack_1d0 = local_200.ArrayNum;
  local_1d8 = (TObjectPtr<UObject>_u_0 *)local_200.AllocatorInstance.Data;
  if ((local_200.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((iStack_1d0 != 0) &&
      (bVar5 = UObjectBase::IsValidLowLevel
                         (*(UObjectBase **)(FVar4.Data + (ulonglong)(iStack_1d0 + 0xf) * 8)), !bVar5
      )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("PaddedObjects.IsEmpty() || PaddedObjects.GetData()[PaddedObjects.Num() + ObjectLookahead - 1]->IsValidLowLevel()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                                ,0x181,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_180.InitialObjects._12_4_ = uStack_1cc;
  local_180.InitialObjects.ArrayNum = iStack_1d0;
  local_1e0.Processor = local_1c8;
  local_180.InitialObjects.DataPtr = (UObject **)local_1d8;
  UE::GC::
  TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FCollector<0>_>
  ::ProcessObjectArray(&local_1e0,&local_180);
  UE::GC::FWorkerContext::~FWorkerContext(&local_180);
  if ((TObjectPtr<UObject>_u_0 *)local_200.AllocatorInstance.Data != (TObjectPtr<UObject>_u_0 *)0x0)
  {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  return;
}

// CollectAllReferences @ 1421c20e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::
CollectAllReferences
          (TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch> *this,bool param_1
          )

{
  code *pcVar1;
  UGCObjectReferencer *pUVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStackY_278 [32];
  <lambda_1> local_200;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_1f8;
  TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FCollector<0>_>
  local_1e8;
  TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch> *local_1e0;
  undefined1 local_1d8;
  TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch> *local_1d0;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  TArrayView<std::nullptr_t,int> local_1b8;
  code *local_1a8;
  TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch> **local_1a0;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  FProcessor local_188 [4];
  FWorkerContext local_140;
  ulonglong local_40;
  
  iVar9 = GUObjectArray.ObjFirstGCIndex;
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_278;
  if (param_1) {
    if (FGCObject::GGCObjectReferencer != (UGCObjectReferencer *)0x0) {
      iVar8 = *(int *)((longlong)&FGCObject::GGCObjectReferencer->_padding_ + 4);
      if ((iVar8 < 0) || (GUObjectArray.ObjObjects.NumElements <= iVar8)) {
        Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`public:_int___cdecl_UE::ReferenceChainSearch::FPolicyUObjectHeap::ObjectToVertex(UObject_const*___ptr64)const___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
      }
      goto LAB_1421c216f;
    }
  }
  else {
    iVar9 = 0;
  }
  iVar8 = -1;
LAB_1421c216f:
  if (iVar9 <= iVar8) {
    iVar8 = -1;
  }
  iVar7 = GUObjectArray.ObjObjects.NumElements - iVar9;
  iVar5 = GetNumCollectReferenceWorkers();
  iVar6 = iVar7 / iVar5 + 1;
  SetNumThreads(this,iVar5,iVar6,iVar9,iVar7,iVar8);
  local_1a8 = Core::Private::Function::
              TFunctionRefCaller<`UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::CollectAllReferences'::__l8::<lambda_1>,void,int>
              ::Call;
  local_1a0 = &local_1e0;
  local_1b8.DataPtr = (void **)0x0;
  local_1b8.ArrayNum = 0;
  local_1e0 = this;
  local_1d8 = param_1;
  local_1d0 = this;
  local_1c8 = iVar9;
  local_1c4 = iVar7;
  local_1c0 = iVar5;
  local_1bc = iVar6;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_1a8,local_200,
             None,&local_1b8);
  if (iVar8 != -1) {
    local_188[0].ThreadIndex = (this->AllThreadData).ArrayNum + -1;
    local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.ArrayMax = 0;
    local_188[0].This = (FDirectReferenceSearch *)this;
    GC::FWorkerContext::FWorkerContext(&local_140);
    pUVar2 = FGCObject::GGCObjectReferencer;
    local_1f8.ArrayNum = 1;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,local_1f8.ArrayMax,&local_1f8.AllocatorInstance,1,&local_1f8.ArrayMax);
    *(UGCObjectReferencer **)local_1f8.AllocatorInstance.Data = pUVar2;
    GC::PadObjectArray(&local_1f8);
    iStack_190 = local_1f8.ArrayNum;
    FVar3.Data = local_1f8.AllocatorInstance.Data;
    local_198 = local_1f8.AllocatorInstance.Data;
    if (local_1f8.ArrayNum < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (iStack_190 != 0) {
      bVar4 = UObjectBase::IsValidLowLevel
                        (*(UObjectBase **)(FVar3.Data + (ulonglong)(iStack_190 + 0xf) * 8));
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PaddedObjects.IsEmpty() || PaddedObjects.GetData()[PaddedObjects.Num() + ObjectLookahead - 1]->IsValidLowLevel()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                           ,0x181,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    local_140.InitialObjects._12_4_ = uStack_18c;
    local_140.InitialObjects.ArrayNum = iStack_190;
    local_1e8.Processor = local_188;
    local_140.InitialObjects.DataPtr = (UObject **)local_198;
    GC::
    TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FCollector<0>_>
    ::ProcessObjectArray(&local_1e8,&local_140);
    GC::FWorkerContext::~FWorkerContext(&local_140);
    if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.AllocatorInstance.Data);
    }
  }
  return;
}

// CollectAllReferences @ 1421c2370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::
CollectAllReferences
          (TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch> *this,
          bool param_1)

{
  code *pcVar1;
  UGCObjectReferencer *pUVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStackY_278 [32];
  <lambda_1> local_200;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_1f8;
  TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FCollector<0>_>
  local_1e8;
  TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch> *local_1e0;
  undefined1 local_1d8;
  TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch> *local_1d0;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  TArrayView<std::nullptr_t,int> local_1b8;
  code *local_1a8;
  TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch> **local_1a0;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  FProcessor local_188 [4];
  FWorkerContext local_140;
  ulonglong local_40;
  
  iVar9 = GUObjectArray.ObjFirstGCIndex;
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_278;
  if (param_1) {
    if (FGCObject::GGCObjectReferencer != (UGCObjectReferencer *)0x0) {
      iVar8 = *(int *)((longlong)&FGCObject::GGCObjectReferencer->_padding_ + 4);
      if ((iVar8 < 0) || (GUObjectArray.ObjObjects.NumElements <= iVar8)) {
        Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`public:_int___cdecl_UE::ReferenceChainSearch::FPolicyUObjectHeap::ObjectToVertex(UObject_const*___ptr64)const___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
      }
      goto LAB_1421c23ff;
    }
  }
  else {
    iVar9 = 0;
  }
  iVar8 = -1;
LAB_1421c23ff:
  if (iVar9 <= iVar8) {
    iVar8 = -1;
  }
  iVar7 = GUObjectArray.ObjObjects.NumElements - iVar9;
  iVar5 = GetNumCollectReferenceWorkers();
  iVar6 = iVar7 / iVar5 + 1;
  SetNumThreads(this,iVar5,iVar6,iVar9,iVar7,iVar8);
  local_1a8 = Core::Private::Function::
              TFunctionRefCaller<`UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::CollectAllReferences'::__l8::<lambda_1>,void,int>
              ::Call;
  local_1a0 = &local_1e0;
  local_1b8.DataPtr = (void **)0x0;
  local_1b8.ArrayNum = 0;
  local_1e0 = this;
  local_1d8 = param_1;
  local_1d0 = this;
  local_1c8 = iVar9;
  local_1c4 = iVar7;
  local_1c0 = iVar5;
  local_1bc = iVar6;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_1a8,local_200,
             None,&local_1b8);
  if (iVar8 != -1) {
    local_188[0].ThreadIndex = (this->AllThreadData).ArrayNum + -1;
    local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.ArrayMax = 0;
    local_188[0].This = (FMinimalReferenceSearch *)this;
    GC::FWorkerContext::FWorkerContext(&local_140);
    pUVar2 = FGCObject::GGCObjectReferencer;
    local_1f8.ArrayNum = 1;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,local_1f8.ArrayMax,&local_1f8.AllocatorInstance,1,&local_1f8.ArrayMax);
    *(UGCObjectReferencer **)local_1f8.AllocatorInstance.Data = pUVar2;
    GC::PadObjectArray(&local_1f8);
    iStack_190 = local_1f8.ArrayNum;
    FVar3.Data = local_1f8.AllocatorInstance.Data;
    local_198 = local_1f8.AllocatorInstance.Data;
    if (local_1f8.ArrayNum < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (iStack_190 != 0) {
      bVar4 = UObjectBase::IsValidLowLevel
                        (*(UObjectBase **)(FVar3.Data + (ulonglong)(iStack_190 + 0xf) * 8));
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PaddedObjects.IsEmpty() || PaddedObjects.GetData()[PaddedObjects.Num() + ObjectLookahead - 1]->IsValidLowLevel()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                           ,0x181,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    local_140.InitialObjects._12_4_ = uStack_18c;
    local_140.InitialObjects.ArrayNum = iStack_190;
    local_1e8.Processor = local_188;
    local_140.InitialObjects.DataPtr = (UObject **)local_198;
    GC::
    TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FCollector<0>_>
    ::ProcessObjectArray(&local_1e8,&local_140);
    GC::FWorkerContext::~FWorkerContext(&local_140);
    if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.AllocatorInstance.Data);
    }
  }
  return;
}

// SetNumThreads @ 1421e7b80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::
SetNumThreads(TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch> *this,
             int param_1,int param_2,int param_3,int param_4,int param_5)

{
  TArray<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FThreadData,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FThreadData *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  
  pTVar1 = &this->AllThreadData;
  piVar2 = &(this->AllThreadData).ArrayMax;
  pFVar6 = (FThreadData *)(pTVar1->AllocatorInstance).Data;
  piVar3 = &(this->AllThreadData).ArrayNum;
  if ((this->AllThreadData).ArrayMax < 0) {
    DestructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FThreadData,int>
              (pFVar6,*piVar3);
    *piVar3 = 0;
    if (*piVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x88,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FThreadData,int>
              (pFVar6,*piVar3);
    *piVar3 = 0;
  }
  iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x88,8,param_1,&pTVar1->AllocatorInstance,piVar3,piVar2);
  DefaultConstructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FThreadData,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x88,param_1);
  uVar13 = 0;
  if (0 < param_1) {
    lVar16 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar13 < (this->AllThreadData).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar12 = (pTVar1->AllocatorInstance).Data;
      *(int *)(pFVar12 + lVar16 + 0x80) = param_3;
      uVar11 = param_2;
      if (param_1 + -1 <= (int)uVar13) {
        uVar11 = param_4 - (param_1 + -1) * param_2;
      }
      pFVar14 = pFVar12 + lVar16 + 0x70;
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      pFVar4 = pFVar12 + lVar16 + 0x7c;
      pFVar5 = pFVar12 + lVar16 + 0x78;
      if (*(int *)pFVar4 < (int)uVar11) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar11,(ForAnyElementType *)pFVar14,*(int *)pFVar5,(int *)pFVar4);
      }
      iVar9 = *(int *)pFVar5;
      if (iVar9 < (int)uVar11) {
        iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar11 - iVar9,(ForAnyElementType *)pFVar14,(int *)pFVar5,
                            (int *)pFVar4);
        memset((void *)((longlong)iVar10 * 0x10 + *(longlong *)pFVar14),0,
               (longlong)(int)(uVar11 - iVar9) << 4);
      }
      else if ((int)uVar11 < iVar9) {
        uVar15 = iVar9 - uVar11;
        if (((int)(uVar15 | uVar11) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar15 != 0) {
          _Dst = (void *)((longlong)(int)uVar11 * 0x10 + *(longlong *)pFVar14);
          iVar9 = (*(int *)pFVar5 - uVar15) - uVar11;
          if (iVar9 != 0) {
            memmove(_Dst,(void *)((longlong)(int)uVar15 * 0x10 + (longlong)_Dst),
                    (longlong)iVar9 << 4);
          }
          iVar9 = *(int *)(pFVar12 + lVar16 + 0x78);
          *(uint *)(pFVar12 + lVar16 + 0x78) = iVar9 - uVar15;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)pFVar14,iVar9 - uVar15,(int *)pFVar4);
        }
      }
      uVar13 = uVar13 + 1;
      param_3 = param_3 + param_2;
      lVar16 = lVar16 + 0x88;
    } while ((int)uVar13 < param_1);
  }
  if (param_5 != -1) {
    iVar9 = (this->AllThreadData).ArrayNum;
    if (iVar9 == (this->AllThreadData).ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x888,&(this->AllThreadData).AllocatorInstance,piVar2);
      (this->AllThreadData).ArrayNum = iVar9;
    }
    (this->AllThreadData).ArrayNum = iVar9 + 1;
    pFVar12 = (this->AllThreadData).AllocatorInstance.Data + (longlong)iVar9 * 0x88;
    DefaultConstructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FThreadData,int>
              (pFVar12,1);
    *(int *)(pFVar12 + 0x80) = param_5;
    if (*(int *)(pFVar12 + 0x7c) < 1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,(ForAnyElementType *)(pFVar12 + 0x70),*(int *)(pFVar12 + 0x78),
                 (int *)(pFVar12 + 0x7c));
    }
    TArray<TArrayView<int,int>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<TArrayView<int,int>,TSizedDefaultAllocator<32>_> *)(pFVar12 + 0x70),1,Default
              );
  }
  return;
}

// SetNumThreads @ 1421e7ee0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::
SetNumThreads(TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch> *this,
             int param_1,int param_2,int param_3,int param_4,int param_5)

{
  TArray<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FThreadData,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FThreadData *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  
  pTVar1 = &this->AllThreadData;
  piVar2 = &(this->AllThreadData).ArrayMax;
  pFVar6 = (FThreadData *)(pTVar1->AllocatorInstance).Data;
  piVar3 = &(this->AllThreadData).ArrayNum;
  if ((this->AllThreadData).ArrayMax < 0) {
    DestructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FThreadData,int>
              (pFVar6,*piVar3);
    *piVar3 = 0;
    if (*piVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x88,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FThreadData,int>
              (pFVar6,*piVar3);
    *piVar3 = 0;
  }
  iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x88,8,param_1,&pTVar1->AllocatorInstance,piVar3,piVar2);
  DefaultConstructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FThreadData,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x88,param_1);
  uVar13 = 0;
  if (0 < param_1) {
    lVar16 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar13 < (this->AllThreadData).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar12 = (pTVar1->AllocatorInstance).Data;
      *(int *)(pFVar12 + lVar16 + 0x80) = param_3;
      uVar11 = param_2;
      if (param_1 + -1 <= (int)uVar13) {
        uVar11 = param_4 - (param_1 + -1) * param_2;
      }
      pFVar14 = pFVar12 + lVar16 + 0x70;
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      pFVar4 = pFVar12 + lVar16 + 0x7c;
      pFVar5 = pFVar12 + lVar16 + 0x78;
      if (*(int *)pFVar4 < (int)uVar11) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar11,(ForAnyElementType *)pFVar14,*(int *)pFVar5,(int *)pFVar4);
      }
      iVar9 = *(int *)pFVar5;
      if (iVar9 < (int)uVar11) {
        iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar11 - iVar9,(ForAnyElementType *)pFVar14,(int *)pFVar5,
                            (int *)pFVar4);
        memset((void *)((longlong)iVar10 * 0x10 + *(longlong *)pFVar14),0,
               (longlong)(int)(uVar11 - iVar9) << 4);
      }
      else if ((int)uVar11 < iVar9) {
        uVar15 = iVar9 - uVar11;
        if (((int)(uVar15 | uVar11) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar15 != 0) {
          _Dst = (void *)((longlong)(int)uVar11 * 0x10 + *(longlong *)pFVar14);
          iVar9 = (*(int *)pFVar5 - uVar15) - uVar11;
          if (iVar9 != 0) {
            memmove(_Dst,(void *)((longlong)(int)uVar15 * 0x10 + (longlong)_Dst),
                    (longlong)iVar9 << 4);
          }
          iVar9 = *(int *)(pFVar12 + lVar16 + 0x78);
          *(uint *)(pFVar12 + lVar16 + 0x78) = iVar9 - uVar15;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)pFVar14,iVar9 - uVar15,(int *)pFVar4);
        }
      }
      uVar13 = uVar13 + 1;
      param_3 = param_3 + param_2;
      lVar16 = lVar16 + 0x88;
    } while ((int)uVar13 < param_1);
  }
  if (param_5 != -1) {
    iVar9 = (this->AllThreadData).ArrayNum;
    if (iVar9 == (this->AllThreadData).ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x888,&(this->AllThreadData).AllocatorInstance,piVar2);
      (this->AllThreadData).ArrayNum = iVar9;
    }
    (this->AllThreadData).ArrayNum = iVar9 + 1;
    pFVar12 = (this->AllThreadData).AllocatorInstance.Data + (longlong)iVar9 * 0x88;
    DefaultConstructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FThreadData,int>
              (pFVar12,1);
    *(int *)(pFVar12 + 0x80) = param_5;
    if (*(int *)(pFVar12 + 0x7c) < 1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,(ForAnyElementType *)(pFVar12 + 0x70),*(int *)(pFVar12 + 0x78),
                 (int *)(pFVar12 + 0x7c));
    }
    TArray<TArrayView<int,int>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<TArrayView<int,int>,TSizedDefaultAllocator<32>_> *)(pFVar12 + 0x70),1,Default
              );
  }
  return;
}

