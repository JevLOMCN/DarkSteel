// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// FormatNamed<wchar_t_const_(&)[4],FText_const_&,wchar_t_const_(&)[4],FText_const_&> @ 14d52abf0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatNamed<wchar_t_const_(&)[4],FText_const_&,wchar_t_const_(&)[4],FText_const_&>
          (FText *__return_storage_ptr__,FTextFormat *param_1,wchar_t (*param_2) [4],FText *param_3,
          wchar_t (*param_4) [4],FText *param_5)

{
  TTuple<FString,FFormatArgumentValue> *pTVar1;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_18;
  
  local_18.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Pairs.ArrayNum = 0;
  local_18.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,2,(ForAnyElementType *)&local_18,0,&local_18.Pairs.ArrayMax);
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[4]>(&local_18,param_2);
  ::FString::FString((FString *)pTVar1,*param_2);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_3);
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[4]>(&local_18,param_4);
  ::FString::FString((FString *)pTVar1,*param_4);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_5);
  FormatNamedImpl(__return_storage_ptr__,param_1,&local_18);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_18.Pairs.AllocatorInstance.Data,
             local_18.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_18.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_18.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FormatNamed<wchar_t_const_(&)[5],FText_const_&,wchar_t_const_(&)[10],FText_const_&,wchar_t_const_(&)[6],FText_const_&> @ 14d52ade0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::
FormatNamed<wchar_t_const_(&)[5],FText_const_&,wchar_t_const_(&)[10],FText_const_&,wchar_t_const_(&)[6],FText_const_&>
          (FText *__return_storage_ptr__,FTextFormat *param_1,wchar_t (*param_2) [5],FText *param_3,
          wchar_t (*param_4) [10],FText *param_5,wchar_t (*param_6) [6],FText *param_7)

{
  TTuple<FString,FFormatArgumentValue> *pTVar1;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_18;
  
  local_18.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Pairs.ArrayNum = 0;
  local_18.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,3,(ForAnyElementType *)&local_18,0,&local_18.Pairs.ArrayMax);
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[5]>(&local_18,param_2);
  ::FString::FString((FString *)pTVar1,*param_2);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_3);
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[10]>(&local_18,param_4);
  ::FString::FString((FString *)pTVar1,*param_4);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_5);
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[6]>(&local_18,param_6);
  ::FString::FString((FString *)pTVar1,*param_6);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_7);
  FormatNamedImpl(__return_storage_ptr__,param_1,&local_18);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_18.Pairs.AllocatorInstance.Data,
             local_18.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_18.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_18.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FormatNamed<wchar_t_const_(&)[9],FText_const_&,wchar_t_const_(&)[6],FText_const_&> @ 14d52b080

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatNamed<wchar_t_const_(&)[9],FText_const_&,wchar_t_const_(&)[6],FText_const_&>
          (FText *__return_storage_ptr__,FTextFormat *param_1,wchar_t (*param_2) [9],FText *param_3,
          wchar_t (*param_4) [6],FText *param_5)

{
  TTuple<FString,FFormatArgumentValue> *pTVar1;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_18;
  
  local_18.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Pairs.ArrayNum = 0;
  local_18.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,2,(ForAnyElementType *)&local_18,0,&local_18.Pairs.ArrayMax);
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[9]>(&local_18,param_2);
  ::FString::FString((FString *)pTVar1,*param_2);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_3);
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[6]>(&local_18,param_4);
  ::FString::FString((FString *)pTVar1,*param_4);
  UE::Core::Private::Tuple::TTupleBaseElement<FFormatArgumentValue,1,2>::
  TTupleBaseElement<FFormatArgumentValue,1,2><FText_const_&>
            ((TTupleBaseElement<FFormatArgumentValue,1,2> *)&pTVar1->field_0x10,
             ForwardingConstructor,param_5);
  FormatNamedImpl(__return_storage_ptr__,param_1,&local_18);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_18.Pairs.AllocatorInstance.Data,
             local_18.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_18.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_18.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

