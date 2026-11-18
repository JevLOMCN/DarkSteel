// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// FormatNamed<wchar_t_const_(&)[10],FText,wchar_t_const_(&)[11],FText_&> @ 14a799c60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatNamed<wchar_t_const_(&)[10],FText,wchar_t_const_(&)[11],FText_&>
          (FText *__return_storage_ptr__,FTextFormat *param_1,wchar_t (*param_2) [10],FText *param_3
          ,wchar_t (*param_4) [11],FText *param_5)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FString,FFormatArgumentValue> *pTVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_28;
  
  local_28.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Pairs.ArrayNum = 0;
  local_28.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,2,(ForAnyElementType *)&local_28,0,&local_28.Pairs.ArrayMax);
  pTVar4 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[10]>(&local_28,param_2);
  ::FString::FString((FString *)pTVar4,*param_2);
  *(undefined4 *)&pTVar4->field_0x10 = 4;
  FText((FText *)&pTVar4->field_0x20,param_3);
  if (*(longlong *)&pTVar4->field_0x20 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  pTVar4 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[11]>(&local_28,param_4);
  ::FString::FString((FString *)pTVar4,*param_4);
  *(undefined4 *)&pTVar4->field_0x10 = 4;
  *(undefined8 *)&pTVar4->field_0x20 = 0;
  pIVar1 = (param_5->TextData).Reference;
  *(ITextData **)&pTVar4->field_0x20 = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  *(uint *)&pTVar4->field_0x28 = param_5->Flags;
  if (*(longlong *)&pTVar4->field_0x20 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
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

