// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// FFindReferencersArchive @ 141f21540

FFindReferencersArchive * __thiscall
FFindReferencersArchive::FFindReferencersArchive
          (FFindReferencersArchive *this,UObject *param_1,TArrayView<UObject_*,int> *param_2,
          bool param_3)

{
  byte *pbVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  UObject *pUVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FFindReferencersArchive *pFVar11;
  uint uVar12;
  longlong lVar13;
  int *piVar14;
  FIdentityFunctor local_res20;
  longlong local_48;
  FReferenceCollector local_40;
  FFindReferencersArchive *local_30;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  pTVar2 = &(this->TargetObjects).TargetObjects;
  pTVar3 = &(this->TargetObjects).RefCounts;
  this->_padding_ = (longlong)&___7FFindReferencersArchive__6B_;
  piVar14 = &(this->TargetObjects).TargetObjects.ArrayMax;
  (this->TargetObjects).bFrozen = false;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->TargetObjects).TargetObjects.ArrayNum = 0;
  *piVar14 = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->TargetObjects).RefCounts.ArrayNum = 0;
  (this->TargetObjects).RefCounts.ArrayMax = 0;
  *(undefined8 *)&this->ReferenceMap = 0;
  *(undefined8 *)&(this->ReferenceMap).field_0x8 = 0;
  *(undefined8 *)&(this->ReferenceMap).field_0x20 = 0;
  *(undefined4 *)&(this->ReferenceMap).field_0x28 = 0;
  *(undefined4 *)&(this->ReferenceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferenceMap).field_0x34 = 0;
  *(undefined4 *)&(this->ReferenceMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ReferenceMap).field_0x40 = 0;
  *(undefined4 *)&(this->ReferenceMap).field_0x48 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x10;
  uVar12 = param_2->ArrayNum;
  *(byte *)((longlong)&this->_padding_ + 3) =
       *(byte *)((longlong)&this->_padding_ + 3) & 0xfd | param_3 * '\x02' | 1;
  if (((this->TargetObjects).bFrozen != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bFrozen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\FindReferencersArchive.h"
                         ,0xb8,L"Container has been frozen and cannot be modified anymore"), bVar8))
  {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FFindReferencersArchive *)(*pcVar7)();
    return pFVar11;
  }
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (*piVar14 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar12,&pTVar2->AllocatorInstance,(this->TargetObjects).TargetObjects.ArrayNum,
               piVar14);
  }
  iVar10 = param_2->ArrayNum;
  uVar12 = 0;
  if (0 < iVar10) {
    lVar13 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar12 < iVar10) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FFindReferencersArchive *)(*pcVar7)();
        return pFVar11;
      }
      lVar4 = *(longlong *)(lVar13 + (longlong)param_2->DataPtr);
      if (lVar4 != 0) {
        local_48 = lVar4;
        if (((this->TargetObjects).bFrozen != false) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bFrozen",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\FindReferencersArchive.h"
                               ,0xb8,L"Container has been frozen and cannot be modified anymore"),
           bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar11 = (FFindReferencersArchive *)(*pcVar7)();
          return pFVar11;
        }
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar5 + (longlong)*piVar14 * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar11 = (FFindReferencersArchive *)(*pcVar7)();
          return pFVar11;
        }
        iVar10 = (this->TargetObjects).TargetObjects.ArrayNum;
        if (iVar10 == *piVar14) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar14);
        }
        (this->TargetObjects).TargetObjects.ArrayNum = iVar10 + 1;
        *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_48;
      }
      iVar10 = param_2->ArrayNum;
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar12 < iVar10);
  }
  piVar14 = &(this->TargetObjects).RefCounts.ArrayMax;
  if (((this->TargetObjects).bFrozen != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bFrozen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\FindReferencersArchive.h"
                         ,0xb8,L"Container has been frozen and cannot be modified anymore"), bVar8))
  {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FFindReferencersArchive *)(*pcVar7)();
    return pFVar11;
  }
  (this->TargetObjects).bFrozen = true;
  AlgoImpl::IntroSortInternal<UObject_*,int,FIdentityFunctor,TLess<void>_>
            ((UObject **)(pTVar2->AllocatorInstance).Data,
             (this->TargetObjects).TargetObjects.ArrayNum,local_res20,(TLess<void>)local_res20);
  uVar12 = (this->TargetObjects).TargetObjects.ArrayNum;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  (this->TargetObjects).RefCounts.ArrayNum = 0;
  if (*piVar14 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar12,&pTVar3->AllocatorInstance,0,piVar14);
  }
  this->PotentialReferencer = param_1;
  if (param_1 != (UObject *)0x0) {
    (**(code **)(*(longlong *)param_1 + 200))(param_1,this);
    pUVar6 = this->PotentialReferencer;
    local_40.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
    local_40._padding_ =
         (longlong)
         &`FFindReferencersArchive::ResetPotentialReferencer'::`8'::FArchiveProxyCollector::
          _vftable_;
    lVar13 = *(longlong *)&pUVar6->field_0x10;
    local_30 = this;
    if ((*(longlong **)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
         (longlong *)(lVar13 + 0x30)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("This->IsA(this)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xf38,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FFindReferencersArchive *)(*pcVar7)();
      return pFVar11;
    }
    if ((*(longlong *)(lVar13 + 0xc0) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CppClassStaticFunctions.GetAddReferencedObjects() != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xf3a,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FFindReferencersArchive *)(*pcVar7)();
      return pFVar11;
    }
    (**(code **)(lVar13 + 0xc0))(pUVar6,&local_40);
    FReferenceCollector::~FReferenceCollector(&local_40);
  }
  return this;
}

// operator<< @ 141f25300

FArchive * __thiscall
FFindReferencersArchive::operator<<(FFindReferencersArchive *this,UObject **param_1)

{
  UObject *pUVar1;
  int *piVar2;
  FProperty *local_res8;
  
  pUVar1 = *param_1;
  if ((pUVar1 != (UObject *)0x0) && (pUVar1 != this->PotentialReferencer)) {
    piVar2 = FTargetObjectContainer::GetRefCountPtr(&this->TargetObjects,pUVar1);
    if (piVar2 != (int *)0x0) {
      local_res8 = (FProperty *)this->_padding_;
      if (local_res8 != (FProperty *)0x0) {
        TMultiMap<UObject_*,FProperty_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>_>
        ::EmplaceUnique<UObject_*_const_&,FProperty_*>(&this->ReferenceMap,param_1,&local_res8);
      }
      *piVar2 = *piVar2 + 1;
    }
    return (FArchive *)this;
  }
  return (FArchive *)this;
}

// AppendReferenceCounts @ 141f29240

int __thiscall
FFindReferencersArchive::AppendReferenceCounts
          (FFindReferencersArchive *this,
          TMap<UObject_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,int,0>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res8 [2];
  TPairInitializer<UObject_*_&&,int_&&> local_res10;
  int **local_38;
  undefined4 *local_30;
  
  uVar5 = 0;
  iVar4 = (this->TargetObjects).RefCounts.ArrayNum;
  if (0 < iVar4) {
    lVar8 = 0;
    lVar7 = 0;
    do {
      uVar6 = ~uVar5 >> 0x1f;
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = uVar6;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (0 < *(int *)((this->TargetObjects).RefCounts.AllocatorInstance.Data + lVar7)) {
        uVar3 = 0;
        if ((int)uVar5 < (this->TargetObjects).TargetObjects.ArrayNum) {
          uVar3 = uVar6;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        if (*(UObject **)((this->TargetObjects).TargetObjects.AllocatorInstance.Data + lVar8) !=
            this->PotentialReferencer) {
          uVar3 = 0;
          if ((int)uVar5 < (this->TargetObjects).RefCounts.ArrayNum) {
            uVar3 = uVar6;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          local_res8[0] =
               *(undefined4 *)((this->TargetObjects).RefCounts.AllocatorInstance.Data + lVar7);
          uVar3 = 0;
          if ((int)uVar5 < (this->TargetObjects).TargetObjects.ArrayNum) {
            uVar3 = uVar6;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          local_res10.Value =
               *(int **)((this->TargetObjects).TargetObjects.AllocatorInstance.Data + lVar8);
          local_38 = &local_res10.Value;
          local_30 = local_res8;
          TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UObject_*_&&,int_&&>_>
                    ((TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
                      *)param_1,&local_res10,(bool *)&local_38);
        }
      }
      iVar4 = (this->TargetObjects).RefCounts.ArrayNum;
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 4;
      lVar8 = lVar8 + 8;
    } while ((int)uVar5 < iVar4);
  }
  return *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
}

// GetArchiveName @ 141f32f00

FString * __thiscall
FFindReferencersArchive::GetArchiveName
          (FFindReferencersArchive *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FFindReferencersArchive");
  return __return_storage_ptr__;
}

// GetReferenceCount @ 141f36350

int __thiscall
FFindReferencersArchive::GetReferenceCount
          (FFindReferencersArchive *this,UObject *param_1,
          TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_> local_38;
  
  iVar7 = 0;
  iVar13 = 0;
  iVar12 = 0;
  iVar5 = 0;
  if ((param_1 != (UObject *)0x0) && (iVar5 = iVar12, this->PotentialReferencer != param_1)) {
    if (((this->TargetObjects).bFrozen == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bFrozen",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\FindReferencersArchive.h"
                           ,0xb3,L"Container has not been frozen and cannot be searched yet"), bVar4
       )) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    uVar9 = (this->TargetObjects).TargetObjects.ArrayNum;
    pFVar2 = (this->TargetObjects).TargetObjects.AllocatorInstance.Data;
    uVar6 = uVar9;
    if (0 < (int)uVar9) {
      do {
        uVar11 = uVar6 >> 1;
        iVar13 = iVar7;
        if (*(UObject **)(pFVar2 + (longlong)(int)(uVar11 + iVar7) * 8) < param_1) {
          iVar13 = uVar11 + iVar7 + (uVar6 & 1);
        }
        uVar6 = uVar11;
        iVar7 = iVar13;
      } while (uVar11 != 0);
    }
    if ((((iVar13 < (int)uVar9) && (*(UObject **)(pFVar2 + (longlong)iVar13 * 8) <= param_1)) &&
        (iVar13 != -1)) && (iVar13 < (this->TargetObjects).RefCounts.ArrayNum)) {
      if ((iVar13 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      pFVar2 = (this->TargetObjects).RefCounts.AllocatorInstance.Data + (longlong)iVar13 * 4;
      if (((pFVar2 != (FScriptContainerElement *)0x0) && (iVar7 = *(int *)pFVar2, 0 < iVar7)) &&
         (iVar5 = iVar7, param_2 != (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)0x0)) {
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.ArrayNum = 0;
        local_38.ArrayMax = 0;
        TMultiMap<UObject_*,FProperty_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>_>
        ::MultiFind<TSizedDefaultAllocator<32>_>(&this->ReferenceMap,param_1,&local_38,false);
        uVar8 = local_38._8_8_ & 0xffffffff;
        if (local_38.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar8);
        }
        piVar1 = &param_2->ArrayMax;
        param_2->ArrayNum = 0;
        if (*piVar1 != local_38.ArrayNum) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_38.ArrayNum,&param_2->AllocatorInstance,0,piVar1);
          uVar8 = local_38._8_8_ & 0xffffffff;
        }
        uVar9 = (int)uVar8 - 1;
        if (-1 < (int)uVar9) {
          lVar14 = (longlong)(int)uVar9 * 8;
          while( true ) {
            uVar6 = 0;
            if ((int)uVar9 < (int)uVar8) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              iVar5 = (*pcVar3)();
              return iVar5;
            }
            pFVar2 = (param_2->AllocatorInstance).Data;
            pFVar10 = local_38.AllocatorInstance.Data + lVar14;
            if (((pFVar2 <= pFVar10) && (pFVar10 < pFVar2 + (longlong)*piVar1 * 8)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              iVar5 = (*pcVar3)();
              return iVar5;
            }
            iVar7 = param_2->ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar7 + 1;
            lVar14 = lVar14 + -8;
            uVar9 = uVar9 - 1;
            *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) =
                 *(undefined8 *)pFVar10;
            if ((int)uVar9 < 0) break;
            uVar8 = local_38._8_8_ & 0xffffffff;
          }
        }
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
      }
    }
  }
  return iVar5;
}

// GetReferenceCounts @ 141f36640

int __thiscall
FFindReferencersArchive::GetReferenceCounts
          (FFindReferencersArchive *this,
          TMap<UObject_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,int,0>_>
          *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = 1 < *(int *)&param_1->field_0x48;
  if (!bVar1) {
    TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
                    *)param_1);
  }
  *(undefined4 *)&param_1->field_0x8 = 0;
  if (*(int *)&param_1->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)param_1,0,(int *)&param_1->field_0xc);
  }
  *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
  *(undefined4 *)&param_1->field_0x34 = 0;
  *(undefined4 *)&param_1->field_0x28 = 0;
  if ((*(int *)&param_1->field_0x2c < 0) || (0x80 < *(int *)&param_1->field_0x2c)) {
    *(undefined4 *)&param_1->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10,0);
  }
  if (bVar1) {
    *(undefined4 *)&param_1->field_0x48 = 1;
    TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>::
    Rehash((TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
            *)param_1);
  }
  iVar2 = AppendReferenceCounts(this,param_1);
  return iVar2;
}

// GetReferenceCounts @ 141f36710

int __thiscall
FFindReferencersArchive::GetReferenceCounts
          (FFindReferencersArchive *this,
          TMap<UObject_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,int,0>_>
          *param_1,TMultiMap<UObject_*,FProperty_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>_>
                   *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
  *pTVar5;
  UObject *pUVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  UObject *local_res20;
  ForAnyElementType local_d8;
  int local_d0;
  int iStack_cc;
  TBaseKeyIterator<1> local_c8;
  longlong *local_a8;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  uint uStack_8c;
  longlong local_88;
  TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
  *pTStack_80;
  TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
  *local_78;
  undefined2 local_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  bVar7 = 1 < *(int *)&param_1->field_0x48;
  if (!bVar7) {
    TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
                    *)param_1);
  }
  *(undefined4 *)&param_1->field_0x8 = 0;
  if (*(int *)&param_1->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)param_1,0,(int *)&param_1->field_0xc);
  }
  *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
  *(undefined4 *)&param_1->field_0x34 = 0;
  *(undefined4 *)&param_1->field_0x28 = 0;
  if ((*(int *)&param_1->field_0x2c < 0) || (0x80 < *(int *)&param_1->field_0x2c)) {
    *(undefined4 *)&param_1->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10,0);
  }
  iVar8 = 1;
  if (bVar7) {
    *(undefined4 *)&param_1->field_0x48 = 1;
    TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>::
    Rehash((TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
            *)param_1);
  }
  AppendReferenceCounts(this,param_1);
  if (0 < *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34) {
    bVar7 = 1 < *(int *)&param_2->field_0x48;
    if (!bVar7) {
      TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
                        *)param_2);
    }
    *(undefined4 *)&param_2->field_0x8 = 0;
    if (*(int *)&param_2->field_0xc != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < 0) || (0x80 < *(int *)&param_2->field_0x2c)) {
      *(undefined4 *)&param_2->field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    if (bVar7) {
      *(undefined4 *)&param_2->field_0x48 = 1;
      TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
                *)param_2);
    }
    TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>::
    TIterator::TIterator
              ((TIterator *)local_68,
               (TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
                *)param_1);
    local_70 = 0;
    stack0xffffffffffffff68 = local_68._16_16_;
    local_a8 = (longlong *)local_68._0_8_;
    auStack_a0._0_8_ = local_68._8_8_;
    local_88 = local_48;
    pTStack_80 = pTStack_40;
    uVar10 = local_68._24_8_ >> 0x20;
    if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
      local_78 = (TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
                  *)param_1;
      do {
        local_res20 = *(UObject **)(*local_a8 + (longlong)(int)uVar10 * 0x18);
        local_d8.Data = (FScriptContainerElement *)0x0;
        local_d0 = 0;
        iStack_cc = 0;
        TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                  (&local_c8,
                   (TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
                    *)&this->ReferenceMap,local_res20);
        pUVar6 = local_c8.Key;
        pTVar5 = local_c8.Set;
        iVar3 = local_c8.NextIndex;
joined_r0x000141f368e4:
        local_c8.NextIndex = iVar3;
        if (local_c8.Index != -1) {
          pFVar2 = (FScriptContainerElement *)
                   (*(longlong *)&pTVar5->Elements + ((longlong)local_c8.Index * 3 + 1) * 8);
          if (((local_d8.Data <= pFVar2) && (pFVar2 < local_d8.Data + (longlong)iStack_cc * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            iVar8 = (*pcVar4)();
            return iVar8;
          }
          if (local_d0 == iStack_cc) {
            local_d0 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_d8,&iStack_cc);
          }
          iVar1 = local_d0 + 1;
          *(undefined8 *)(local_d8.Data + (longlong)local_d0 * 8) = *(undefined8 *)pFVar2;
          local_c8.Index = iVar3;
          local_d0 = iVar1;
          if (iVar3 == -1) goto LAB_141f369ea;
          lVar12 = *(longlong *)&pTVar5->Elements;
          do {
            iVar3 = *(int *)(lVar12 + 0x10 + (longlong)local_c8.Index * 0x18);
            if (*(UObject **)(lVar12 + (longlong)local_c8.Index * 0x18) == pUVar6) break;
            local_c8.Index = iVar3;
          } while (iVar3 != -1);
          goto joined_r0x000141f368e4;
        }
LAB_141f369ea:
        uVar11 = local_d0 - 1;
        if (-1 < (int)uVar11) {
          lVar12 = (longlong)(int)uVar11;
          do {
            uVar9 = 0;
            if ((int)uVar11 < local_d0) {
              uVar9 = ~uVar11 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              iVar8 = (*pcVar4)();
              return iVar8;
            }
            TMapBase<UObject_*,FProperty_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>_>
            ::Emplace<UObject_*_const_&,FProperty_*_const_&>
                      ((TMapBase<UObject_*,FProperty_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>_>
                        *)param_2,&local_res20,(FProperty **)(local_d8.Data + lVar12 * 8));
            lVar12 = lVar12 + -1;
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
        }
        if (local_d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data);
        }
        uStack_90 = uStack_90 & ~auStack_a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a0);
        uVar10 = (ulonglong)uStack_8c;
      } while ((int)uStack_8c < *(int *)(auStack_a0._8_8_ + 0x18));
      if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
        uVar11 = *(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34;
        if (3 < uVar11) {
          uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar8 = 1 << ((byte)lVar12 & 0x1f);
        }
        if (((0 < (int)uVar11) && (local_78->HashSize < iVar8)) || (iVar8 < local_78->HashSize)) {
          local_78->HashSize = iVar8;
          TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
          ::Rehash(local_78);
        }
      }
    }
  }
  return *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
}

// ResetPotentialReferencer @ 141f43cb0

void __thiscall
FFindReferencersArchive::ResetPotentialReferencer(FFindReferencersArchive *this,UObject *param_1)

{
  int *piVar1;
  uint uVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FReferenceCollector local_28;
  FFindReferencersArchive *local_18;
  
  if (this->PotentialReferencer != (UObject *)0x0) {
    uVar2 = (this->TargetObjects).TargetObjects.ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &(this->TargetObjects).RefCounts.ArrayMax;
    (this->TargetObjects).RefCounts.ArrayNum = 0;
    if (*piVar1 != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar2,&(this->TargetObjects).RefCounts.AllocatorInstance,0,piVar1);
    }
  }
  this->PotentialReferencer = param_1;
  if (param_1 != (UObject *)0x0) {
    (**(code **)(*(longlong *)param_1 + 200))(param_1,this);
    pUVar3 = this->PotentialReferencer;
    local_28.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
    local_28._padding_ =
         (longlong)
         &`FFindReferencersArchive::ResetPotentialReferencer'::`8'::FArchiveProxyCollector::
          _vftable_;
    lVar4 = *(longlong *)&pUVar3->field_0x10;
    local_18 = this;
    if (*(longlong **)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        (longlong *)(lVar4 + 0x30)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("This->IsA(this)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xf38,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(longlong *)(lVar4 + 0xc0) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CppClassStaticFunctions.GetAddReferencedObjects() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xf3a,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(lVar4 + 0xc0))(pUVar3,&local_28);
    FReferenceCollector::~FReferenceCollector(&local_28);
  }
  return;
}

