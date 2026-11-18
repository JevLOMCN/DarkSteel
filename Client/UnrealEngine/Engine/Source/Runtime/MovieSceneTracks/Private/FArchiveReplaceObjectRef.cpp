// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// FArchiveReplaceObjectRef<UObject> @ 14660c3b0

FArchiveReplaceObjectRef<UObject> * __thiscall
FArchiveReplaceObjectRef<UObject>::FArchiveReplaceObjectRef<UObject>
          (FArchiveReplaceObjectRef<UObject> *this,UObject *param_1,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_2,EArchiveReplaceObjectFlags param_3)

{
  byte *pbVar1;
  longlong *this_00;
  longlong *plVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchiveReplaceObjectRef<UObject> *pFVar8;
  byte bVar9;
  uint uVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  longlong lVar13;
  UObject *local_res20;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this_00 = &this->_padding_;
  this->_padding_ = 0;
  plVar12 = &this->_padding_;
  *this_00 = 0;
  plVar2 = &this->_padding_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *plVar2 = 0;
  this->_padding_ = 0;
  *plVar12 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 3;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  this->_padding_ = (longlong)&___7__FArchiveReplaceObjectRef_VUObject____6B_;
  *(byte *)&this->_padding_ = (byte)(param_3 >> 5) & 1;
  this->ReplacementMap = param_2;
  this->_padding_ = (longlong)param_1;
  *(byte *)((longlong)&this->_padding_ + 1) = (byte)param_3 & 1;
  *(undefined4 *)&this->_padding_ = 0;
  bVar9 = (byte)(param_3 >> 1) & 2 | ((byte)param_3 & 2) << 3 |
          *(byte *)((longlong)&this->_padding_ + 2) & 0xed;
  *(byte *)((longlong)&this->_padding_ + 2) = (~((char)(param_3 >> 4) << 5) ^ bVar9) & 0x20 ^ bVar9;
  if ((param_3 & DelayStart) == None) {
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      TSet<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)plVar12);
      TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)plVar12,0,(int)this->_padding_);
      iVar6 = *(int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar6 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)plVar12,0,(int *)((longlong)&this->_padding_ + 4));
      }
      *(undefined4 *)&this->_padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
      *(undefined4 *)&this->_padding_ = 0;
    }
    uVar3 = this->_padding_;
    if (uVar3 != 0) {
      uVar10 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar12 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar12 = &this->_padding_;
        }
        iVar6 = *(int *)((longlong)plVar12 +
                        (ulonglong)((int)this->_padding_ - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
        if (iVar6 != -1) {
          do {
            puVar11 = (ulonglong *)((longlong)iVar6 * 0x10 + *this_00);
            if (*puVar11 == uVar3) {
              if (puVar11 != (ulonglong *)0x0) {
                return this;
              }
              break;
            }
            iVar6 = (int)puVar11[1];
          } while (iVar6 != -1);
        }
      }
      if ((0 < *(int *)&this->ReplacementMap->field_0x8 - *(int *)&this->ReplacementMap->field_0x34)
         || (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
        TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
        Emplace<UObject_*_const_&>
                  ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)this_00,
                   &local_res20,(bool *)&this->_padding_);
        this->_padding_ = this->_padding_;
        (**(code **)(this->_padding_ + 0x268))(this);
        uVar10 = 0;
        if (0 < (int)this->_padding_) {
          lVar13 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar10 < (int)this->_padding_) {
              uVar7 = ~uVar10 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar8 = (FArchiveReplaceObjectRef<UObject> *)(*pcVar4)();
              return pFVar8;
            }
            this->_padding_ = *(longlong *)(*plVar2 + lVar13);
            (**(code **)(this->_padding_ + 0x268))(this);
            uVar10 = uVar10 + 1;
            lVar13 = lVar13 + 8;
          } while ((int)uVar10 < (int)this->_padding_);
        }
        iVar6 = *(int *)((longlong)&this->_padding_ + 4);
        *(undefined4 *)&this->_padding_ = 0;
        if (iVar6 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,(ForAnyElementType *)plVar2,0,(int *)((longlong)&this->_padding_ + 4));
        }
      }
    }
  }
  return this;
}

// operator<< @ 1466226f0

FArchive * __thiscall
FArchiveReplaceObjectRef<UObject>::operator<<
          (FArchiveReplaceObjectRef<UObject> *this,UObject **param_1)

{
  int *piVar1;
  longlong *plVar2;
  UObjectBaseUtility *this_00;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject **ppUVar7;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_> *this_01;
  FArchive *pFVar8;
  uint uVar9;
  UObject *local_res10;
  FProperty *local_res18 [2];
  
  this_00 = (UObjectBaseUtility *)*param_1;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    ppUVar7 = TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
              ::Find((TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
                      *)this->ReplacementMap,(UObject *)this_00);
    if (ppUVar7 != (UObject **)0x0) {
      *param_1 = *ppUVar7;
      if ((char)this->_padding_ != '\0') {
        uVar3 = this->_padding_;
        uVar9 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        this_01 = TMapBase<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UObject_*_const_&>
                            ((TMapBase<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar9 >> 0x10 ^ uVar9,(UObject **)&this->_padding_)
        ;
        local_res18[0] = (FProperty *)this->_padding_;
        TArray<FProperty_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FProperty_*>
                  (this_01,local_res18);
      }
      *(int *)&this->_padding_ = (int)this->_padding_ + 1;
      return (FArchive *)this;
    }
    if ((this_00 == (UObjectBaseUtility *)this->_padding_) ||
       (bVar5 = UObjectBaseUtility::IsIn(this_00,(UObject *)this->_padding_), bVar5)) {
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
                ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)
                 &this->_padding_,&local_res10,(bool *)param_1);
      plVar2 = &this->_padding_;
      if (((UObject **)*plVar2 <= param_1) &&
         ((param_1 < (UObject **)*plVar2 + *(int *)((longlong)&this->_padding_ + 4) &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
      iVar6 = (int)this->_padding_;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)plVar2,piVar1);
      }
      *(int *)&this->_padding_ = iVar6 + 1;
      *(UObject **)(*plVar2 + (longlong)iVar6 * 8) = *param_1;
    }
    else if ((*(char *)((longlong)&this->_padding_ + 1) != '\0') &&
            ((*(uint *)&(*param_1)->field_0x8 & 1) == 0)) {
      *param_1 = (UObject *)0x0;
      return (FArchive *)this;
    }
  }
  return (FArchive *)this;
}

// operator<< @ 1466228b0

FArchive * __thiscall
FArchiveReplaceObjectRef<UObject>::operator<<
          (FArchiveReplaceObjectRef<UObject> *this,FObjectPtr *param_1)

{
  FObjectPtr_u_0 FVar1;
  FObjectPtr_u_0 FStackX_8;
  
  FStackX_8.Handle = (UObject *)0xfffffefbf1234567;
  if ((this->_padding_ & 1) == 0) {
    FStackX_8 = (FObjectPtr_u_0)(param_1->field0_0x0).Handle;
  }
  (**(code **)(this->_padding_ + 0x168))(this,&FStackX_8);
  FVar1 = FStackX_8;
  if ((((this->_padding_ & 1) != 0) || ((this->_padding_ & 0x2000000) != 0)) &&
     (FStackX_8.Handle != (UObject *)0xfffffefbf1234567)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FStackX_8.Handle != (UObject *)0x0)
       ) {
      UE::GC::MarkAsReachable(FStackX_8.Handle);
    }
    (param_1->field0_0x0).Handle = (UObject *)FVar1;
  }
  return (FArchive *)this;
}

// operator<< @ 1466228c0

FArchive * __thiscall
FArchiveReplaceObjectRef<UObject>::operator<<
          (FArchiveReplaceObjectRef<UObject> *this,FSoftObjectPath *param_1)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  UObject *local_res8;
  FSoftObjectPath local_28;
  
  local_res8 = FSoftObjectPath::ResolveObject(param_1);
  if (local_res8 == (UObject *)0x0) {
    FArchiveUObject::SerializeSoftObjectPath((FArchive *)this,param_1);
    return (FArchive *)this;
  }
  (**(code **)(this->_padding_ + 0x168))(this,&local_res8);
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,local_res8);
  (param_1->AssetPath).PackageName = local_28.AssetPath.PackageName;
  (param_1->AssetPath).AssetName = local_28.AssetPath.AssetName;
  pFVar2 = &param_1->SubPathString;
  if (pFVar2 != &local_28.SubPathString) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
    (param_1->SubPathString).Data.ArrayNum = local_28.SubPathString.Data.ArrayNum;
    (param_1->SubPathString).Data.ArrayMax = local_28.SubPathString.Data.ArrayMax;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

// SerializeSearchObject @ 1466f81c0

void __thiscall
FArchiveReplaceObjectRef<UObject>::SerializeSearchObject(FArchiveReplaceObjectRef<UObject> *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  longlong lVar9;
  UObject *local_res8;
  
  TSet<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  uVar1 = this->_padding_;
  if (uVar1 != 0) {
    uVar6 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar8 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar8 = &this->_padding_;
      }
      iVar4 = *(int *)((longlong)plVar8 +
                      (ulonglong)((int)this->_padding_ - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        do {
          puVar7 = (ulonglong *)((longlong)iVar4 * 0x10 + this->_padding_);
          if (*puVar7 == uVar1) {
            if (puVar7 != (ulonglong *)0x0) {
              return;
            }
            break;
          }
          iVar4 = (int)puVar7[1];
        } while (iVar4 != -1);
      }
    }
    if ((0 < *(int *)&this->ReplacementMap->field_0x8 - *(int *)&this->ReplacementMap->field_0x34)
       || (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
                ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)
                 &this->_padding_,&local_res8,(bool *)&this->_padding_);
      this->_padding_ = this->_padding_;
      (**(code **)(this->_padding_ + 0x268))(this);
      uVar6 = 0;
      if (0 < (int)this->_padding_) {
        lVar9 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar6 < (int)this->_padding_) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this->_padding_ = *(longlong *)(this->_padding_ + lVar9);
          (**(code **)(this->_padding_ + 0x268))(this);
          uVar6 = uVar6 + 1;
          lVar9 = lVar9 + 8;
        } while ((int)uVar6 < (int)this->_padding_);
      }
      iVar4 = *(int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar4 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)&this->_padding_,0,
                   (int *)((longlong)&this->_padding_ + 4));
      }
    }
  }
  return;
}

