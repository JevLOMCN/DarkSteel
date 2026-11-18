// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// FormatNamed<wchar_t_const_(&)[13],FText,wchar_t_const_(&)[11],FText,wchar_t_const_(&)[16],FText> @ 14dd66980

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::
FormatNamed<wchar_t_const_(&)[13],FText,wchar_t_const_(&)[11],FText,wchar_t_const_(&)[16],FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,wchar_t (*param_2) [13],FText *param_3
          ,wchar_t (*param_4) [11],FText *param_5,wchar_t (*param_6) [16],FText *param_7)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *pTVar3;
  FText *pFVar4;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_18;
  
  local_18.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Pairs.ArrayNum = 0;
  local_18.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,3,(ForAnyElementType *)&local_18,0,&local_18.Pairs.ArrayMax);
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[13]>(&local_18,param_2);
  ::FString::FString((FString *)pTVar3,*param_2);
  *(undefined4 *)&pTVar3->field_0x10 = 4;
  FText((FText *)&pTVar3->field_0x20,param_3);
  if (*(longlong *)&pTVar3->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar1)();
      return pFVar4;
    }
  }
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[11]>(&local_18,param_4);
  ::FString::FString((FString *)pTVar3,*param_4);
  *(undefined4 *)&pTVar3->field_0x10 = 4;
  FText((FText *)&pTVar3->field_0x20,param_5);
  if (*(longlong *)&pTVar3->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar1)();
      return pFVar4;
    }
  }
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[16]>(&local_18,param_6);
  ::FString::FString((FString *)pTVar3,*param_6);
  *(undefined4 *)&pTVar3->field_0x10 = 4;
  FText((FText *)&pTVar3->field_0x20,param_7);
  if (*(longlong *)&pTVar3->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar1)();
      return pFVar4;
    }
  }
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

