// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// Format<FText,int,int,int,int> @ 14209eaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<FText,int,int,int,int>
          (FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2,int param_3,int param_4
          ,int param_5,int param_6)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 auStackY_138 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_f8;
  FTextFormat local_e8;
  FFormatArgumentValue local_d8;
  undefined4 local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  longlong local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_78;
  longlong local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_58;
  longlong local_50;
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_d8.Type = Text;
  FText((FText *)&local_d8.TextValue,param_2);
  if (local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_90 = (longlong)param_4;
  local_70 = (longlong)param_5;
  local_50 = (longlong)param_6;
  local_b8 = 0;
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_68 = (longlong *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 5;
  local_b0 = (longlong)param_3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,5,0,&local_f8.AllocatorInstance,5,&local_f8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_f8.AllocatorInstance.Data,&local_d8,5);
  local_e8.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_e8.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_e8.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_e8,&local_f8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))();
  }
  if (local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Format<FText,FText,bool,FText,bool> @ 14209ecd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::Format<FText,FText,bool,FText,bool>
          (FText *__return_storage_ptr__,FTextFormat *param_1,FText *param_2,FText *param_3,
          bool param_4,FText *param_5,bool param_6)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 auStackY_148 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_108;
  FTextFormat local_f8;
  FFormatArgumentValue local_e8;
  undefined4 local_c8;
  FText local_b8;
  undefined4 local_a8;
  ulonglong local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_88;
  FText local_78;
  undefined4 local_68;
  ulonglong local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_e8.Type = Text;
  FText((FText *)&local_e8.TextValue,param_2);
  if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_c8 = 4;
  FText(&local_b8,param_3);
  if (local_b8.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_a0 = (ulonglong)param_4;
  local_a8 = 0;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_88 = 4;
  FText(&local_78,param_5);
  if (local_78.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_60 = (ulonglong)param_6;
  local_68 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,5,0,&local_108.AllocatorInstance,5,&local_108.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_108.AllocatorInstance.Data,&local_e8,5);
  local_f8.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_f8.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_f8.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  Format(__return_storage_ptr__,&local_f8,&local_108);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if ((FFormatArgumentValue *)local_108.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_3->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (param_5->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// FormatNamed<wchar_t_const_(&)[8],FText,wchar_t_const_(&)[17],FText> @ 142304b00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatNamed<wchar_t_const_(&)[8],FText,wchar_t_const_(&)[17],FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,wchar_t (*param_2) [8],FText *param_3,
          wchar_t (*param_4) [17],FText *param_5)

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
            (0x30,8,2,(ForAnyElementType *)&local_18,0,&local_18.Pairs.ArrayMax);
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>(&local_18,param_2);
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
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[17]>(&local_18,param_4);
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

// FormatNamed<wchar_t_const_(&)[15],FText,wchar_t_const_(&)[17],FText> @ 142304f30

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::FormatNamed<wchar_t_const_(&)[15],FText,wchar_t_const_(&)[17],FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,wchar_t (*param_2) [15],FText *param_3
          ,wchar_t (*param_4) [17],FText *param_5)

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
            (0x30,8,2,(ForAnyElementType *)&local_18,0,&local_18.Pairs.ArrayMax);
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[15]>(&local_18,param_2);
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
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[17]>(&local_18,param_4);
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

// FormatNamed<wchar_t_const_(&)[15],FText,wchar_t_const_(&)[17],FText,wchar_t_const_(&)[12],FText> @ 1423050e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FText::
FormatNamed<wchar_t_const_(&)[15],FText,wchar_t_const_(&)[17],FText,wchar_t_const_(&)[12],FText>
          (FText *__return_storage_ptr__,FTextFormat *param_1,wchar_t (*param_2) [15],FText *param_3
          ,wchar_t (*param_4) [17],FText *param_5,wchar_t (*param_6) [12],FText *param_7)

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
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[15]>(&local_18,param_2);
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
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[17]>(&local_18,param_4);
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
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[12]>(&local_18,param_6);
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

