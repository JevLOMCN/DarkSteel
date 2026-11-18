// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// operator<< @ 148b1f000

FArchive * __thiscall
FObjectReaderWithReplacement::operator<<(FObjectReaderWithReplacement *this,UObject **param_1)

{
  int iVar1;
  TTuple<UObject_*,UObject_*> *pTVar2;
  UClass *pUVar3;
  UClass **ppUVar4;
  UClass *pUVar5;
  undefined8 *puVar6;
  
  FObjectReader::operator<<((FObjectReader *)this,param_1);
  pUVar5 = (UClass *)*param_1;
  if (pUVar5 == (UClass *)0x0) {
    return (FArchive *)this;
  }
  if ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
       *)this->ReferenceReplacementMap !=
      (TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar2 = TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                     *)this->ReferenceReplacementMap,(UObject *)pUVar5);
    puVar6 = (undefined8 *)&pTVar2->field_0x8;
    if (pTVar2 == (TTuple<UObject_*,UObject_*> *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    if (puVar6 != (undefined8 *)0x0) {
      pUVar5 = (UClass *)*puVar6;
      goto LAB_148b1f091;
    }
  }
  if (this->ClassReferenceReplacementMap ==
      (TMap<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
       *)0x0) {
    return (FArchive *)this;
  }
  pUVar3 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if (*(int *)(pUVar5->_padding_ + 0x38) < iVar1) {
    return (FArchive *)this;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_) {
    return (FArchive *)this;
  }
  ppUVar4 = TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
            ::Find((TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
                    *)this->ClassReferenceReplacementMap,pUVar5);
  if (ppUVar4 == (UClass **)0x0) {
    return (FArchive *)this;
  }
  pUVar5 = *ppUVar4;
LAB_148b1f091:
  *param_1 = (UObject *)pUVar5;
  return (FArchive *)this;
}

// operator<< @ 148b1f0b0

FArchive * __thiscall
FObjectReaderWithReplacement::operator<<(FObjectReaderWithReplacement *this,FLazyObjectPtr *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  FUObjectItem *pFVar5;
  TTuple<UObject_*,UObject_*> *pTVar6;
  UClass **ppUVar7;
  undefined8 *puVar8;
  UClass *local_res8;
  
  FObjectReader::operator<<((FObjectReader *)this,param_1);
  pUVar3 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if ((pUVar3 == (UClass *)0x0) &&
     (((*(int *)&param_1->field_0x14 != 0 || *(int *)&param_1->field_0x10 != 0) ||
      *(int *)&param_1->field_0xc != 0) || *(int *)&param_1->field_0x8 != 0)) {
    pUVar4 = (UClass *)FUniqueObjectGuid::ResolveObject((FUniqueObjectGuid *)&param_1->field_0x8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    bVar2 = (*IsInAsyncLoadingThread)();
    if (((bVar2) && (pUVar4 != (UClass *)0x0)) &&
       (pFVar5 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4)),
       ((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_148b1f171:
      if (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_148b1f17f;
      bVar2 = true;
    }
    else {
      local_res8 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
      if (pUVar4 != (UClass *)0x0) goto LAB_148b1f171;
LAB_148b1f17f:
      bVar2 = false;
    }
    pUVar3 = (UClass *)0x0;
    if (bVar2) {
      pUVar3 = pUVar4;
    }
  }
  if (pUVar3 == (UClass *)0x0) {
    return (FArchive *)this;
  }
  if ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
       *)this->ReferenceReplacementMap !=
      (TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar6 = TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                     *)this->ReferenceReplacementMap,(UObject *)pUVar3);
    puVar8 = (undefined8 *)&pTVar6->field_0x8;
    if (pTVar6 == (TTuple<UObject_*,UObject_*> *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    if (puVar8 != (undefined8 *)0x0) {
      pUVar3 = (UClass *)*puVar8;
      goto LAB_148b1f1ff;
    }
  }
  if (this->ClassReferenceReplacementMap ==
      (TMap<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
       *)0x0) {
    return (FArchive *)this;
  }
  pUVar4 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(pUVar3->_padding_ + 0x38) < iVar1) {
    return (FArchive *)this;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return (FArchive *)this;
  }
  ppUVar7 = TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
            ::Find((TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
                    *)this->ClassReferenceReplacementMap,pUVar3);
  if (ppUVar7 == (UClass **)0x0) {
    return (FArchive *)this;
  }
  pUVar3 = *ppUVar7;
LAB_148b1f1ff:
  bVar2 = UE::GC::GIsIncrementalReachabilityPending == false;
  if (!bVar2) {
    if (pUVar3 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    bVar2 = UE::GC::GIsIncrementalReachabilityPending == false;
  }
  local_res8 = pUVar3;
  if ((!bVar2) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  TPersistentObjectPtr<FUniqueObjectGuid>::operator=
            ((TPersistentObjectPtr<FUniqueObjectGuid> *)param_1,(FObjectPtr)&local_res8);
  return (FArchive *)this;
}

// operator<< @ 148b1f260

FArchive * __thiscall
FObjectReaderWithReplacement::operator<<(FObjectReaderWithReplacement *this,FObjectPtr *param_1)

{
  int iVar1;
  TTuple<UObject_*,UObject_*> *pTVar2;
  UClass *pUVar3;
  UClass **ppUVar4;
  undefined8 *puVar5;
  UClass *pUVar6;
  
  FObjectReader::operator<<((FObjectReader *)this,param_1);
  pUVar6 = (UClass *)(param_1->field0_0x0).Handle;
  if (pUVar6 == (UClass *)0x0) {
    return (FArchive *)this;
  }
  if ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
       *)this->ReferenceReplacementMap !=
      (TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar2 = TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                     *)this->ReferenceReplacementMap,(UObject *)pUVar6);
    puVar5 = (undefined8 *)&pTVar2->field_0x8;
    if (pTVar2 == (TTuple<UObject_*,UObject_*> *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      pUVar6 = (UClass *)*puVar5;
      goto LAB_148b1f302;
    }
  }
  if (this->ClassReferenceReplacementMap ==
      (TMap<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
       *)0x0) {
    return (FArchive *)this;
  }
  pUVar3 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if (*(int *)(pUVar6->_padding_ + 0x38) < iVar1) {
    return (FArchive *)this;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_) {
    return (FArchive *)this;
  }
  ppUVar4 = TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
            ::Find((TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
                    *)this->ClassReferenceReplacementMap,pUVar6);
  if (ppUVar4 == (UClass **)0x0) {
    return (FArchive *)this;
  }
  pUVar6 = *ppUVar4;
LAB_148b1f302:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (param_1->field0_0x0).Handle = (UObject *)pUVar6;
  return (FArchive *)this;
}

// operator<< @ 148b1f330

FArchive * __thiscall
FObjectReaderWithReplacement::operator<<
          (FObjectReaderWithReplacement *this,FSoftObjectPath *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TTuple<UObject_*,UObject_*> *pTVar3;
  UClass *pUVar4;
  UClass **ppUVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  FUtf8String *pFVar9;
  FSoftObjectPath local_48;
  FSoftObjectPath local_28;
  
  FObjectReader::operator<<((FObjectReader *)this,param_1);
  pUVar2 = (UClass *)FSoftObjectPath::ResolveObject(param_1);
  if (pUVar2 == (UClass *)0x0) {
    return (FArchive *)this;
  }
  pFVar7 = (FScriptContainerElement *)0x0;
  if ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
       *)this->ReferenceReplacementMap !=
      (TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar3 = TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                     *)this->ReferenceReplacementMap,(UObject *)pUVar2);
    pFVar6 = (FScriptContainerElement *)&pTVar3->field_0x8;
    if (pTVar3 == (TTuple<UObject_*,UObject_*> *)0x0) {
      pFVar6 = pFVar7;
    }
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_48.AssetPath.PackageName.Number = 0;
      local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_48.AssetPath.AssetName.Number = 0;
      local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.SubPathString.Data.ArrayNum = 0;
      local_48.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_48,*(UObject **)pFVar6);
      (param_1->AssetPath).PackageName = local_48.AssetPath.PackageName;
      (param_1->AssetPath).AssetName = local_48.AssetPath.AssetName;
      pFVar9 = &param_1->SubPathString;
      FVar8.Data = local_48.SubPathString.Data.AllocatorInstance.Data;
      if (pFVar9 != &local_48.SubPathString) {
        pFVar6 = (pFVar9->Data).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        (pFVar9->Data).AllocatorInstance.Data = local_48.SubPathString.Data.AllocatorInstance.Data;
        (param_1->SubPathString).Data.ArrayNum = local_48.SubPathString.Data.ArrayNum;
        (param_1->SubPathString).Data.ArrayMax = local_48.SubPathString.Data.ArrayMax;
        local_48.SubPathString.Data.ArrayNum = 0;
        local_48.SubPathString.Data.ArrayMax = 0;
        local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar8.Data = pFVar7;
      }
      goto LAB_148b1f49d;
    }
  }
  if (this->ClassReferenceReplacementMap ==
      (TMap<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
       *)0x0) {
    return (FArchive *)this;
  }
  pUVar4 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(pUVar2->_padding_ + 0x38) < iVar1) {
    return (FArchive *)this;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return (FArchive *)this;
  }
  ppUVar5 = TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
            ::Find((TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
                    *)this->ClassReferenceReplacementMap,pUVar2);
  if (ppUVar5 == (UClass **)0x0) {
    return (FArchive *)this;
  }
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,(UObject *)*ppUVar5);
  (param_1->AssetPath).PackageName = local_28.AssetPath.PackageName;
  (param_1->AssetPath).AssetName = local_28.AssetPath.AssetName;
  pFVar9 = &param_1->SubPathString;
  FVar8.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar9 != &local_28.SubPathString) {
    pFVar6 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar9->Data).AllocatorInstance.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
    (param_1->SubPathString).Data.ArrayNum = local_28.SubPathString.Data.ArrayNum;
    (param_1->SubPathString).Data.ArrayMax = local_28.SubPathString.Data.ArrayMax;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar8.Data = pFVar7;
  }
LAB_148b1f49d:
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return (FArchive *)this;
}

// operator<< @ 148b1f4d0

FArchive * __thiscall
FObjectReaderWithReplacement::operator<<(FObjectReaderWithReplacement *this,FSoftObjectPtr *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  FUObjectItem *pFVar5;
  TTuple<UObject_*,UObject_*> *pTVar6;
  UClass **ppUVar7;
  UClass *local_res8;
  
  FObjectReader::operator<<((FObjectReader *)this,param_1);
  pUVar3 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if ((pUVar3 == (UClass *)0x0) && (*(longlong *)&param_1->field_0x8 != 0)) {
    pUVar4 = (UClass *)FSoftObjectPath::ResolveObject((FSoftObjectPath *)&param_1->field_0x8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    bVar2 = (*IsInAsyncLoadingThread)();
    if (((bVar2) && (pUVar4 != (UClass *)0x0)) &&
       (pFVar5 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4)),
       ((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_148b1f58a:
      if (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_148b1f598;
      bVar2 = true;
    }
    else {
      local_res8 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
      if (pUVar4 != (UClass *)0x0) goto LAB_148b1f58a;
LAB_148b1f598:
      bVar2 = false;
    }
    pUVar3 = (UClass *)0x0;
    if (bVar2) {
      pUVar3 = pUVar4;
    }
  }
  if (pUVar3 == (UClass *)0x0) {
    return (FArchive *)this;
  }
  if ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
       *)this->ReferenceReplacementMap !=
      (TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar6 = TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                     *)this->ReferenceReplacementMap,(UObject *)pUVar3);
    pUVar4 = (UClass *)&pTVar6->field_0x8;
    if (pTVar6 == (TTuple<UObject_*,UObject_*> *)0x0) {
      pUVar4 = (UClass *)0x0;
    }
    if (pUVar4 != (UClass *)0x0) {
      local_res8 = (UClass *)pUVar4->_padding_;
      goto LAB_148b1f61d;
    }
  }
  if (this->ClassReferenceReplacementMap ==
      (TMap<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
       *)0x0) {
    return (FArchive *)this;
  }
  pUVar4 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(pUVar3->_padding_ + 0x38) < iVar1) {
    return (FArchive *)this;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return (FArchive *)this;
  }
  ppUVar7 = TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
            ::Find((TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
                    *)this->ClassReferenceReplacementMap,pUVar3);
  if (ppUVar7 == (UClass **)0x0) {
    return (FArchive *)this;
  }
  local_res8 = *ppUVar7;
LAB_148b1f61d:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FSoftObjectPtr::operator=(param_1,(FObjectPtr)&local_res8);
  return (FArchive *)this;
}

// operator<< @ 148b1f660

FArchive * __thiscall
FObjectReaderWithReplacement::operator<<(FObjectReaderWithReplacement *this,FWeakObjectPtr *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TTuple<UObject_*,UObject_*> *pTVar3;
  UClass *pUVar4;
  UClass **ppUVar5;
  undefined8 *puVar6;
  UClass *local_res8;
  
  FObjectReader::operator<<((FObjectReader *)this,param_1);
  pUVar2 = (UClass *)FWeakObjectPtr::Get(param_1);
  if (pUVar2 == (UClass *)0x0) {
    return (FArchive *)this;
  }
  if ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
       *)this->ReferenceReplacementMap !=
      (TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar3 = TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                     *)this->ReferenceReplacementMap,(UObject *)pUVar2);
    puVar6 = (undefined8 *)&pTVar3->field_0x8;
    if (pTVar3 == (TTuple<UObject_*,UObject_*> *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    if (puVar6 != (undefined8 *)0x0) {
      local_res8 = (UClass *)*puVar6;
      goto LAB_148b1f70a;
    }
  }
  if (this->ClassReferenceReplacementMap ==
      (TMap<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
       *)0x0) {
    return (FArchive *)this;
  }
  pUVar4 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(pUVar2->_padding_ + 0x38) < iVar1) {
    return (FArchive *)this;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return (FArchive *)this;
  }
  ppUVar5 = TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
            ::Find((TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
                    *)this->ClassReferenceReplacementMap,pUVar2);
  if (ppUVar5 == (UClass **)0x0) {
    return (FArchive *)this;
  }
  local_res8 = *ppUVar5;
LAB_148b1f70a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_res8);
  return (FArchive *)this;
}

