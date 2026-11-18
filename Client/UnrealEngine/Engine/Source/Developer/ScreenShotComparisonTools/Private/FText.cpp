// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 1

// FormatNamed<wchar_t_const_(&)[7],int_const_&,wchar_t_const_(&)[8],int_const_&,wchar_t_const_(&)[7],int_const_&,wchar_t_const_(&)[8],int_const_&> @ 148c3c340

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::
FormatNamed<wchar_t_const_(&)[7],int_const_&,wchar_t_const_(&)[8],int_const_&,wchar_t_const_(&)[7],int_const_&,wchar_t_const_(&)[8],int_const_&>
          (FText *__return_storage_ptr__,FTextFormat *param_1,wchar_t (*param_2) [7],int *param_3,
          wchar_t (*param_4) [8],int *param_5,wchar_t (*param_6) [7],int *param_7,
          wchar_t (*param_8) [8],int *param_9)

{
  int iVar1;
  TTuple<FString,FFormatArgumentValue> *pTVar2;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_28;
  
  local_28.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Pairs.ArrayNum = 0;
  local_28.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,4,(ForAnyElementType *)&local_28,0,&local_28.Pairs.ArrayMax);
  pTVar2 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(&local_28,param_2);
  ::FString::FString((FString *)pTVar2,*param_2);
  iVar1 = *param_3;
  *(undefined4 *)&pTVar2->field_0x10 = 0;
  *(undefined8 *)&pTVar2->field_0x20 = 0;
  *(undefined4 *)&pTVar2->field_0x28 = 0;
  *(longlong *)&pTVar2->field_0x18 = (longlong)iVar1;
  pTVar2 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>(&local_28,param_4);
  ::FString::FString((FString *)pTVar2,*param_4);
  iVar1 = *param_5;
  *(undefined4 *)&pTVar2->field_0x10 = 0;
  *(undefined8 *)&pTVar2->field_0x20 = 0;
  *(undefined4 *)&pTVar2->field_0x28 = 0;
  *(longlong *)&pTVar2->field_0x18 = (longlong)iVar1;
  pTVar2 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(&local_28,param_6);
  ::FString::FString((FString *)pTVar2,*param_6);
  iVar1 = *param_7;
  *(undefined4 *)&pTVar2->field_0x10 = 0;
  *(undefined8 *)&pTVar2->field_0x20 = 0;
  *(undefined4 *)&pTVar2->field_0x28 = 0;
  *(longlong *)&pTVar2->field_0x18 = (longlong)iVar1;
  pTVar2 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>(&local_28,param_8);
  ::FString::FString((FString *)pTVar2,*param_8);
  iVar1 = *param_9;
  *(undefined4 *)&pTVar2->field_0x10 = 0;
  *(undefined8 *)&pTVar2->field_0x20 = 0;
  *(undefined4 *)&pTVar2->field_0x28 = 0;
  *(longlong *)&pTVar2->field_0x18 = (longlong)iVar1;
  FormatNamedImpl(__return_storage_ptr__,param_1,&local_28);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_28.Pairs.AllocatorInstance.Data,
             local_28.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_28.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_28.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

