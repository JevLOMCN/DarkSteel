// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// ~FUObjectAnnotationSparseNoSync<FObjectMark> @ 142295200

void __thiscall
FUObjectAnnotationSparseNoSync<FObjectMark>::~FUObjectAnnotationSparseNoSync<FObjectMark>
          (FUObjectAnnotationSparseNoSync<FObjectMark> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__FUObjectAnnotationSparseNoSync_UFObjectMark____6B_;
  RemoveAllAnnotations(this);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FObjectMark>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FObjectMark>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FObjectMark>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnnotationMap);
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// GetAllocatedSize @ 14229ce70

ulong64 __thiscall
FUObjectAnnotationSparseNoSync<FObjectMark>::GetAllocatedSize
          (FUObjectAnnotationSparseNoSync<FObjectMark> *this)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)&(this->AnnotationMap).field_0x48;
  if (uVar1 < 2) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)(int)uVar1 << 2;
  }
  return lVar2 + (ulonglong)((*(int *)&(this->AnnotationMap).field_0x2c + 0x1fU >> 5) << 2) +
         (longlong)*(int *)&(this->AnnotationMap).field_0xc * 0x18;
}

// GetAnnotation @ 14229d000

FObjectMark __thiscall
FUObjectAnnotationSparseNoSync<FObjectMark>::GetAnnotation
          (FUObjectAnnotationSparseNoSync<FObjectMark> *this,UObjectBase *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EObjectMark EVar4;
  FObjectMark FVar5;
  int iVar6;
  uint uVar7;
  EObjectMark *pEVar8;
  undefined1 *puVar9;
  UObjectBase *in_R8;
  
  if (in_R8 == (UObjectBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectMarks.cpp"
                       ,0x77,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (FObjectMark)EVar4;
    }
  }
  FVar5.Marks = (EObjectMark)param_1;
  if (in_R8 == this->AnnotationCacheKey) {
    *(EObjectMark *)&param_1->_padding_ = (this->AnnotationCacheValue).Marks;
    return (FObjectMark)FVar5.Marks;
  }
  this->AnnotationCacheKey = in_R8;
  uVar7 = ((uint)((ulonglong)in_R8 >> 0x14) & 0xffff ^ (uint)((ulonglong)in_R8 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->AnnotationMap).field_0x8 != *(int *)&(this->AnnotationMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->AnnotationMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->AnnotationMap).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->AnnotationMap).field_0x48 - 1U &
                              (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->AnnotationMap + (longlong)iVar6 * 0x18;
        if (*(UObjectBase **)(*(longlong *)&this->AnnotationMap + (longlong)iVar6 * 0x18) == in_R8)
        {
          pEVar8 = (EObjectMark *)(lVar1 + 8);
          if (lVar1 == 0) {
            pEVar8 = (EObjectMark *)0x0;
          }
          if (pEVar8 != (EObjectMark *)0x0) {
            EVar4 = *pEVar8;
            (this->AnnotationCacheValue).Marks = EVar4;
            *(EObjectMark *)&param_1->_padding_ = EVar4;
            return (FObjectMark)FVar5.Marks;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  (this->AnnotationCacheValue).Marks = OBJECTMARK_NOMARKS;
  *(undefined4 *)&param_1->_padding_ = 0;
  return (FObjectMark)FVar5.Marks;
}

// NotifyUObjectDeleted @ 1422a3990

void __thiscall
FUObjectAnnotationSparseNoSync<FObjectMark>::NotifyUObjectDeleted
          (FUObjectAnnotationSparseNoSync<FObjectMark> *this,UObjectBase *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *local_res8;
  
  if (param_1 == (UObjectBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectMarks.cpp"
                       ,0x5d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->AnnotationCacheKey = param_1;
  (this->AnnotationCacheValue).Marks = OBJECTMARK_NOMARKS;
  iVar1 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x34;
  if (iVar1 != iVar2) {
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    local_res8 = param_1;
    TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
    ::RemoveImpl<UObjectBase_const_*>
              ((TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
                *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&local_res8);
    if ((0 < iVar1 - iVar2) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
    }
  }
  return;
}

// OnUObjectArrayShutdown @ 1422a3dd0

void __thiscall
FUObjectAnnotationSparseNoSync<FObjectMark>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparseNoSync<FObjectMark> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// RemoveAllAnnotations @ 1422a58c0

void __thiscall
FUObjectAnnotationSparseNoSync<FObjectMark>::RemoveAllAnnotations
          (FUObjectAnnotationSparseNoSync<FObjectMark> *this)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  this->AnnotationCacheKey = (UObjectBase *)0x0;
  (this->AnnotationCacheValue).Marks = OBJECTMARK_NOMARKS;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  bVar5 = 1 < *(int *)&(this->AnnotationMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
                      *)&this->AnnotationMap);
  }
  puVar1 = &(this->AnnotationMap).field_0xc;
  *(undefined4 *)&(this->AnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->AnnotationMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnnotationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnnotationMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->AnnotationMap).field_0x2c;
  *(undefined4 *)&(this->AnnotationMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AnnotationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnnotationMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->AnnotationMap).field_0x48 = 1;
    TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  if (0 < iVar2 - iVar3) {
    FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  }
  return;
}

// RemoveAnnotation @ 1422a5b70

void __thiscall
FUObjectAnnotationSparseNoSync<FObjectMark>::RemoveAnnotation
          (FUObjectAnnotationSparseNoSync<FObjectMark> *this,UObjectBase *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *local_res8;
  
  if (param_1 == (UObjectBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectMarks.cpp"
                       ,0x5d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->AnnotationCacheKey = param_1;
  (this->AnnotationCacheValue).Marks = OBJECTMARK_NOMARKS;
  iVar1 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x34;
  if (iVar1 != iVar2) {
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    local_res8 = param_1;
    TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
    ::RemoveImpl<UObjectBase_const_*>
              ((TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
                *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&local_res8);
    if ((0 < iVar1 - iVar2) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
    }
  }
  return;
}

