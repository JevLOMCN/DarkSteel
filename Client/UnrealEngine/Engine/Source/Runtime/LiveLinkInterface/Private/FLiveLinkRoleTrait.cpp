// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 10

// GetControllerClass @ 14cfb93d0

TSubclassOf<ULiveLinkController> __cdecl
FLiveLinkRoleTrait::GetControllerClass(TSubclassOf<ULiveLinkRole> param_1)

{
  undefined8 *in_RDX;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && ((UObject *)*in_RDX != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)*in_RDX);
  }
  LiveLinkRoleTemplate::GetTClasses<ULiveLinkController>(param_1);
  return (TObjectPtr<UClass>)param_1.Class.field0_0x0;
}

// GetFrameInterpolationProcessorClasses @ 14cfb9a90

TArray<TSubclassOf<ULiveLinkFrameInterpolationProcessor>,TSizedDefaultAllocator<32>_> * __cdecl
FLiveLinkRoleTrait::GetFrameInterpolationProcessorClasses
          (TArray<TSubclassOf<ULiveLinkFrameInterpolationProcessor>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,TSubclassOf<ULiveLinkRole> param_1)

{
  UObject *local_res8 [4];
  
  local_res8[0] = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8[0]);
  }
  LiveLinkRoleTemplate::GetTArrayClasses<ULiveLinkFrameInterpolationProcessor>
            (__return_storage_ptr__,(TSubclassOf<ULiveLinkRole>)local_res8);
  return __return_storage_ptr__;
}

// GetFramePreProcessorClasses @ 14cfb9ad0

TArray<TSubclassOf<ULiveLinkFramePreProcessor>,TSizedDefaultAllocator<32>_> * __cdecl
FLiveLinkRoleTrait::GetFramePreProcessorClasses
          (TArray<TSubclassOf<ULiveLinkFramePreProcessor>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,TSubclassOf<ULiveLinkRole> param_1)

{
  UObject *local_res8 [4];
  
  local_res8[0] = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8[0]);
  }
  LiveLinkRoleTemplate::GetTArrayClasses<ULiveLinkFramePreProcessor>
            (__return_storage_ptr__,(TSubclassOf<ULiveLinkRole>)local_res8);
  return __return_storage_ptr__;
}

// GetFrameTranslatorClassesFrom @ 14cfb9c40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_> * __cdecl
FLiveLinkRoleTrait::GetFrameTranslatorClassesFrom
          (TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,TSubclassOf<ULiveLinkRole> param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_> *pTVar9;
  ULiveLinkFrameTranslator *pUVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  FUObjectCppClassStaticFunctions local_res8;
  undefined1 local_res10 [8];
  UObject *local_58;
  TObjectIterator<UClass> local_50;
  
  lVar16 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  lVar13 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar13 != 0) && (pUVar8 = ULiveLinkRole::StaticClass(), pUVar8 != (UClass *)0x0)) {
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar13 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar8->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
      local_50.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.ObjectArray.ArrayNum = 0;
      local_50.ObjectArray.ArrayMax = 0;
      local_50.Index = 0xffffffff;
      EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar8 = Z_Construct_UClass_UClass_NoRegister();
      GetObjectsOfClass(pUVar8,&local_50.ObjectArray,true,RF_ClassDefaultObject,
                        EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      TObjectIterator<UClass>::Advance(&local_50);
      while ((lVar13 = (longlong)local_50.Index, -1 < local_50.Index &&
             (local_50.Index < local_50.ObjectArray.ArrayNum))) {
        uVar15 = 0;
        uVar6 = uVar15;
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
            pTVar9 = (TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar9;
          }
        }
        lVar13 = *(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
        iVar7 = local_50.ObjectArray.ArrayNum;
        if (Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton == (UClass *)0x0) {
          local_res8.AddReferencedObjects = UObject::AddReferencedObjects;
          GetPrivateStaticClassBody
                    (L"/Script/LiveLinkInterface",L"LiveLinkFrameTranslator",
                     &Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton,
                     ULiveLinkFrameTranslator::StaticRegisterNativesULiveLinkFrameTranslator,0x28,8,
                     CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                     InternalConstructor<ULiveLinkFrameTranslator>,
                     InternalVTableHelperCtorCaller<ULiveLinkFrameTranslator>,&local_res8,
                     UObject::StaticClass,UObject::StaticClass);
          iVar7 = local_50.ObjectArray.ArrayNum;
          if (Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton != (UClass *)0x0)
          goto LAB_14cfb9e2c;
        }
        else {
LAB_14cfb9e2c:
          iVar1 = (int)(Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton)->
                       _padding_;
          if ((*(int *)(lVar13 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar1 * 8) !=
              &(Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton)->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            lVar13 = (longlong)local_50.Index;
            uVar6 = uVar15;
            if (local_50.Index < iVar7) {
              uVar6 = (uint)~local_50.Index >> 0x1f;
            }
            if (uVar6 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                pTVar9 = (TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_>
                          *)(*pcVar3)();
                return pTVar9;
              }
              iVar7 = local_50.ObjectArray.ArrayNum;
            }
            if ((*(uint *)(*(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8) +
                          0xd4) & 0x2000001) == 0) {
              lVar13 = (longlong)local_50.Index;
              if (local_50.Index < iVar7) {
                uVar15 = (uint)~local_50.Index >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pTVar9 = (TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_>
                          *)(*pcVar3)();
                return pTVar9;
              }
              pUVar10 = UClass::GetDefaultObject<ULiveLinkFrameTranslator>
                                  (*(UClass **)
                                    (local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8));
              plVar11 = (longlong *)(**(code **)(*(longlong *)pUVar10 + 0x2b0))(pUVar10,local_res10)
              ;
              lVar13 = *plVar11;
              lVar14 = lVar16;
              if ((lVar13 != 0) && (pUVar8 = ULiveLinkRole::StaticClass(), pUVar8 != (UClass *)0x0))
              {
                iVar7 = (int)pUVar8->_padding_;
                if ((*(int *)(lVar13 + 0x38) < iVar7) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar7 * 8)
                    != &pUVar8->_padding_)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  lVar14 = *plVar11;
                }
              }
              lVar13 = *(longlong *)param_1.Class.field0_0x0;
              lVar12 = lVar16;
              if ((lVar13 != 0) && (pUVar8 = ULiveLinkRole::StaticClass(), pUVar8 != (UClass *)0x0))
              {
                iVar7 = (int)pUVar8->_padding_;
                if ((*(int *)(lVar13 + 0x38) < iVar7) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar7 * 8)
                    != &pUVar8->_padding_)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  lVar12 = *(longlong *)param_1.Class.field0_0x0;
                }
              }
              if (lVar14 == lVar12) {
                lVar13 = (longlong)local_50.Index;
                uVar6 = 0;
                if (local_50.Index < local_50.ObjectArray.ArrayNum) {
                  uVar6 = (uint)~local_50.Index >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  pTVar9 = (TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_>
                            *)(*pcVar3)();
                  return pTVar9;
                }
                local_58 = *(UObject **)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_58 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_58);
                }
                pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
                if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
                    ((FScriptContainerElement *)&local_58 <
                     pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  pTVar9 = (TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_>
                            *)(*pcVar3)();
                  return pTVar9;
                }
                iVar7 = __return_storage_ptr__->ArrayNum;
                if (iVar7 == __return_storage_ptr__->ArrayMax) {
                  iVar7 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&__return_storage_ptr__->AllocatorInstance,
                                     &__return_storage_ptr__->ArrayMax);
                }
                __return_storage_ptr__->ArrayNum = iVar7 + 1;
                *(UObject **)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_58
                ;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_58 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_58);
                }
              }
            }
          }
        }
        TObjectIterator<UClass>::Advance(&local_50);
      }
      if (local_50.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetFrameTranslatorClassesTo @ 14cfba110

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_> * __cdecl
FLiveLinkRoleTrait::GetFrameTranslatorClassesTo
          (TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,TSubclassOf<ULiveLinkRole> param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_> *pTVar9;
  ULiveLinkFrameTranslator *pUVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  FUObjectCppClassStaticFunctions local_res8;
  undefined1 local_res10 [8];
  UObject *local_58;
  TObjectIterator<UClass> local_50;
  
  lVar16 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  lVar13 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar13 != 0) && (pUVar8 = ULiveLinkRole::StaticClass(), pUVar8 != (UClass *)0x0)) {
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar13 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar8->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
      local_50.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.ObjectArray.ArrayNum = 0;
      local_50.ObjectArray.ArrayMax = 0;
      local_50.Index = 0xffffffff;
      EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar8 = Z_Construct_UClass_UClass_NoRegister();
      GetObjectsOfClass(pUVar8,&local_50.ObjectArray,true,RF_ClassDefaultObject,
                        EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      TObjectIterator<UClass>::Advance(&local_50);
      while ((lVar13 = (longlong)local_50.Index, -1 < local_50.Index &&
             (local_50.Index < local_50.ObjectArray.ArrayNum))) {
        uVar15 = 0;
        uVar6 = uVar15;
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
            pTVar9 = (TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar9;
          }
        }
        lVar13 = *(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
        iVar7 = local_50.ObjectArray.ArrayNum;
        if (Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton == (UClass *)0x0) {
          local_res8.AddReferencedObjects = UObject::AddReferencedObjects;
          GetPrivateStaticClassBody
                    (L"/Script/LiveLinkInterface",L"LiveLinkFrameTranslator",
                     &Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton,
                     ULiveLinkFrameTranslator::StaticRegisterNativesULiveLinkFrameTranslator,0x28,8,
                     CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                     InternalConstructor<ULiveLinkFrameTranslator>,
                     InternalVTableHelperCtorCaller<ULiveLinkFrameTranslator>,&local_res8,
                     UObject::StaticClass,UObject::StaticClass);
          iVar7 = local_50.ObjectArray.ArrayNum;
          if (Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton != (UClass *)0x0)
          goto LAB_14cfba2fc;
        }
        else {
LAB_14cfba2fc:
          iVar1 = (int)(Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton)->
                       _padding_;
          if ((*(int *)(lVar13 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar1 * 8) !=
              &(Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton)->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            lVar13 = (longlong)local_50.Index;
            uVar6 = uVar15;
            if (local_50.Index < iVar7) {
              uVar6 = (uint)~local_50.Index >> 0x1f;
            }
            if (uVar6 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                pTVar9 = (TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_>
                          *)(*pcVar3)();
                return pTVar9;
              }
              iVar7 = local_50.ObjectArray.ArrayNum;
            }
            if ((*(uint *)(*(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8) +
                          0xd4) & 0x2000001) == 0) {
              lVar13 = (longlong)local_50.Index;
              if (local_50.Index < iVar7) {
                uVar15 = (uint)~local_50.Index >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pTVar9 = (TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_>
                          *)(*pcVar3)();
                return pTVar9;
              }
              pUVar10 = UClass::GetDefaultObject<ULiveLinkFrameTranslator>
                                  (*(UClass **)
                                    (local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8));
              plVar11 = (longlong *)(**(code **)(*(longlong *)pUVar10 + 0x2b8))(pUVar10,local_res10)
              ;
              lVar13 = *plVar11;
              lVar14 = lVar16;
              if ((lVar13 != 0) && (pUVar8 = ULiveLinkRole::StaticClass(), pUVar8 != (UClass *)0x0))
              {
                iVar7 = (int)pUVar8->_padding_;
                if ((*(int *)(lVar13 + 0x38) < iVar7) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar7 * 8)
                    != &pUVar8->_padding_)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  lVar14 = *plVar11;
                }
              }
              lVar13 = *(longlong *)param_1.Class.field0_0x0;
              lVar12 = lVar16;
              if ((lVar13 != 0) && (pUVar8 = ULiveLinkRole::StaticClass(), pUVar8 != (UClass *)0x0))
              {
                iVar7 = (int)pUVar8->_padding_;
                if ((*(int *)(lVar13 + 0x38) < iVar7) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar7 * 8)
                    != &pUVar8->_padding_)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  lVar12 = *(longlong *)param_1.Class.field0_0x0;
                }
              }
              if (lVar14 == lVar12) {
                lVar13 = (longlong)local_50.Index;
                uVar6 = 0;
                if (local_50.Index < local_50.ObjectArray.ArrayNum) {
                  uVar6 = (uint)~local_50.Index >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  pTVar9 = (TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_>
                            *)(*pcVar3)();
                  return pTVar9;
                }
                local_58 = *(UObject **)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_58 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_58);
                }
                pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
                if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
                    ((FScriptContainerElement *)&local_58 <
                     pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  pTVar9 = (TArray<TSubclassOf<ULiveLinkFrameTranslator>,TSizedDefaultAllocator<32>_>
                            *)(*pcVar3)();
                  return pTVar9;
                }
                iVar7 = __return_storage_ptr__->ArrayNum;
                if (iVar7 == __return_storage_ptr__->ArrayMax) {
                  iVar7 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&__return_storage_ptr__->AllocatorInstance,
                                     &__return_storage_ptr__->ArrayMax);
                }
                __return_storage_ptr__->ArrayNum = iVar7 + 1;
                *(UObject **)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_58
                ;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_58 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_58);
                }
              }
            }
          }
        }
        TObjectIterator<UClass>::Advance(&local_50);
      }
      if (local_50.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRoles @ 14cfbb840

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> * __cdecl
FLiveLinkRoleTrait::GetRoles
          (TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint uVar11;
  FUObjectCppClassStaticFunctions local_res8;
  UObject *local_48;
  TObjectIterator<UClass> local_40;
  
  local_40.Index = 0xffffffff;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ObjectArray.ArrayNum = 0;
  local_40.ObjectArray.ArrayMax = 0;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar8,&local_40.ObjectArray,true,RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_40);
  while( true ) {
    lVar10 = (longlong)local_40.Index;
    if (local_40.Index < 0) break;
    if (local_40.ObjectArray.ArrayNum <= local_40.Index) break;
    uVar11 = 0;
    uVar6 = uVar11;
    if (local_40.Index < local_40.ObjectArray.ArrayNum) {
      uVar6 = (uint)~local_40.Index >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
    }
    lVar10 = *(longlong *)(local_40.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
    iVar7 = local_40.ObjectArray.ArrayNum;
    if (Z_Registration_Info_UClass_ULiveLinkRole.InnerSingleton == (UClass *)0x0) {
      local_res8.AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/LiveLinkInterface",L"LiveLinkRole",
                 &Z_Registration_Info_UClass_ULiveLinkRole.InnerSingleton,
                 ULiveLinkRole::StaticRegisterNativesULiveLinkRole,0x28,8,
                 CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                 InternalConstructor<ULiveLinkRole>,InternalVTableHelperCtorCaller<ULiveLinkRole>,
                 &local_res8,UObject::StaticClass,UObject::StaticClass);
      iVar7 = local_40.ObjectArray.ArrayNum;
      if (Z_Registration_Info_UClass_ULiveLinkRole.InnerSingleton != (UClass *)0x0)
      goto LAB_14cfbb9ce;
    }
    else {
LAB_14cfbb9ce:
      iVar1 = (int)(Z_Registration_Info_UClass_ULiveLinkRole.InnerSingleton)->_padding_;
      if ((*(int *)(lVar10 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UClass_ULiveLinkRole.InnerSingleton)->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar10 = (longlong)local_40.Index;
        uVar6 = uVar11;
        if (local_40.Index < iVar7) {
          uVar6 = (uint)~local_40.Index >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar9;
          }
          iVar7 = local_40.ObjectArray.ArrayNum;
        }
        if ((*(uint *)(*(longlong *)(local_40.ObjectArray.AllocatorInstance.Data + lVar10 * 8) +
                      0xd4) & 0x2000001) == 0) {
          lVar10 = (longlong)local_40.Index;
          if (local_40.Index < iVar7) {
            uVar11 = (uint)~local_40.Index >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> *)(*pcVar3)()
              ;
              return pTVar9;
            }
          }
          local_48 = *(UObject **)(local_40.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_48);
          }
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
             ((FScriptContainerElement *)&local_48 <
              pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> *)(*pcVar3)()
              ;
              return pTVar9;
            }
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
               local_48;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_48);
          }
        }
      }
    }
    TObjectIterator<UClass>::Advance(&local_40);
  }
  if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetVirtualSubjectClasses @ 14cfbcae0

TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_> * __cdecl
FLiveLinkRoleTrait::GetVirtualSubjectClasses
          (TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,TSubclassOf<ULiveLinkRole> param_1)

{
  UObject *local_res8 [4];
  
  local_res8[0] = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8[0]);
  }
  LiveLinkRoleTemplate::GetTArrayClasses<ULiveLinkVirtualSubject>
            (__return_storage_ptr__,(TSubclassOf<ULiveLinkRole>)local_res8);
  return __return_storage_ptr__;
}

// GetVirtualSubjectClasses @ 14cfbcb20

TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_> * __cdecl
FLiveLinkRoleTrait::GetVirtualSubjectClasses
          (TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  LiveLinkRoleTemplate::GetTArrayClasses<ULiveLinkVirtualSubject>(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Validate @ 14cfbed20

bool __cdecl
FLiveLinkRoleTrait::Validate
          (TSubclassOf<ULiveLinkRole> param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  longlong lVar7;
  UClass *pUVar8;
  longlong lVar9;
  
  lVar7 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar7 == 0) {
    return false;
  }
  pUVar6 = ULiveLinkRole::StaticClass();
  if (pUVar6 == (UClass *)0x0) {
    return false;
  }
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(lVar7 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return false;
  }
  pUVar6 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar6 == (UClass *)0x0) {
    return false;
  }
  lVar7 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x20))(param_2);
  if (lVar7 == 0) {
    return false;
  }
  pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
  iVar1 = (int)pUVar8->_padding_;
  if (*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) {
    return false;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar8->_padding_) {
    return false;
  }
  lVar7 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x20))(param_2);
  if (lVar7 != 0) {
    pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) goto LAB_14cfbedf9;
  }
  lVar7 = 0;
LAB_14cfbedf9:
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pUVar2 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = ULiveLinkRole::StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar6->_padding_)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar9 = (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2);
  return lVar7 == lVar9;
}

// Validate @ 14cfbeea0

bool __cdecl
FLiveLinkRoleTrait::Validate
          (TSubclassOf<ULiveLinkRole> param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_2)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  longlong lVar7;
  UClass *pUVar8;
  longlong lVar9;
  
  lVar7 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar7 == 0) {
    return false;
  }
  pUVar6 = ULiveLinkRole::StaticClass();
  if (pUVar6 == (UClass *)0x0) {
    return false;
  }
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(lVar7 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return false;
  }
  pUVar6 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar6 == (UClass *)0x0) {
    return false;
  }
  lVar7 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x20))(param_2);
  if (lVar7 == 0) {
    return false;
  }
  pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
  iVar1 = (int)pUVar8->_padding_;
  if (*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) {
    return false;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar8->_padding_) {
    return false;
  }
  lVar7 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x20))(param_2);
  if (lVar7 != 0) {
    pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) goto LAB_14cfbef79;
  }
  lVar7 = 0;
LAB_14cfbef79:
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pUVar2 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = ULiveLinkRole::StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar6->_padding_)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar9 = (**(code **)(*(longlong *)pUVar2 + 0x2b0))(pUVar2);
  return lVar7 == lVar9;
}

