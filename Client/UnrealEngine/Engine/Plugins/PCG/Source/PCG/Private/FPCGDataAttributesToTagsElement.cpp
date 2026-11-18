// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// operator()<int> @ 149906b50

bool __thiscall
`FPCGDataAttributesToTagsElement::ExecuteInternal'::__l52::<lambda_2>::operator()<int>
          (void *this,int param_1)

{
  FPCGMetadataAttribute<int> *this_00;
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x121) != '\0') {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 0x10) + 0x10),(FString *)&stack0x00000008,
               *(bool **)((longlong)this + 0x18));
    return true;
  }
  this_00 = *(FPCGMetadataAttribute<int> **)this;
  iVar3 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,0);
  FPCGMetadataAttribute<int>::GetValue(this_00,iVar3);
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  lVar2 = *(longlong *)((longlong)this + 0x10);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
  *puVar1 = 0;
  local_78.Data.ArrayNum = *(int *)(puVar1 + 1);
  local_78.Data.ArrayMax = *(int *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  FStringFormatArg::FStringFormatArg(&local_48,&local_78);
  ::FString::PrintfImpl(&local_58,L"%d");
  FStringFormatArg::FStringFormatArg(&local_28,&local_58);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_88.AllocatorInstance.Data,&local_48,2)
  ;
  ::FString::FormatImpl(&local_68,L"{0}:{1}",&local_88);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar2 + 0x10),
             (FString *)&stack0x00000008,(bool *)&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FStringFormatArg *)local_88.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator()<float> @ 1499089f0

bool __thiscall
`FPCGDataAttributesToTagsElement::ExecuteInternal'::__l52::<lambda_2>::operator()<float>
          (void *this,float param_1)

{
  FPCGMetadataAttribute<float> *this_00;
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FStringFormatArg local_58;
  FStringFormatArg local_38;
  
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x121) != '\0') {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 0x10) + 0x10),(FString *)&stack0x00000008,
               *(bool **)((longlong)this + 0x18));
    return true;
  }
  this_00 = *(FPCGMetadataAttribute<float> **)this;
  iVar3 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,0);
  FPCGMetadataAttribute<float>::GetValue(this_00,iVar3);
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  lVar2 = *(longlong *)((longlong)this + 0x10);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
  *puVar1 = 0;
  local_88.Data.ArrayNum = *(int *)(puVar1 + 1);
  local_88.Data.ArrayMax = *(int *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  FStringFormatArg::FStringFormatArg(&local_58,&local_88);
  ::FString::PrintfImpl(&local_68,L"%f");
  FStringFormatArg::FStringFormatArg(&local_38,&local_68);
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_98.AllocatorInstance.Data,&local_58,2)
  ;
  ::FString::FormatImpl(&local_78,L"{0}:{1}",&local_98);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar2 + 0x10),
             (FString *)&stack0x00000008,(bool *)&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator()<double> @ 14990a780

bool __thiscall
`FPCGDataAttributesToTagsElement::ExecuteInternal'::__l52::<lambda_2>::operator()<double>
          (void *this,double param_1)

{
  FPCGMetadataAttribute<double> *this_00;
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FStringFormatArg local_58;
  FStringFormatArg local_38;
  
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x121) != '\0') {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 0x10) + 0x10),(FString *)&stack0x00000008,
               *(bool **)((longlong)this + 0x18));
    return true;
  }
  this_00 = *(FPCGMetadataAttribute<double> **)this;
  iVar3 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,0);
  FPCGMetadataAttribute<double>::GetValue(this_00,iVar3);
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  lVar2 = *(longlong *)((longlong)this + 0x10);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
  *puVar1 = 0;
  local_88.Data.ArrayNum = *(int *)(puVar1 + 1);
  local_88.Data.ArrayMax = *(int *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  FStringFormatArg::FStringFormatArg(&local_58,&local_88);
  ::FString::PrintfImpl(&local_68,L"%f");
  FStringFormatArg::FStringFormatArg(&local_38,&local_68);
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_98.AllocatorInstance.Data,&local_58,2)
  ;
  ::FString::FormatImpl(&local_78,L"{0}:{1}",&local_98);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar2 + 0x10),
             (FString *)&stack0x00000008,(bool *)&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator()<FName> @ 149919b90

bool __thiscall
`FPCGDataAttributesToTagsElement::ExecuteInternal'::__l52::<lambda_2>::operator()<FName>
          (void *this,FName param_1)

{
  FPCGMetadataAttribute<FName> *this_00;
  undefined8 *puVar1;
  longlong lVar2;
  FName local_res18;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x121) != '\0') {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 0x10) + 0x10),(FString *)&stack0x00000008,
               *(bool **)((longlong)this + 0x18));
    return true;
  }
  this_00 = *(FPCGMetadataAttribute<FName> **)this;
  FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,0);
  FPCGMetadataAttribute<FName>::GetValue(this_00,(int)&local_res18);
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  lVar2 = *(longlong *)((longlong)this + 0x10);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
  *puVar1 = 0;
  local_78.Data.ArrayNum = *(int *)(puVar1 + 1);
  local_78.Data.ArrayMax = *(int *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  FStringFormatArg::FStringFormatArg(&local_48,&local_78);
  ::FName::ToString(&local_res18,&local_58);
  FStringFormatArg::FStringFormatArg(&local_28,&local_58);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_88.AllocatorInstance.Data,&local_48,2)
  ;
  ::FString::FormatImpl(&local_68,L"{0}:{1}",&local_88);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar2 + 0x10),
             (FString *)&stack0x00000008,(bool *)&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FStringFormatArg *)local_88.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator()<FString> @ 14991b920

bool __thiscall
`FPCGDataAttributesToTagsElement::ExecuteInternal'::__l52::<lambda_2>::operator()<FString>
          (void *this,FString *param_1)

{
  FPCGMetadataAttribute<FString> *this_00;
  undefined8 *puVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType _Src;
  int iVar4;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FStringFormatArg local_58;
  FStringFormatArg local_38;
  
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x121) == '\0') {
    this_00 = *(FPCGMetadataAttribute<FString> **)this;
    iVar4 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,0);
    FPCGMetadataAttribute<FString>::GetValue(this_00,&local_78,iVar4);
    puVar1 = *(undefined8 **)((longlong)this + 0x18);
    lVar2 = *(longlong *)((longlong)this + 0x10);
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
    *puVar1 = 0;
    local_88.Data.ArrayNum = *(int *)(puVar1 + 1);
    local_88.Data.ArrayMax = *(int *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
    FStringFormatArg::FStringFormatArg(&local_58,&local_88);
    _Src.Data = local_78.Data.AllocatorInstance.Data;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_78.Data.ArrayNum == 0) {
      local_98.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_98,local_78.Data.ArrayNum,
                 &local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_78.Data.ArrayNum * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_38,&local_98);
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_a8.AllocatorInstance,2,&local_a8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_a8.AllocatorInstance.Data,&local_58,2);
    ::FString::FormatImpl(&local_68,L"{0}:{1}",&local_a8);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar2 + 0x10),
               (FString *)&stack0x00000008,(bool *)&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
    if ((FStringFormatArg *)local_a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  else {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 0x10) + 0x10),(FString *)&stack0x00000008,
               *(bool **)((longlong)this + 0x18));
  }
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return true;
}

// operator()<__int64> @ 14991d860

bool __thiscall
`FPCGDataAttributesToTagsElement::ExecuteInternal'::__l52::<lambda_2>::operator()<__int64>
          (void *this,long64 param_1)

{
  FPCGMetadataAttribute<__int64> *this_00;
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x121) != '\0') {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 0x10) + 0x10),(FString *)&stack0x00000008,
               *(bool **)((longlong)this + 0x18));
    return true;
  }
  this_00 = *(FPCGMetadataAttribute<__int64> **)this;
  iVar3 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,0);
  FPCGMetadataAttribute<__int64>::GetValue(this_00,iVar3);
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  lVar2 = *(longlong *)((longlong)this + 0x10);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
  *puVar1 = 0;
  local_78.Data.ArrayNum = *(int *)(puVar1 + 1);
  local_78.Data.ArrayMax = *(int *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  FStringFormatArg::FStringFormatArg(&local_48,&local_78);
  ::FString::PrintfImpl(&local_58,L"%lld");
  FStringFormatArg::FStringFormatArg(&local_28,&local_58);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_88.AllocatorInstance.Data,&local_48,2)
  ;
  ::FString::FormatImpl(&local_68,L"{0}:{1}",&local_88);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar2 + 0x10),
             (FString *)&stack0x00000008,(bool *)&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FStringFormatArg *)local_88.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator()<bool> @ 14991f630

bool __thiscall
`FPCGDataAttributesToTagsElement::ExecuteInternal'::__l52::<lambda_2>::operator()<bool>
          (void *this,bool param_1)

{
  FPCGMetadataAttribute<bool> *this_00;
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x121) != '\0') {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 0x10) + 0x10),(FString *)&stack0x00000008,
               *(bool **)((longlong)this + 0x18));
    return true;
  }
  this_00 = *(FPCGMetadataAttribute<bool> **)this;
  iVar4 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,0);
  bVar3 = FPCGMetadataAttribute<bool>::GetValue(this_00,iVar4);
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  lVar2 = *(longlong *)((longlong)this + 0x10);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
  *puVar1 = 0;
  local_78.Data.ArrayNum = *(int *)(puVar1 + 1);
  local_78.Data.ArrayMax = *(int *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  FStringFormatArg::FStringFormatArg(&local_48,&local_78);
  pwVar5 = L"true";
  if (!bVar3) {
    pwVar5 = L"false";
  }
  ::FString::FString(&local_58,pwVar5);
  FStringFormatArg::FStringFormatArg(&local_28,&local_58);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_88.AllocatorInstance.Data,&local_48,2)
  ;
  ::FString::FormatImpl(&local_68,L"{0}:{1}",&local_88);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar2 + 0x10),
             (FString *)&stack0x00000008,(bool *)&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FStringFormatArg *)local_88.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteInternal @ 1499e3150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGDataAttributesToTagsElement::ExecuteInternal
          (FPCGDataAttributesToTagsElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  ITextData *pIVar2;
  code *pcVar3;
  FPCGTaggedData *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  TObjectPtr<UPCGSettings>_u_0 TVar10;
  longlong lVar11;
  UPCGMetadata *pUVar12;
  FPCGMetadataDomain *this_01;
  UPCGData *pUVar13;
  FPCGMetadataAttributeBase *pFVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  FPCGAttributePropertyOutputSelector *this_02;
  FName *pFVar18;
  FName FVar19;
  FString *pFVar20;
  ulonglong uVar21;
  ForAnyElementType FVar22;
  FPCGDataCollection *pFVar23;
  FPCGTaggedData *pFVar24;
  ForAnyElementType FVar25;
  bool bVar26;
  <lambda_1> local_res10;
  undefined1 local_res20 [8];
  undefined1 local_348 [8];
  TObjectPtr<UPCGSettings>_u_0 local_340;
  FString local_338;
  FPCGTaggedData *local_328;
  FPCGTaggedData *local_320;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_318;
  TArray<FName,TSizedDefaultAllocator<32>_> local_308;
  uint local_2f8;
  TObjectPtr<UPCGSettings>_u_0 local_2f0;
  FPCGMetadataDomain *local_2e8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_2e0;
  FName local_2d0;
  undefined8 local_2c8;
  FPCGDataCollection *local_2c0;
  FPCGTaggedData *local_2b8;
  FPCGMetadataDomain *local_2b0;
  UPCGSettings *local_2a8;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_2a0;
  FPCGMetadataAttributeBase *local_288;
  TObjectPtr<UPCGSettings>_u_0 TStack_280;
  FPCGTaggedData *local_278;
  FString *pFStack_270;
  undefined1 local_268 [8];
  undefined1 local_260 [8];
  undefined1 local_258 [8];
  FName *local_250;
  undefined1 local_248 [8];
  FString local_240;
  FPCGAttributePropertySelector local_228;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  FTextFormat local_1a8;
  FText local_198;
  FPCGMetadataAttributeBase *local_188;
  TObjectPtr<UPCGSettings>_u_0 TStack_180;
  FPCGTaggedData *local_178;
  FString *pFStack_170;
  FFormatArgumentValue local_168;
  FName local_148 [2];
  FText local_138;
  FString local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  FPCGAttributePropertySelector local_e8;
  FText local_a8;
  FTextFormat local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId78,"FPCGDataAttributesToTagsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGDataAttributesAndTags.cpp"
               ,0x4e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId78);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGDataAttributesAndTags.cpp"
                         ,0x50,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  local_res10 = SUB81(param_1,0);
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
      pFVar24 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDataAttributesToTagsSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar24 != (FPCGTaggedData *)0x0) {
        local_2f0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar24->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_2f0.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_2f0.DebugPtr);
        }
        if (local_2f0.DebugPtr != (UPCGSettings *)0x0) {
          pUVar8 = UPCGDataAttributesToTagsSettings::StaticClass();
          bVar5 = FObjectPtr::IsA(&local_2f0.ObjectPtr,pUVar8);
          if (bVar5) {
            local_340.DebugPtr = local_2f0.DebugPtr;
            TVar10 = local_2f0;
            goto LAB_1499e3316;
          }
        }
      }
    }
    else {
      pUVar9 = UPCGNode::GetSettings(this_00);
      TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
      if (TVar10.DebugPtr != (UPCGSettings *)0x0) {
        local_340.DebugPtr = TVar10.DebugPtr;
        pUVar8 = UPCGDataAttributesToTagsSettings::StaticClass();
        iVar7 = (int)pUVar8->_padding_;
        if ((iVar7 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar8->_padding_)) goto LAB_1499e3316;
      }
    }
    local_340.DebugPtr = (UPCGSettings *)0x0;
    TVar10.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar8 = UPCGDataAttributesToTagsSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    if (bVar5) {
      local_340 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar10 = local_340;
    }
    else {
      local_340.DebugPtr = (UPCGSettings *)0x0;
      TVar10.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_1499e3316:
  if ((TVar10.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGDataAttributesAndTags.cpp"
                         ,0x53,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_2e0,&PCGPinConstants::DefaultInputLabel);
  uVar21 = (ulonglong)local_2e0.ArrayNum;
  pFVar23 = &param_1->OutputData;
  pFVar24 = (FPCGTaggedData *)(local_2e0.AllocatorInstance.Data + uVar21 * 0x78);
  local_2f8 = local_2e0.ArrayNum;
  FVar25.Data = local_2e0.AllocatorInstance.Data;
  local_2c0 = pFVar23;
  local_2b8 = pFVar24;
  do {
    while( true ) {
      local_320 = (FPCGTaggedData *)FVar25.Data;
      if (local_2e0.ArrayNum != (uint)uVar21) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if ((FPCGTaggedData *)FVar25.Data == pFVar24) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_2e0.AllocatorInstance.Data,local_2e0.ArrayNum);
        if ((FPCGTaggedData *)local_2e0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_2e0.AllocatorInstance.Data);
        }
        if (bVar26) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      pUVar13 = (((FPCGTaggedData *)FVar25.Data)->Data).Data.field0_0x0.DebugPtr;
      this_01 = (FPCGMetadataDomain *)0x0;
      if ((pUVar13 != (UPCGData *)0x0) &&
         (lVar11 = (**(code **)(pUVar13->_padding_ + 800))(), lVar11 != 0)) {
        pUVar12 = (UPCGMetadata *)
                  (**(code **)(((((FPCGTaggedData *)FVar25.Data)->Data).Data.field0_0x0.DebugPtr)->
                               _padding_ + 800))();
        this_01 = UPCGMetadata::GetConstMetadataDomain(pUVar12,&PCGMetadataDomainID::Data);
      }
      local_2b0 = this_01;
      if ((((FPCGTaggedData *)FVar25.Data)->Data).Data.field0_0x0.DebugPtr != (UPCGData *)0x0)
      break;
LAB_1499e3c55:
      uVar21 = (ulonglong)local_2f8;
      FVar25.Data = FVar25.Data + 0x78;
    }
    if (this_01 != (FPCGMetadataDomain *)0x0) {
      local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_308.ArrayNum = 0;
      local_308.ArrayMax = 0;
      if ((int)TVar10.DebugPtr[1]._padding_ == *(int *)((longlong)&TVar10.DebugPtr[1]._padding_ + 4)
         ) {
        local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2a0.ArrayNum = 0;
        local_2a0.ArrayMax = 0;
        FPCGMetadataDomain::GetAttributes(this_01,&local_308,&local_2a0);
        if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.AllocatorInstance.Data);
        }
      }
      else {
        Algo::
        Transform<TMap<FString,FPCGAttributePropertyOutputSelector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyOutputSelector,0>_>,TArray<FName,TSizedDefaultAllocator<32>_>_&,_FPCGDataAttributesToTagsElement::ExecuteInternal_::__l31::<lambda_1>_>
                  ((TMap<FString,FPCGAttributePropertyOutputSelector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyOutputSelector,0>_>
                    *)(TVar10.DebugPtr + 1),&local_308,(<lambda_1>)local_res10);
      }
      iVar7 = (pFVar23->TaggedData).ArrayNum;
      piVar1 = &(pFVar23->TaggedData).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)pFVar23,piVar1);
      }
      (pFVar23->TaggedData).ArrayNum = iVar7 + 1;
      pFVar24 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((pFVar23->TaggedData).AllocatorInstance.Data + (longlong)iVar7 * 0x78),
                           (FPCGTaggedData *)FVar25.Data);
      local_2e8 = (FPCGMetadataDomain *)0x0;
      local_328 = pFVar24;
      if ((char)TVar10.DebugPtr[1].Seed != '\0') {
        pUVar13 = (((FPCGTaggedData *)FVar25.Data)->Data).Data.field0_0x0.DebugPtr;
        pUVar13 = (UPCGData *)(**(code **)(pUVar13->_padding_ + 0x310))(pUVar13,param_1,1);
        if (((pUVar13 == (UPCGData *)0x0) ||
            (lVar11 = (**(code **)(pUVar13->_padding_ + 0x328))(pUVar13), lVar11 == 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("OutputData && OutputData->MutableMetadata()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGDataAttributesAndTags.cpp"
                               ,0x79,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pUVar12 = (UPCGMetadata *)(**(code **)(pUVar13->_padding_ + 0x328))(pUVar13);
        local_2e8 = UPCGMetadata::GetMetadataDomain(pUVar12,&PCGMetadataDomainID::Data);
        if ((local_2e8 == (FPCGMetadataDomain *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("OutputMetadata",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGDataAttributesAndTags.cpp"
                               ,0x7b,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar24 = local_328;
        FPCGDataPtrWrapper::operator=(&local_328->Data,pUVar13);
      }
      pFVar4 = local_320;
      iVar7 = local_308.ArrayNum;
      uVar21 = (ulonglong)local_308.ArrayNum;
      local_2a8 = TVar10.DebugPtr + 1;
      local_250 = (FName *)(local_308.AllocatorInstance.Data + uVar21 * 8);
      FVar25.Data = local_308.AllocatorInstance.Data;
      while( true ) {
        pFVar18 = local_250;
        if ((int)uVar21 != iVar7) {
          local_348[0] = 0;
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_348);
        }
        if ((FName *)FVar25.Data == pFVar18) break;
        pFVar14 = FPCGMetadataDomain::GetConstAttribute(local_2b0,*(FName *)FVar25.Data);
        if (pFVar14 == (FPCGMetadataAttributeBase *)0x0) {
          pFVar15 = FText::FromName(&local_a8,(FName *)FVar25.Data);
          pFVar16 = FText::AsLocalizable_Advanced_LocText
                              (&local_138,L"PCGDataAttributesAndTagsElement",L"AttributeNotFound",
                               L"Attribute \'{0} does not exist on the data domain.");
          pFVar17 = FTextFormat::FTextFormat(&local_98,pFVar16,Default);
          local_168.Type = Text;
          FText::FText((FText *)&local_168.TextValue,pFVar15);
          if ((local_168.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_318.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_318.AllocatorInstance,1,&local_318.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_318.AllocatorInstance.Data,&local_168,1);
          local_1a8.TextFormatData.Object = (pFVar17->TextFormatData).Object;
          local_1a8.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar17->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_1a8.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1a8.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1a8.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_198,&local_1a8,&local_318);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_318.AllocatorInstance.Data,local_318.ArrayNum);
          if ((FFormatArgumentValue *)local_318.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_318.AllocatorInstance.Data);
          }
          if (local_168.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_168.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar17->TextFormatData).SharedReferenceCount.ReferenceController);
          pIVar2 = (pFVar15->TextData).Reference;
          if (pIVar2 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar2 + 0x10))();
          }
          PCGLog::LogErrorOnGraph(&local_198,param_1);
          if (local_198.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
          }
          pFVar24 = local_328;
          TVar10 = local_340;
          if (local_138.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
            pFVar24 = local_328;
            TVar10 = local_340;
          }
          goto LAB_1499e377c;
        }
        ::FName::ToString(&pFVar14->Name,&local_338);
        this_02 = TMapBase<FString,FPCGAttributePropertyOutputSelector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyOutputSelector,0>_>
                  ::Find((TMapBase<FString,FPCGAttributePropertyOutputSelector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyOutputSelector,0>_>
                          *)local_2a8,&local_338);
        if ((int)local_2a8->_padding_ == *(int *)((longlong)&local_2a8->_padding_ + 4)) {
          if (this_02 != (FPCGAttributePropertyOutputSelector *)0x0) goto LAB_1499e37d6;
        }
        else {
          if (this_02 == (FPCGAttributePropertyOutputSelector *)0x0) {
            TVar10 = local_340;
            if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_338.Data.AllocatorInstance.Data);
              TVar10 = local_340;
            }
            goto LAB_1499e377c;
          }
LAB_1499e37d6:
          local_2d0.ComparisonIndex.Value = 0;
          local_2d0.Number = 0;
          FVar22.Data = (FScriptContainerElement *)L"";
          if (local_338.Data.ArrayNum != 0) {
            FVar22.Data = local_338.Data.AllocatorInstance.Data;
          }
          pFVar18 = ::FName::FName(local_148,(wchar_t *)FVar22.Data);
          FVar19 = *pFVar18;
          FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
                    ((FPCGAttributePropertyInputSelector *)&local_228);
          FPCGAttributePropertySelector::SetDomainName(&local_228,local_2d0,true);
          FPCGAttributePropertySelector::SetAttributeName(&local_228,FVar19,true);
          DestructItems<FString,int>
                    ((FString *)local_228.ExtraNames.AllocatorInstance.Data,
                     local_228.ExtraNames.ArrayNum);
          local_228.ExtraNames.ArrayNum = 0;
          if (local_228.ExtraNames.ArrayMax == 0) {
            local_228.ExtraNames.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,local_228.ExtraNames.ArrayMax,
                       &local_228.ExtraNames.AllocatorInstance,0,&local_228.ExtraNames.ArrayMax);
            ConstructItems<FString,FString,int>
                      (local_228.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
          }
          FPCGAttributePropertyOutputSelector::CopyAndFixSource
                    (this_02,(FPCGAttributePropertyOutputSelector *)&local_e8,
                     (FPCGAttributePropertyInputSelector *)&local_228,
                     (pFVar4->Data).Data.field0_0x0.DebugPtr);
          FVar19 = FPCGAttributePropertySelector::GetName(&local_e8);
          pFVar20 = ::FName::ToString((FName *)FVar19,&local_128);
          if (&local_338 != pFVar20) {
            if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_338.Data.AllocatorInstance.Data);
            }
            local_338.Data.AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
            (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_338.Data.ArrayNum = (pFVar20->Data).ArrayNum;
            local_338.Data.ArrayMax = (pFVar20->Data).ArrayMax;
            (pFVar20->Data).ArrayNum = 0;
            (pFVar20->Data).ArrayMax = 0;
          }
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          DestructItems<FString,int>
                    ((FString *)local_e8.ExtraNames.AllocatorInstance.Data,
                     local_e8.ExtraNames.ArrayNum);
          if (local_e8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.ExtraNames.AllocatorInstance.Data);
          }
          DestructItems<FString,int>
                    ((FString *)local_228.ExtraNames.AllocatorInstance.Data,
                     local_228.ExtraNames.ArrayNum);
          pFVar24 = local_328;
          if (local_228.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.ExtraNames.AllocatorInstance.Data);
            pFVar24 = local_328;
          }
        }
        TVar10 = local_340;
        pFStack_270 = &local_338;
        TStack_180.DebugPtr = local_340.DebugPtr;
        TStack_280.DebugPtr = local_340.DebugPtr;
        local_288 = pFVar14;
        local_278 = pFVar24;
        local_188 = pFVar14;
        local_178 = pFVar24;
        pFStack_170 = pFStack_270;
        switch(pFVar14->TypeId) {
        case 0:
          bVar5 = `FPCGDataAttributesToTagsElement::ExecuteInternal'::__l52::<lambda_2>::
                  operator()<float>(&local_288,0.0);
          break;
        case 1:
          bVar5 = `FPCGDataAttributesToTagsElement::ExecuteInternal'::__l52::<lambda_2>::
                  operator()<double>(&local_288,0.0);
          break;
        case 2:
          bVar5 = `FPCGDataAttributesToTagsElement::ExecuteInternal'::__l52::<lambda_2>::
                  operator()<int>(&local_288,0);
          break;
        case 3:
          bVar5 = `FPCGDataAttributesToTagsElement::ExecuteInternal'::__l52::<lambda_2>::
                  operator()<__int64>(&local_288,0);
          break;
        case 4:
          local_68 = 0;
          uStack_60 = 0;
          if (*(char *)&local_340.DebugPtr[1].OriginalSettings != '\0') goto LAB_1499e3bbf;
          pFVar20 = (FString *)local_268;
LAB_1499e3baa:
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                    (&pFVar24->Tags,pFVar20,(bool *)&local_338);
          bVar5 = true;
          break;
        case 5:
          bVar5 = false;
          local_118 = 0;
          uStack_110 = 0;
          local_108 = 0;
          if (*(char *)&local_340.DebugPtr[1].OriginalSettings == '\0') {
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                      (&pFVar24->Tags,(FString *)(local_268 + 4),(bool *)&local_338);
            bVar5 = true;
          }
          break;
        case 6:
          if (*(char *)&local_340.DebugPtr[1].OriginalSettings == '\0') {
            pFVar20 = (FString *)local_260;
            goto LAB_1499e3baa;
          }
          goto LAB_1499e3bbf;
        case 7:
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          if (*(char *)&local_340.DebugPtr[1].OriginalSettings == '\0') {
            pFVar20 = (FString *)local_248;
            goto LAB_1499e3baa;
          }
          goto LAB_1499e3bbf;
        case 8:
          if (*(char *)&local_340.DebugPtr[1].OriginalSettings == '\0') {
            pFVar20 = (FString *)(local_260 + 4);
            goto LAB_1499e3baa;
          }
          goto LAB_1499e3bbf;
        case 9:
          local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_240.Data.ArrayNum = 0;
          local_240.Data.ArrayMax = 0;
          bVar5 = `FPCGDataAttributesToTagsElement::ExecuteInternal'::__l52::<lambda_2>::
                  operator()<FString>(&local_288,&local_240);
          break;
        case 10:
          bVar5 = `FPCGDataAttributesToTagsElement::ExecuteInternal'::__l52::<lambda_2>::
                  operator()<bool>(&local_288,false);
          break;
        case 0xb:
          bVar5 = false;
          local_100 = 0;
          uStack_f8 = 0;
          local_f0 = 0;
          if (*(char *)&local_340.DebugPtr[1].OriginalSettings == '\0') {
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                      (&pFVar24->Tags,(FString *)local_258,(bool *)&local_338);
            bVar5 = true;
          }
          break;
        case 0xc:
          local_2c8 = 0;
          bVar5 = `FPCGDataAttributesToTagsElement::ExecuteInternal'::__l52::<lambda_2>::
                  operator()<FName>(&local_288,(FName)0x0);
          break;
        case 0xd:
          local_1c8 = 0;
          local_1c0 = 0;
          local_1b8 = 0;
          local_1b0 = 0;
          if (*(char *)&local_340.DebugPtr[1].OriginalSettings == '\0') {
            pFVar20 = (FString *)(local_258 + 4);
            goto LAB_1499e3baa;
          }
          goto LAB_1499e3bbf;
        case 0xe:
          local_1e8 = 0;
          local_1e0 = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          if (*(char *)&local_340.DebugPtr[1].OriginalSettings == '\0') {
            pFVar20 = (FString *)(local_248 + 4);
            goto LAB_1499e3baa;
          }
LAB_1499e3bbf:
          bVar5 = false;
          break;
        default:
          goto switchD_1499e39c1_default;
        }
        if ((bVar5 != false) && ((char)TVar10.DebugPtr[1].Seed != '\0')) {
          if ((local_2e8 == (FPCGMetadataDomain *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("OutputMetadata",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGDataAttributesAndTags.cpp"
                                 ,0xbd,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          FPCGMetadataDomain::DeleteAttribute(local_2e8,pFVar14->Name);
        }
switchD_1499e39c1_default:
        if (local_338.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
LAB_1499e377c:
          uVar21 = local_308._8_8_ & 0xffffffff;
          FVar25.Data = FVar25.Data + 8;
        }
        else {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
          uVar21 = local_308._8_8_ & 0xffffffff;
          FVar25.Data = FVar25.Data + 8;
        }
      }
      pFVar23 = local_2c0;
      pFVar24 = local_2b8;
      FVar25.Data = (FScriptContainerElement *)local_320;
      if ((FName *)local_308.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_308.AllocatorInstance.Data);
        pFVar23 = local_2c0;
        pFVar24 = local_2b8;
        FVar25.Data = (FScriptContainerElement *)local_320;
      }
      goto LAB_1499e3c55;
    }
    iVar7 = (pFVar23->TaggedData).ArrayNum;
    piVar1 = &(pFVar23->TaggedData).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)pFVar23,piVar1);
    }
    (pFVar23->TaggedData).ArrayNum = iVar7 + 1;
    FPCGTaggedData::FPCGTaggedData
              ((FPCGTaggedData *)
               ((pFVar23->TaggedData).AllocatorInstance.Data + (longlong)iVar7 * 0x78),
               (FPCGTaggedData *)FVar25.Data);
    uVar21 = (ulonglong)local_2f8;
    FVar25.Data = FVar25.Data + 0x78;
  } while( true );
}

// ExecutionLoopMode @ 1499f1a50

EPCGElementExecutionLoopMode __thiscall
FPCGDataAttributesToTagsElement::ExecutionLoopMode
          (FPCGDataAttributesToTagsElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149a10220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGDataAttributesToTagsElement::SupportsBasePointDataInputs
          (FPCGDataAttributesToTagsElement *this,FPCGContext *param_1)

{
  return true;
}

