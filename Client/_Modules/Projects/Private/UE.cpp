// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 49

// DereferenceIfNecessary<FPluginManager,FPluginManager_*_&> @ 141e04b20

FPluginManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<FPluginManager,FPluginManager_*_&>
          (FPluginManager **param_1)

{
  return *param_1;
}

// ReadArray<FLocalizationTargetDescriptor> @ 141e07e60

TOptional<FText> * __cdecl
UE::Projects::Private::ReadArray<FLocalizationTargetDescriptor>
          (TOptional<FText> *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,wchar_t *param_2,
          TArray<FLocalizationTargetDescriptor,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  uint uVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  code *pcVar8;
  GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar9;
  bool bVar10;
  int iVar11;
  TOptional<FText> *pTVar12;
  longlong lVar13;
  FText *pFVar14;
  ulonglong uVar15;
  Number local_res10;
  ulonglong local_78;
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_70;
  TOptional<FText>_u_0 local_60;
  FText local_50;
  FText local_40;
  
  local_res10 = ((param_1.value_)->data_).n;
  Json::GetArrayField(&local_70,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_res10,param_2);
  GVar9.value_ = local_70.TypedValue.value_;
  if (local_70.bIsSet != false) {
    if ((((local_70.TypedValue.value_)->data_).f.flags != 4) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsArray()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x674,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TOptional<FText> *)(*pcVar8)();
      return pTVar12;
    }
    uVar2 = ((GVar9.value_)->data_).s.length;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &param_3->ArrayMax;
    if (param_3->ArrayMax < (int)uVar2) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar2,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    if ((local_70.bIsSet == false) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TOptional<FText> *)(*pcVar8)();
      return pTVar12;
    }
    GVar9.value_ = local_70.TypedValue.value_;
    if ((((local_70.TypedValue.value_)->data_).f.flags != 4) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsArray()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x696,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TOptional<FText> *)(*pcVar8)();
      return pTVar12;
    }
    uVar15 = (ulonglong)((GVar9.value_)->data_).s.str & 0xffffffffffff;
    if ((((local_70.TypedValue.value_)->data_).f.flags != 4) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsArray()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x699,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TOptional<FText> *)(*pcVar8)();
      return pTVar12;
    }
    pwVar3 = ((local_70.TypedValue.value_)->data_).s.str;
    uVar2 = ((local_70.TypedValue.value_)->data_).s.length;
    for (; uVar15 != ((ulonglong)pwVar3 & 0xffffffffffff) + (ulonglong)uVar2 * 0x10;
        uVar15 = uVar15 + 0x10) {
      iVar11 = param_3->ArrayNum;
      if (*(short *)(uVar15 + 0xe) != 3) {
        pFVar14 = GetArrayObjectTypeError(&local_40,param_2,iVar11);
        FText::FText((FText *)__return_storage_ptr__,pFVar14);
        if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0xbd,
                                   L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                  ), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar12 = (TOptional<FText> *)(*pcVar8)();
          return pTVar12;
        }
LAB_141e08209:
        if (local_40.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
      if (iVar11 == *piVar1) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_3->AllocatorInstance,piVar1);
      }
      lVar13 = (longlong)iVar11;
      param_3->ArrayNum = iVar11 + 1;
      pFVar4 = (param_3->AllocatorInstance).Data;
      *(undefined8 *)(pFVar4 + lVar13 * 0x18) = 0;
      *(undefined8 *)(pFVar4 + lVar13 * 0x18 + 8) = 0;
      *(undefined8 *)(pFVar4 + lVar13 * 0x18 + 0x10) = 0;
      if ((*(short *)(uVar15 + 0xe) != 3) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsObject()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                              ,0x667,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar12 = (TOptional<FText> *)(*pcVar8)();
        return pTVar12;
      }
      local_78 = uVar15;
      Read((TOptional<FText> *)&local_60.TypedValue,
           (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_78,
           (FLocalizationTargetDescriptor *)(pFVar4 + lVar13 * 0x18));
      if (local_60.TypedValue.TextData.Reference != (ITextData *)0x0) {
        if ((param_3->ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar12 = (TOptional<FText> *)(*pcVar8)();
          return pTVar12;
        }
        lVar13 = (longlong)param_3->ArrayNum;
        pFVar4 = (param_3->AllocatorInstance).Data;
        pvVar5 = *(void **)(pFVar4 + lVar13 * 0x18 + -0x18);
        *(undefined8 *)(pFVar4 + lVar13 * 0x18 + -0x18) = 0;
        *(undefined8 *)(pFVar4 + lVar13 * 0x18 + -0x10) = 0;
        iVar11 = param_3->ArrayNum;
        pFVar6 = (param_3->AllocatorInstance).Data;
        pFVar4 = pFVar6 + (longlong)iVar11 * 0x18;
        pvVar7 = *(void **)(pFVar6 + (longlong)iVar11 * 0x18 + -0x18);
        if (pvVar7 != (void *)0x0) {
          FMemory::Free(pvVar7);
        }
        iVar11 = param_3->ArrayNum - iVar11;
        if (iVar11 != 0) {
          memmove(pFVar4 + -0x18,pFVar4,(longlong)iVar11 * 0x18);
        }
        param_3->ArrayNum = param_3->ArrayNum + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
        if (pvVar5 != (void *)0x0) {
          FMemory::Free(pvVar5);
        }
        if ((local_60.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar12 = (TOptional<FText> *)(*pcVar8)();
          return pTVar12;
        }
        pFVar14 = GetArrayObjectChildParseError
                            (&local_50,param_2,param_3->ArrayNum,&local_60.TypedValue);
        FText::FText((FText *)__return_storage_ptr__,pFVar14);
        if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0xbd,
                                   L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                  ), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar12 = (TOptional<FText> *)(*pcVar8)();
          return pTVar12;
        }
        local_40.TextData.Reference = (ITextData *)local_60.TypedValue.TextData.Reference;
        if (local_50.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
          local_40.TextData.Reference = (ITextData *)local_60.TypedValue.TextData.Reference;
        }
        goto LAB_141e08209;
      }
    }
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  return __return_storage_ptr__;
}

// ReadArray<FModuleDescriptor> @ 141e08260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FText> * __cdecl
UE::Projects::Private::ReadArray<FModuleDescriptor>
          (TOptional<FText> *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,wchar_t *param_2,TArray<FModuleDescriptor,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar4;
  bool bVar5;
  int iVar6;
  TOptional<FText> *pTVar7;
  FModuleDescriptor *pFVar8;
  FText *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStackY_248 [32];
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_210;
  TOptional<FText>_u_0 local_200;
  Number local_1f0;
  ulonglong local_1e8;
  FText local_1e0;
  FText local_1d0;
  FModuleDescriptor local_1b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1f0 = ((param_1.value_)->data_).n;
  Json::GetArrayField(&local_210,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_1f0,param_2);
  GVar4.value_ = local_210.TypedValue.value_;
  if (local_210.bIsSet != false) {
    if ((((local_210.TypedValue.value_)->data_).f.flags != 4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x674,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TOptional<FText> *)(*pcVar3)();
      return pTVar7;
    }
    uVar10 = ((GVar4.value_)->data_).s.length;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    piVar1 = &param_3->ArrayMax;
    if (param_3->ArrayMax < (int)uVar10) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x168,8,uVar10,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    if ((local_210.bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TOptional<FText> *)(*pcVar3)();
      return pTVar7;
    }
    GVar4.value_ = local_210.TypedValue.value_;
    if ((((local_210.TypedValue.value_)->data_).f.flags != 4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x696,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TOptional<FText> *)(*pcVar3)();
      return pTVar7;
    }
    uVar11 = (ulonglong)((GVar4.value_)->data_).s.str & 0xffffffffffff;
    if ((((local_210.TypedValue.value_)->data_).f.flags != 4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x699,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TOptional<FText> *)(*pcVar3)();
      return pTVar7;
    }
    pwVar2 = ((local_210.TypedValue.value_)->data_).s.str;
    uVar10 = ((local_210.TypedValue.value_)->data_).s.length;
    for (; uVar11 != ((ulonglong)pwVar2 & 0xffffffffffff) + (ulonglong)uVar10 * 0x10;
        uVar11 = uVar11 + 0x10) {
      iVar6 = param_3->ArrayNum;
      if (*(short *)(uVar11 + 0xe) != 3) {
        pFVar9 = GetArrayObjectTypeError(&local_1d0,param_2,iVar6);
        FText::FText((FText *)__return_storage_ptr__,pFVar9);
        if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TOptional<FText> *)(*pcVar3)();
          return pTVar7;
        }
        if (local_1d0.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_1d0.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x168,8,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar6 + 1;
      pFVar8 = FModuleDescriptor::FModuleDescriptor
                         ((FModuleDescriptor *)
                          ((param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x168),(FName)0x0,
                          Runtime,Default);
      if ((*(short *)(uVar11 + 0xe) != 3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                             ,0x667,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TOptional<FText> *)(*pcVar3)();
        return pTVar7;
      }
      local_1e8 = uVar11;
      Read((TOptional<FText> *)&local_200.TypedValue,
           (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_1e8,
           pFVar8);
      if (local_200.TypedValue.TextData.Reference != (ITextData *)0x0) {
        if ((param_3->ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TOptional<FText> *)(*pcVar3)();
          return pTVar7;
        }
        FModuleDescriptor::FModuleDescriptor
                  (&local_1b8,
                   (FModuleDescriptor *)
                   ((param_3->AllocatorInstance).Data + (longlong)(param_3->ArrayNum + -1) * 0x168))
        ;
        uVar10 = param_3->ArrayNum - 1;
        pFVar8 = (FModuleDescriptor *)
                 ((param_3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x168);
        FModuleDescriptor::~FModuleDescriptor(pFVar8);
        iVar6 = param_3->ArrayNum + ~uVar10;
        if (iVar6 != 0) {
          memmove(pFVar8,pFVar8 + 1,(longlong)iVar6 * 0x168);
        }
        param_3->ArrayNum = param_3->ArrayNum + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x168,8,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
        FModuleDescriptor::~FModuleDescriptor(&local_1b8);
        if ((local_200.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TOptional<FText> *)(*pcVar3)();
          return pTVar7;
        }
        pFVar9 = GetArrayObjectChildParseError
                           (&local_1e0,param_2,param_3->ArrayNum,&local_200.TypedValue);
        FText::FText((FText *)__return_storage_ptr__,pFVar9);
        if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TOptional<FText> *)(*pcVar3)();
          return pTVar7;
        }
        if (local_1e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1e0.TextData.Reference + 0x10))();
        }
        if (local_200.TypedValue.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*(ITextData *)local_200.TypedValue.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
    }
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  return __return_storage_ptr__;
}

// ReadArray<FPluginDisallowedDescriptor> @ 141e08690

TOptional<FText> * __cdecl
UE::Projects::Private::ReadArray<FPluginDisallowedDescriptor>
          (TOptional<FText> *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,wchar_t *param_2,
          TArray<FPluginDisallowedDescriptor,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  uint uVar2;
  wchar_t *pwVar3;
  void *pvVar4;
  code *pcVar5;
  GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar6;
  bool bVar7;
  int iVar8;
  TOptional<FText> *pTVar9;
  FText *pFVar10;
  longlong lVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  Number local_res10;
  wchar_t *local_res18;
  ulonglong local_98;
  FText local_90;
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  
  local_res10 = ((param_1.value_)->data_).n;
  local_res18 = param_2;
  Json::GetArrayField(&local_80,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_res10,param_2);
  GVar6.value_ = local_80.TypedValue.value_;
  if (local_80.bIsSet != false) {
    if ((((local_80.TypedValue.value_)->data_).f.flags != 4) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x674,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TOptional<FText> *)(*pcVar5)();
      return pTVar9;
    }
    uVar2 = ((GVar6.value_)->data_).s.length;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &param_3->ArrayMax;
    if (param_3->ArrayMax < (int)uVar2) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar2,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    if ((local_80.bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TOptional<FText> *)(*pcVar5)();
      return pTVar9;
    }
    GVar6.value_ = local_80.TypedValue.value_;
    if ((((local_80.TypedValue.value_)->data_).f.flags != 4) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x696,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TOptional<FText> *)(*pcVar5)();
      return pTVar9;
    }
    uVar12 = (ulonglong)((GVar6.value_)->data_).s.str & 0xffffffffffff;
    if ((((local_80.TypedValue.value_)->data_).f.flags != 4) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x699,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TOptional<FText> *)(*pcVar5)();
      return pTVar9;
    }
    pwVar3 = ((local_80.TypedValue.value_)->data_).s.str;
    uVar2 = ((local_80.TypedValue.value_)->data_).s.length;
    for (; uVar12 != ((ulonglong)pwVar3 & 0xffffffffffff) + (ulonglong)uVar2 * 0x10;
        uVar12 = uVar12 + 0x10) {
      iVar8 = param_3->ArrayNum;
      if (*(short *)(uVar12 + 0xe) != 3) {
        pFVar10 = GetArrayObjectTypeError(&local_50,local_res18,iVar8);
        FText::FText((FText *)__return_storage_ptr__,pFVar10);
        if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TOptional<FText> *)(*pcVar5)();
          return pTVar9;
        }
LAB_141e08a99:
        if (local_50.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar8 + 1;
      pFVar13 = (param_3->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)&pFVar13->field_0x0 = 0;
      *(undefined8 *)(pFVar13 + 8) = 0;
      if ((*(short *)(uVar12 + 0xe) != 3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                             ,0x667,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TOptional<FText> *)(*pcVar5)();
        return pTVar9;
      }
      local_98 = uVar12;
      bVar7 = TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                 *)&local_98,L"Name",(FString *)pFVar13);
      if (bVar7) {
        local_90.TextData.Reference = (ITextData *)0x0;
        local_90.Flags = 0;
      }
      else {
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_70,L"PluginDisallowedDescriptor",L"FPluginDisallowedWithoutName"
                             ,L"Disallowed plugin must have a \'Name\' field");
        FText::FText(&local_90,pFVar10);
        if ((local_90.TextData.Reference == (ITextData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TOptional<FText> *)(*pcVar5)();
          return pTVar9;
        }
        if (local_70.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
        }
      }
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        if ((param_3->ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TOptional<FText> *)(*pcVar5)();
          return pTVar9;
        }
        lVar11 = (longlong)param_3->ArrayNum;
        pFVar13 = (param_3->AllocatorInstance).Data;
        pvVar4 = *(void **)(pFVar13 + lVar11 * 0x10 + -0x10);
        *(undefined8 *)(pFVar13 + lVar11 * 0x10 + -0x10) = 0;
        *(undefined8 *)(pFVar13 + lVar11 * 0x10 + -8) = 0;
        iVar8 = param_3->ArrayNum;
        pFVar13 = (param_3->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        if (*(void **)(pFVar13 + -0x10) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar13 + -0x10));
        }
        iVar8 = param_3->ArrayNum - iVar8;
        if (iVar8 != 0) {
          memmove(pFVar13 + -0x10,pFVar13,(longlong)iVar8 << 4);
        }
        iVar8 = param_3->ArrayNum + -1;
        param_3->ArrayNum = iVar8;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_3->AllocatorInstance,iVar8,piVar1);
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
        if ((local_90.TextData.Reference == (ITextData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TOptional<FText> *)(*pcVar5)();
          return pTVar9;
        }
        pFVar10 = GetArrayObjectChildParseError(&local_60,local_res18,param_3->ArrayNum,&local_90);
        FText::FText((FText *)__return_storage_ptr__,pFVar10);
        if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TOptional<FText> *)(*pcVar5)();
          return pTVar9;
        }
        local_50.TextData.Reference = local_90.TextData.Reference;
        if (local_60.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
          local_50.TextData.Reference = local_90.TextData.Reference;
        }
        goto LAB_141e08a99;
      }
    }
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  return __return_storage_ptr__;
}

// ReadArray<FPluginReferenceDescriptor> @ 141e08af0

TOptional<FText> * __cdecl
UE::Projects::Private::ReadArray<FPluginReferenceDescriptor>
          (TOptional<FText> *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,wchar_t *param_2,
          TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar5;
  bool bVar6;
  int iVar7;
  TOptional<FText> *pTVar8;
  FString *pFVar9;
  FPluginReferenceDescriptor *pFVar10;
  FText *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  Number local_res10;
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_138;
  TOptional<FText>_u_0 local_128;
  ulonglong local_118;
  FText local_110;
  FText local_100;
  FString local_f0;
  FPluginReferenceDescriptor local_e0;
  
  local_res10 = ((param_1.value_)->data_).n;
  Json::GetArrayField(&local_138,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_res10,param_2);
  GVar5.value_ = local_138.TypedValue.value_;
  if (local_138.bIsSet != false) {
    if ((((local_138.TypedValue.value_)->data_).f.flags != 4) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x674,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TOptional<FText> *)(*pcVar4)();
      return pTVar8;
    }
    uVar12 = ((GVar5.value_)->data_).s.length;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar12) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,uVar12,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    if ((local_138.bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TOptional<FText> *)(*pcVar4)();
      return pTVar8;
    }
    GVar5.value_ = local_138.TypedValue.value_;
    if ((((local_138.TypedValue.value_)->data_).f.flags != 4) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x696,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TOptional<FText> *)(*pcVar4)();
      return pTVar8;
    }
    uVar13 = (ulonglong)((GVar5.value_)->data_).s.str & 0xffffffffffff;
    if ((((local_138.TypedValue.value_)->data_).f.flags != 4) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x699,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TOptional<FText> *)(*pcVar4)();
      return pTVar8;
    }
    pwVar2 = ((local_138.TypedValue.value_)->data_).s.str;
    uVar12 = ((local_138.TypedValue.value_)->data_).s.length;
    for (; uVar13 != ((ulonglong)pwVar2 & 0xffffffffffff) + (ulonglong)uVar12 * 0x10;
        uVar13 = uVar13 + 0x10) {
      iVar7 = param_3->ArrayNum;
      if (*(short *)(uVar13 + 0xe) != 3) {
        pFVar11 = GetArrayObjectTypeError(&local_100,param_2,iVar7);
        FText::FText((FText *)__return_storage_ptr__,pFVar11);
        if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TOptional<FText> *)(*pcVar4)();
          return pTVar8;
        }
LAB_141e08ef3:
        if (local_100.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8b8,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar7 + 1;
      pFVar3 = (param_3->AllocatorInstance).Data;
      pFVar9 = ::FString::FString(&local_f0,L"");
      pFVar10 = FPluginReferenceDescriptor::FPluginReferenceDescriptor
                          ((FPluginReferenceDescriptor *)(pFVar3 + (longlong)iVar7 * 0xb8),pFVar9,
                           false);
      if ((*(short *)(uVar13 + 0xe) != 3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                             ,0x667,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TOptional<FText> *)(*pcVar4)();
        return pTVar8;
      }
      local_118 = uVar13;
      Read((TOptional<FText> *)&local_128.TypedValue,
           (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_118,
           pFVar10);
      if (local_128.TypedValue.TextData.Reference != (ITextData *)0x0) {
        if ((param_3->ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TOptional<FText> *)(*pcVar4)();
          return pTVar8;
        }
        FPluginReferenceDescriptor::FPluginReferenceDescriptor
                  (&local_e0,
                   (FPluginReferenceDescriptor *)
                   ((param_3->AllocatorInstance).Data + (longlong)(param_3->ArrayNum + -1) * 0xb8));
        uVar12 = param_3->ArrayNum - 1;
        pFVar10 = (FPluginReferenceDescriptor *)
                  ((param_3->AllocatorInstance).Data + (longlong)(int)uVar12 * 0xb8);
        FPluginReferenceDescriptor::~FPluginReferenceDescriptor(pFVar10);
        iVar7 = param_3->ArrayNum + ~uVar12;
        if (iVar7 != 0) {
          memmove(pFVar10,pFVar10 + 1,(longlong)iVar7 * 0xb8);
        }
        param_3->ArrayNum = param_3->ArrayNum + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb8,8,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
        FPluginReferenceDescriptor::~FPluginReferenceDescriptor(&local_e0);
        if ((local_128.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TOptional<FText> *)(*pcVar4)();
          return pTVar8;
        }
        pFVar11 = GetArrayObjectChildParseError
                            (&local_110,param_2,param_3->ArrayNum,&local_128.TypedValue);
        FText::FText((FText *)__return_storage_ptr__,pFVar11);
        if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TOptional<FText> *)(*pcVar4)();
          return pTVar8;
        }
        local_100.TextData.Reference = (ITextData *)local_128.TypedValue.TextData.Reference;
        if (local_110.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
          local_100.TextData.Reference = (ITextData *)local_128.TypedValue.TextData.Reference;
        }
        goto LAB_141e08ef3;
      }
    }
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  return __return_storage_ptr__;
}

// ReadArrayFromDefaultJson<FLocalizationTargetDescriptor> @ 141e08f20

bool __cdecl
UE::Projects::Private::ReadArrayFromDefaultJson<FLocalizationTargetDescriptor>
          (FJsonObject *param_1,wchar_t *param_2,
          TArray<FLocalizationTargetDescriptor,TSizedDefaultAllocator<32>_> *param_3,FText *param_4)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res10;
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 != '\0') {
    Json::GetRootObject(&local_88,
                        (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                         *)&local_78.s);
    if (local_88.bIsSet != false) {
      local_res10 = local_88.TypedValue.value_;
      ReadArray<FLocalizationTargetDescriptor>
                ((TOptional<FText> *)&local_98.TypedValue,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_res10,param_2,param_3);
      if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_4 != (FText *)0x0) {
          FText::operator=(param_4,&local_98.TypedValue);
        }
        if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (local_18 == '\0') {
        return bVar1;
      }
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      return bVar1;
    }
    if (local_18 != '\0') {
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
    }
  }
  return false;
}

// ReadArrayFromDefaultJson<FModuleDescriptor> @ 141e09080

bool __cdecl
UE::Projects::Private::ReadArrayFromDefaultJson<FModuleDescriptor>
          (FJsonObject *param_1,wchar_t *param_2,
          TArray<FModuleDescriptor,TSizedDefaultAllocator<32>_> *param_3,FText *param_4)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res10;
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 != '\0') {
    Json::GetRootObject(&local_88,
                        (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                         *)&local_78.s);
    if (local_88.bIsSet != false) {
      local_res10 = local_88.TypedValue.value_;
      ReadArray<FModuleDescriptor>
                ((TOptional<FText> *)&local_98.TypedValue,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_res10,param_2,param_3);
      if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_4 != (FText *)0x0) {
          FText::operator=(param_4,&local_98.TypedValue);
        }
        if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (local_18 == '\0') {
        return bVar1;
      }
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      return bVar1;
    }
    if (local_18 != '\0') {
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
    }
  }
  return false;
}

// ReadArrayFromDefaultJson<FPluginDisallowedDescriptor> @ 141e091e0

bool __cdecl
UE::Projects::Private::ReadArrayFromDefaultJson<FPluginDisallowedDescriptor>
          (FJsonObject *param_1,wchar_t *param_2,
          TArray<FPluginDisallowedDescriptor,TSizedDefaultAllocator<32>_> *param_3,FText *param_4)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res10;
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 != '\0') {
    Json::GetRootObject(&local_88,
                        (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                         *)&local_78.s);
    if (local_88.bIsSet != false) {
      local_res10 = local_88.TypedValue.value_;
      ReadArray<FPluginDisallowedDescriptor>
                ((TOptional<FText> *)&local_98.TypedValue,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_res10,param_2,param_3);
      if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_4 != (FText *)0x0) {
          FText::operator=(param_4,&local_98.TypedValue);
        }
        if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (local_18 == '\0') {
        return bVar1;
      }
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      return bVar1;
    }
    if (local_18 != '\0') {
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
    }
  }
  return false;
}

// ReadArrayFromDefaultJson<FPluginReferenceDescriptor> @ 141e09340

bool __cdecl
UE::Projects::Private::ReadArrayFromDefaultJson<FPluginReferenceDescriptor>
          (FJsonObject *param_1,wchar_t *param_2,
          TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_> *param_3,FText *param_4)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res10;
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 != '\0') {
    Json::GetRootObject(&local_88,
                        (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                         *)&local_78.s);
    if (local_88.bIsSet != false) {
      local_res10 = local_88.TypedValue.value_;
      ReadArray<FPluginReferenceDescriptor>
                ((TOptional<FText> *)&local_98.TypedValue,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_res10,param_2,param_3);
      if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_4 != (FText *)0x0) {
          FText::operator=(param_4,&local_98.TypedValue);
        }
        if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (local_18 == '\0') {
        return bVar1;
      }
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      return bVar1;
    }
    if (local_18 != '\0') {
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
    }
  }
  return false;
}

// ReadFromDefaultJson<FLocalizationTargetDescriptor> @ 141e094a0

bool __cdecl
UE::Projects::Private::ReadFromDefaultJson<FLocalizationTargetDescriptor>
          (FJsonObject *param_1,FLocalizationTargetDescriptor *param_2,FText *param_3)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res10;
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 != '\0') {
    Json::GetRootObject(&local_88,
                        (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                         *)&local_78.s);
    if (local_88.bIsSet != false) {
      local_res10 = local_88.TypedValue.value_;
      Read((TOptional<FText> *)&local_98.TypedValue,
           (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_res10
           ,param_2);
      if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_3 != (FText *)0x0) {
          FText::operator=(param_3,&local_98.TypedValue);
        }
        if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (local_18 == '\0') {
        return bVar1;
      }
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      return bVar1;
    }
    if (local_18 != '\0') {
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
    }
  }
  return false;
}

// ReadFromDefaultJson<FModuleDescriptor> @ 141e095f0

bool __cdecl
UE::Projects::Private::ReadFromDefaultJson<FModuleDescriptor>
          (FJsonObject *param_1,FModuleDescriptor *param_2,FText *param_3)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res10;
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 != '\0') {
    Json::GetRootObject(&local_88,
                        (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                         *)&local_78.s);
    if (local_88.bIsSet != false) {
      local_res10 = local_88.TypedValue.value_;
      Read((TOptional<FText> *)&local_98.TypedValue,
           (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_res10
           ,param_2);
      if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_3 != (FText *)0x0) {
          FText::operator=(param_3,&local_98.TypedValue);
        }
        if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (local_18 == '\0') {
        return bVar1;
      }
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      return bVar1;
    }
    if (local_18 != '\0') {
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
    }
  }
  return false;
}

// ReadFromDefaultJson<FPluginDescriptor> @ 141e09740

bool __cdecl
UE::Projects::Private::ReadFromDefaultJson<FPluginDescriptor>
          (FJsonObject *param_1,FPluginDescriptor *param_2,FText *param_3)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res10;
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 != '\0') {
    Json::GetRootObject(&local_88,
                        (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                         *)&local_78.s);
    if (local_88.bIsSet != false) {
      local_res10 = local_88.TypedValue.value_;
      Read((TOptional<FText> *)&local_98.TypedValue,
           (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_res10
           ,param_2);
      if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_3 != (FText *)0x0) {
          FText::operator=(param_3,&local_98.TypedValue);
        }
        if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (local_18 == '\0') {
        return bVar1;
      }
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      return bVar1;
    }
    if (local_18 != '\0') {
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
    }
  }
  return false;
}

// ReadFromDefaultJson<FPluginDisallowedDescriptor> @ 141e09890

bool __cdecl
UE::Projects::Private::ReadFromDefaultJson<FPluginDisallowedDescriptor>
          (FJsonObject *param_1,FPluginDisallowedDescriptor *param_2,FText *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FText *pFVar4;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res10;
  FText local_a8;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_98;
  Data local_88;
  void *local_70;
  void *local_60;
  void *local_58;
  char local_28;
  FText local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_88.s,param_1);
  if (local_28 != '\0') {
    Json::GetRootObject(&local_98,
                        (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                         *)&local_88.s);
    if (local_98.bIsSet != false) {
      local_res10 = local_98.TypedValue.value_;
      bVar2 = TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                 *)&local_res10,L"Name",&param_2->Name);
      if (bVar2) {
        local_a8.TextData.Reference = (ITextData *)0x0;
        local_a8.Flags = 0;
      }
      else {
        pFVar4 = FText::AsLocalizable_Advanced_LocText
                           (&local_18,L"PluginDisallowedDescriptor",L"FPluginDisallowedWithoutName",
                            L"Disallowed plugin must have a \'Name\' field");
        FText::FText(&local_a8,pFVar4);
        if ((local_a8.TextData.Reference == (ITextData *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 0x10))(local_18.TextData.Reference);
        }
      }
      if (local_a8.TextData.Reference == (ITextData *)0x0) {
        bVar2 = true;
      }
      else {
        if (param_3 != (FText *)0x0) {
          FText::operator=(param_3,&local_a8);
        }
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        bVar2 = false;
      }
      if (local_28 == '\0') {
        return bVar2;
      }
      if (local_70 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_88.s);
        local_88.n.i64 = (Number)0x0;
        local_88.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_70,1);
      free(local_58);
      ::operator_delete(local_60,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_88.s);
      return bVar2;
    }
    if (local_28 != '\0') {
      if (local_70 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_88.s);
        local_88.n.i64 = (Number)0x0;
        local_88.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_70,1);
      free(local_58);
      ::operator_delete(local_60,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_88.s);
    }
  }
  return false;
}

// ReadFromDefaultJson<FPluginManifest> @ 141e09a60

bool __cdecl
UE::Projects::Private::ReadFromDefaultJson<FPluginManifest>
          (FJsonObject *param_1,FPluginManifest *param_2,FText *param_3)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res10;
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 != '\0') {
    Json::GetRootObject(&local_88,
                        (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                         *)&local_78.s);
    if (local_88.bIsSet != false) {
      local_res10 = local_88.TypedValue.value_;
      Read((TOptional<FText> *)&local_98.TypedValue,
           (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_res10
           ,param_2);
      if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_3 != (FText *)0x0) {
          FText::operator=(param_3,&local_98.TypedValue);
        }
        if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (local_18 == '\0') {
        return bVar1;
      }
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      return bVar1;
    }
    if (local_18 != '\0') {
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
    }
  }
  return false;
}

// ReadFromDefaultJson<FPluginReferenceDescriptor> @ 141e09bb0

bool __cdecl
UE::Projects::Private::ReadFromDefaultJson<FPluginReferenceDescriptor>
          (FJsonObject *param_1,FPluginReferenceDescriptor *param_2,FText *param_3)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res10;
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 != '\0') {
    Json::GetRootObject(&local_88,
                        (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                         *)&local_78.s);
    if (local_88.bIsSet != false) {
      local_res10 = local_88.TypedValue.value_;
      Read((TOptional<FText> *)&local_98.TypedValue,
           (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_res10
           ,param_2);
      if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_3 != (FText *)0x0) {
          FText::operator=(param_3,&local_98.TypedValue);
        }
        if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (local_18 == '\0') {
        return bVar1;
      }
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      return bVar1;
    }
    if (local_18 != '\0') {
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
    }
  }
  return false;
}

// TryConvertFromDouble<int> @ 141e0b390

bool __cdecl UE::Projects::Private::TryConvertFromDouble<int>(double param_1,int *param_2)

{
  double dVar1;
  
  if ((__real_c1e0000000000000 <= param_1) && (param_1 <= __real_41dfffffffc00000)) {
    dVar1 = FMath::RoundHalfFromZero(param_1);
    *param_2 = (int)dVar1;
    return true;
  }
  return false;
}

// TryConvertFromDouble<unsigned_int> @ 141e0b3d0

bool __cdecl UE::Projects::Private::TryConvertFromDouble<unsigned_int>(double param_1,uint *param_2)

{
  double dVar1;
  
  if ((0.0 <= param_1) && (param_1 <= __real_41efffffffe00000)) {
    dVar1 = FMath::RoundHalfFromZero(param_1);
    *param_2 = (uint)(longlong)dVar1;
    return true;
  }
  return false;
}

// TryConvertFromDouble<__int64> @ 141e0b410

bool __cdecl UE::Projects::Private::TryConvertFromDouble<__int64>(double param_1,long64 *param_2)

{
  double dVar1;
  
  if ((__real_c3e0000000000000 <= param_1) && (param_1 < __real_43e0000000000000)) {
    dVar1 = FMath::RoundHalfFromZero(param_1);
    *param_2 = (longlong)dVar1;
    return true;
  }
  return false;
}

// TryConvertFromDouble<unsigned___int64> @ 141e0b450

bool __cdecl
UE::Projects::Private::TryConvertFromDouble<unsigned___int64>(double param_1,ulong64 *param_2)

{
  longlong lVar1;
  double dVar2;
  
  if ((0.0 <= param_1) && (param_1 < __real_43f0000000000000)) {
    dVar2 = FMath::RoundHalfFromZero(param_1);
    lVar1 = 0;
    if ((__real_43e0000000000000 <= dVar2) &&
       (dVar2 = dVar2 - __real_43e0000000000000, dVar2 < __real_43e0000000000000)) {
      lVar1 = -0x8000000000000000;
    }
    *param_2 = (longlong)dVar2 + lVar1;
    return true;
  }
  return false;
}

// TryGetEnumArrayField<enum_EBuildConfiguration> @ 141e0b4c0

bool __cdecl
UE::Projects::Private::TryGetEnumArrayField<enum_EBuildConfiguration>
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,wchar_t *param_2,TArray<EBuildConfiguration,TSizedDefaultAllocator<32>_> *param_3
          )

{
  int *piVar1;
  ushort *puVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  wchar_t *pwVar10;
  ushort *puVar11;
  ushort *puVar12;
  Number local_res8;
  FScriptContainerElement local_48 [8];
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_40;
  
  local_res8 = ((param_1.value_)->data_).n;
  Json::GetArrayField(&local_40,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_res8,param_2);
  GVar6.value_ = local_40.TypedValue.value_;
  if (local_40.bIsSet == false) {
    return false;
  }
  if ((((local_40.TypedValue.value_)->data_).f.flags != 4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsArray()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x674,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar3 = ((GVar6.value_)->data_).s.length;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < (int)uVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar3,&param_3->AllocatorInstance,0,piVar1);
  }
  if ((local_40.bIsSet == false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  GVar6.value_ = local_40.TypedValue.value_;
  if ((((local_40.TypedValue.value_)->data_).f.flags != 4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsArray()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x696,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  puVar11 = (ushort *)((ulonglong)((GVar6.value_)->data_).s.str & 0xffffffffffff);
  if ((((local_40.TypedValue.value_)->data_).f.flags != 4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsArray()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x699,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  puVar12 = (ushort *)
            (((ulonglong)((local_40.TypedValue.value_)->data_).s.str & 0xffffffffffff) +
            (ulonglong)((local_40.TypedValue.value_)->data_).s.length * 0x10);
  if (puVar11 != puVar12) {
    puVar11 = puVar11 + 7;
    do {
      if ((*puVar11 >> 10 & 1) != 0) {
        if ((*puVar11 >> 0xc & 1) == 0) {
          pwVar10 = (wchar_t *)(*(ulonglong *)(puVar11 + -3) & 0xffffffffffff);
        }
        else {
          pwVar10 = (wchar_t *)(puVar11 + -7);
        }
        bVar7 = LexTryParseString((EBuildConfiguration *)local_48,pwVar10);
        if (bVar7) {
          pFVar4 = (param_3->AllocatorInstance).Data;
          if (((pFVar4 <= local_48) && (local_48 < pFVar4 + *piVar1)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          iVar9 = param_3->ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&param_3->AllocatorInstance,piVar1);
          }
          param_3->ArrayNum = iVar9 + 1;
          (param_3->AllocatorInstance).Data[iVar9] = local_48[0];
        }
      }
      puVar2 = puVar11 + 1;
      puVar11 = puVar11 + 8;
    } while (puVar2 != puVar12);
  }
  return true;
}

// TryGetEnumArrayField<enum_EBuildTargetType> @ 141e0b770

bool __cdecl
UE::Projects::Private::TryGetEnumArrayField<enum_EBuildTargetType>
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,wchar_t *param_2,TArray<EBuildTargetType,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  ushort *puVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  wchar_t *pwVar10;
  ushort *puVar11;
  ushort *puVar12;
  Number local_res8;
  FScriptContainerElement local_48 [8];
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_40;
  
  local_res8 = ((param_1.value_)->data_).n;
  Json::GetArrayField(&local_40,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_res8,param_2);
  GVar6.value_ = local_40.TypedValue.value_;
  if (local_40.bIsSet == false) {
    return false;
  }
  if ((((local_40.TypedValue.value_)->data_).f.flags != 4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsArray()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x674,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar3 = ((GVar6.value_)->data_).s.length;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < (int)uVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar3,&param_3->AllocatorInstance,0,piVar1);
  }
  if ((local_40.bIsSet == false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  GVar6.value_ = local_40.TypedValue.value_;
  if ((((local_40.TypedValue.value_)->data_).f.flags != 4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsArray()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x696,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  puVar11 = (ushort *)((ulonglong)((GVar6.value_)->data_).s.str & 0xffffffffffff);
  if ((((local_40.TypedValue.value_)->data_).f.flags != 4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsArray()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x699,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  puVar12 = (ushort *)
            (((ulonglong)((local_40.TypedValue.value_)->data_).s.str & 0xffffffffffff) +
            (ulonglong)((local_40.TypedValue.value_)->data_).s.length * 0x10);
  if (puVar11 != puVar12) {
    puVar11 = puVar11 + 7;
    do {
      if ((*puVar11 >> 10 & 1) != 0) {
        if ((*puVar11 >> 0xc & 1) == 0) {
          pwVar10 = (wchar_t *)(*(ulonglong *)(puVar11 + -3) & 0xffffffffffff);
        }
        else {
          pwVar10 = (wchar_t *)(puVar11 + -7);
        }
        bVar7 = LexTryParseString((EBuildTargetType *)local_48,pwVar10);
        if (bVar7) {
          pFVar4 = (param_3->AllocatorInstance).Data;
          if (((pFVar4 <= local_48) && (local_48 < pFVar4 + *piVar1)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          iVar9 = param_3->ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&param_3->AllocatorInstance,piVar1);
          }
          param_3->ArrayNum = iVar9 + 1;
          (param_3->AllocatorInstance).Data[iVar9] = local_48[0];
        }
      }
      puVar2 = puVar11 + 1;
      puVar11 = puVar11 + 8;
    } while (puVar2 != puVar12);
  }
  return true;
}

// TryGetIntHelper<int> @ 141e0ba20

bool __cdecl
UE::Projects::Private::TryGetIntHelper<int>
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,wchar_t *param_2,wchar_t *param_3,int *param_4)

{
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this;
  ushort uVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  ulong64 uVar7;
  wchar_t *_Str;
  double dVar8;
  longlong local_res8;
  
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_1.value_,(wchar_t *)&local_res8);
  puVar2 = *(uint **)&(param_1.value_)->data_;
  if (*(short *)((longlong)puVar2 + 0xe) != 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (local_res8 != (ulonglong)*puVar2 * 0x20 + (*(ulonglong *)(puVar2 + 2) & 0xffffffffffff)) {
    uVar1 = *(ushort *)(local_res8 + 0x1e);
    this = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
           (local_res8 + 0x10);
    if ((char)uVar1 < '\0') {
      iVar6 = (int)*(longlong *)&this->data_;
      if (*(longlong *)&this->data_ == (longlong)iVar6) {
        *param_4 = iVar6;
        return true;
      }
    }
    else if ((uVar1 >> 8 & 1) == 0) {
      if ((uVar1 >> 9 & 1) == 0) {
        if ((uVar1 & 8) != 0) {
          *param_4 = (uint)(uVar1 == 10);
          return true;
        }
        if ((uVar1 >> 10 & 1) != 0) {
          _Str = rapidjson::
                 GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
                 GetString(this);
          iVar6 = _wtoi(_Str);
          *param_4 = iVar6;
          return true;
        }
      }
      else {
        dVar8 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ::GetDouble(this);
        if ((__real_c1e0000000000000 <= dVar8) && (dVar8 <= __real_41dfffffffc00000)) {
          dVar8 = FMath::RoundHalfFromZero(dVar8);
          *param_4 = (int)dVar8;
          return true;
        }
      }
    }
    else {
      uVar7 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
              GetUint64(this);
      iVar6 = (int)uVar7;
      if ((uVar7 == (longlong)iVar6) && (-1 < iVar6)) {
        *param_4 = iVar6;
        return true;
      }
    }
  }
  return false;
}

// TryGetIntHelper<unsigned_int> @ 141e0bb80

bool __cdecl
UE::Projects::Private::TryGetIntHelper<unsigned_int>
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,wchar_t *param_2,wchar_t *param_3,uint *param_4)

{
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this;
  ushort uVar1;
  uint *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ulong64 uVar7;
  wchar_t *_Str;
  longlong lVar8;
  double dVar9;
  longlong local_res8;
  
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_1.value_,(wchar_t *)&local_res8);
  puVar2 = *(uint **)&(param_1.value_)->data_;
  if (*(short *)((longlong)puVar2 + 0xe) != 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if (local_res8 != (ulonglong)*puVar2 * 0x20 + (*(ulonglong *)(puVar2 + 2) & 0xffffffffffff)) {
    uVar1 = *(ushort *)(local_res8 + 0x1e);
    this = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
           (local_res8 + 0x10);
    if ((char)uVar1 < '\0') {
      uVar3 = *(ulonglong *)&this->data_;
      if ((uVar3 == (uVar3 & 0xffffffff)) && (-1 < (longlong)uVar3)) {
        *param_4 = (uint)uVar3;
        return true;
      }
    }
    else if ((uVar1 >> 8 & 1) == 0) {
      if ((uVar1 >> 9 & 1) == 0) {
        if ((uVar1 & 8) != 0) {
          *param_4 = (uint)(uVar1 == 10);
          return true;
        }
        if ((uVar1 >> 10 & 1) != 0) {
          _Str = rapidjson::
                 GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
                 GetString(this);
          lVar8 = _wtoi64(_Str);
          *param_4 = (uint)lVar8;
          return true;
        }
      }
      else {
        dVar9 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ::GetDouble(this);
        if ((0.0 <= dVar9) && (dVar9 <= __real_41efffffffe00000)) {
          dVar9 = FMath::RoundHalfFromZero(dVar9);
          *param_4 = (uint)(longlong)dVar9;
          return true;
        }
      }
    }
    else {
      uVar7 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
              GetUint64(this);
      if (uVar7 == (uVar7 & 0xffffffff)) {
        *param_4 = (uint)uVar7;
        return true;
      }
    }
  }
  return false;
}

// operator() @ 141e11250

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FText> * __thiscall
`UE::Projects::Private::Read'::__l2::<lambda_1>::operator()
          (void *this,TOptional<FText> *__return_storage_ptr__,wchar_t *param_1,
          TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  TOptional<FText> *pTVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  ForAnyElementType this_00;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  FString local_c8;
  int local_b8 [2];
  FString local_b0;
  undefined8 local_a0;
  FString *local_98;
  FString local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  FTextFormat local_40;
  
  local_a0 = *(undefined8 *)((longlong)this + 8);
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  UE::Projects::Private::TryGetStringArrayField
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_a0,
             param_1,&local_d8);
  iVar2 = local_d8.ArrayNum;
  pFVar13 = local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayNum * 0x10;
  this_00.Data = local_d8.AllocatorInstance.Data;
  while( true ) {
    if (local_d8.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (this_00.Data == pFVar13) {
      (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
      (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
      goto LAB_141e114ab;
    }
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.Data.ArrayNum = 0;
    local_b0.Data.ArrayMax = 0;
    ::FString::FString(&local_90,L":");
    bVar3 = ::FString::Split((FString *)this_00.Data,&local_90,&local_c8,&local_b0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (!bVar3) break;
    if (local_c8.Data.ArrayNum == 0) {
      pwVar12 = L"";
      iVar5 = 0;
    }
    else {
      iVar5 = local_c8.Data.ArrayNum + -1;
      pwVar12 = (wchar_t *)local_c8.Data.AllocatorInstance.Data;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar12);
    iVar5 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)param_2,uVar4,&local_c8);
    if ((iVar5 == -1) || (lVar11 = *(longlong *)param_2 + (longlong)iVar5 * 0x28, lVar11 == 0)) {
      local_98 = &local_c8;
      TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)param_2,(uint)local_b8,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar4,
                 (bool *)&local_98);
      lVar11 = *(longlong *)param_2 + (longlong)local_b8[0] * 0x28;
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar11 + 0x10),&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    this_00.Data = this_00.Data + 0x10;
  }
  pFVar6 = FText::FromString(&local_60,(FString *)this_00.Data);
  pFVar7 = FText::FromName(&local_50,*(FName **)this);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_70,L"ModuleDescriptor",L"ModuleWithInvalidPlatformArchitecture",
                      L"Module entry \'{0}\' specified an unrecognized Platform:Architecture pair \'{1}\'"
                     );
  pFVar9 = FTextFormat::FTextFormat(&local_40,pFVar8,Default);
  pFVar6 = FText::Format<FText,FText>(&local_80,pFVar9,pFVar7,pFVar6);
  FText::FText((FText *)__return_storage_ptr__,pFVar6);
  if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar10 = (TOptional<FText> *)(*pcVar1)();
      return pTVar10;
    }
  }
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
LAB_141e114ab:
  DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CheckForDeprecatedPlugin @ 141e15a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::PluginManager::Private::CheckForDeprecatedPlugin(FPlugin *param_1)

{
  if ((1 < (param_1->Descriptor).DeprecatedEngineVersion.Data.ArrayNum) &&
     (3 < (byte)LogPluginManager._0_1_)) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPluginManager);
    return;
  }
  return;
}

// ConvertToStringHelper @ 141e17a00

bool __cdecl
UE::Projects::Private::ConvertToStringHelper
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *param_1,
          FString *param_2)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  double dVar5;
  FString local_28;
  FString local_18;
  
  uVar1 = (param_1->data_).f.flags;
  if ((uVar1 >> 10 & 1) != 0) {
    if ((uVar1 >> 0xc & 1) == 0) {
      param_1 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                ((ulonglong)(param_1->data_).s.str & 0xffffffffffff);
    }
    ::FString::operator=(param_2,(wchar_t *)param_1);
    return true;
  }
  if ((char)uVar1 < '\0') {
    pFVar3 = ::FString::SanitizeFloat(&local_28,(double)*(longlong *)&param_1->data_,0);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    if (param_2 != pFVar3) {
      pFVar2 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_2->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (param_2->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((uVar1 >> 9 & 1) == 0) {
      if ((uVar1 & 8) == 0) {
        ::FString::Reset(param_2,0);
        return false;
      }
      pwVar4 = L"false";
      if (uVar1 == 10) {
        pwVar4 = L"true";
      }
      ::FString::operator=(param_2,pwVar4);
      return true;
    }
    dVar5 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            GetDouble(param_1);
    pFVar3 = ::FString::SanitizeFloat(&local_18,dVar5,0);
    ::FString::operator=(param_2,pFVar3);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// DeserializeJson @ 141e19000

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedPtr<FJsonObject,1> * __cdecl
UE::PluginDescriptor::Internal::DeserializeJson
          (TSharedPtr<FJsonObject,1> *__return_storage_ptr__,FString *param_1,FText *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  TSharedPtr<FJsonObject,1> local_b8;
  StackState local_a8;
  TSharedRef<TJsonReader<wchar_t>,1> local_70;
  FText local_60;
  FText local_50;
  FText local_40;
  FTextFormat local_30;
  
  local_b8.Object = (FJsonObject *)0x0;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TJsonReaderFactory<wchar_t>::Create(&local_70,param_1);
  local_a8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Identifier.Data.ArrayNum = 0;
  local_a8.Identifier.Data.ArrayMax = 0;
  local_a8.Object.Object = (FJsonObject *)0x0;
  local_a8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Array.ArrayNum = 0;
  local_a8.Array.ArrayMax = 0;
  bVar1 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    (local_70.Object,&local_a8,None);
  if (bVar1) {
    bVar1 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_a8,&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data,
               local_a8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_a8.Array.AllocatorInstance.Data);
    }
    if (local_a8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_b8.Object != (FJsonObject *)0x0)) {
      __return_storage_ptr__->Object = local_b8.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_b8.SharedReferenceCount.ReferenceController;
      local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_b8.Object = (FJsonObject *)0x0;
      goto LAB_141e1911f;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data,
               local_a8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_a8.Array.AllocatorInstance.Data);
    }
    if (local_a8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Identifier.Data.AllocatorInstance.Data);
    }
  }
  if (param_2 != (FText *)0x0) {
    pFVar2 = FText::FromString(&local_40,&(local_70.Object)->ErrorMessage);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_50,L"PluginDescriptor",L"FailedToReadDescriptorFile",
                        L"Failed to read file. {0}");
    pFVar4 = FTextFormat::FTextFormat(&local_30,pFVar3,Default);
    pFVar2 = FText::Format<FText>(&local_60,pFVar4,pFVar2);
    FText::operator=(param_2,pFVar2);
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
    }
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
  }
  __return_storage_ptr__->Object = (FJsonObject *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_141e1911f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetAdditionalExternalPluginsByEnvVar @ 141e21be0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UE::PluginManager::Private::GetAdditionalExternalPluginsByEnvVar
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetArrayObjectChildParseError @ 141e21cc0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UE::Projects::Private::GetArrayObjectChildParseError
          (FText *__return_storage_ptr__,wchar_t *param_1,int param_2,FText *param_3)

{
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  undefined1 local_res8 [8];
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  local_48.TextData.Reference = (param_3->TextData).Reference;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 8))
              (local_48.TextData.Reference,local_res8);
  }
  local_48.Flags = param_3->Flags;
  pFVar1 = FText::FromString(&local_28,param_1);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"RapidJsonPluginLoading",L"InvalidPluginParseArrayEntry",
                      L"\'{0}[{1}]\': {2}");
  pFVar3 = FTextFormat::FTextFormat(&local_18,pFVar2,Default);
  FText::Format<FText,int,FText>(__return_storage_ptr__,pFVar3,pFVar1,param_2,&local_48);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetArrayObjectTypeError @ 141e21d90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UE::Projects::Private::GetArrayObjectTypeError
          (FText *__return_storage_ptr__,wchar_t *param_1,int param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_98;
  FTextFormat local_88;
  FFormatArgumentValue local_78;
  undefined4 local_58;
  longlong local_50;
  longlong *local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar4 = FText::FromString(&local_28,param_1);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"RapidJsonPluginLoading",L"InvalidPluginArrayEntry",
                      L"Field \'{0}[{1}]\' is a non-object entry");
  pFVar6 = FTextFormat::FTextFormat(&local_18,pFVar5,Default);
  local_78.Type = Text;
  FText::FText((FText *)&local_78.TextValue,pFVar4);
  if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
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
  local_58 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 2;
  local_50 = (longlong)param_2;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_98.AllocatorInstance.Data,&local_78,2);
  local_88.TextFormatData.Object = (pFVar6->TextFormatData).Object;
  local_88.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar6->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_88.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(__return_storage_ptr__,&local_88,&local_98);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FFormatArgumentValue *)local_98.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_78.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar6->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (pFVar4->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPluginPathsByEnv @ 141e25710

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UE::PluginManager::Private::GetPluginPathsByEnv
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,wchar_t *param_1)

{
  FString local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FWindowsPlatformMisc::GetEnvironmentVariable(&local_18,param_1);
  if (1 < local_18.Data.ArrayNum) {
    ::FString::ParseIntoArray(&local_18,__return_storage_ptr__,L";",true);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ParseProjectDirFromCommandline @ 141e2aee0

void __cdecl UE::ProjectUtilities::ParseProjectDirFromCommandline(int param_1,wchar_t **param_2)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  int iVar5;
  ForAnyElementType FVar6;
  int iVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 < 2) {
    return;
  }
  iVar7 = 0;
  ::FString::FString(&local_28,param_2[1]);
  bVar2 = false;
  if ((1 < local_28.Data.ArrayNum) &&
     (bVar1 = ::FString::StartsWith(&local_28,L"-",1,IgnoreCase), bVar2 = false, !bVar1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(&ProjectExtension,L"uproject");
      atexit(`FProjectDescriptor::GetExtension'::__l2::
             _dynamic_atexit_destructor_for__ProjectExtension__);
      _Init_thread_footer(&::_TSS0);
    }
    FVar6.Data = ProjectExtension.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = ProjectExtension.Data.ArrayNum;
    local_38.Data.ArrayNum = iVar5;
    if (iVar5 == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,(ForAnyElementType *)&local_38,iVar5,&local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,FVar6.Data,(longlong)iVar5 * 2);
    }
    bVar2 = true;
    pwVar4 = L"";
    if (local_38.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)local_38.Data.AllocatorInstance.Data;
      iVar7 = local_38.Data.ArrayNum + -1;
    }
    bVar1 = ::FString::EndsWith(&local_28,pwVar4,iVar7,IgnoreCase);
    if (bVar1) {
      bVar1 = true;
      goto LAB_141e2afff;
    }
  }
  bVar1 = false;
LAB_141e2afff:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    FPaths::GetPath(&local_48,&local_28);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar6.Data = local_48.Data.AllocatorInstance.Data;
    }
    pFVar3 = FFileManagerGeneric::DefaultConvertToRelativePath(&local_38,(wchar_t *)FVar6.Data);
    if (&local_48 != pFVar3) {
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_48.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_48.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FPaths::NormalizeFilename(&local_48);
    bVar2 = ::FString::EndsWith(&local_48,L"/",1,IgnoreCase);
    if (!bVar2) {
      ::FString::AppendChars(&local_48,L"/",1);
    }
    FGenericPlatformMisc::SetOverrideProjectDir(&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// Read @ 141e2e380

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FText> * __cdecl
UE::Projects::Private::Read
          (TOptional<FText> *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,FLocalizationTargetDescriptor *param_2)

{
  code *pcVar1;
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar2;
  bool bVar3;
  int iVar4;
  FText *pFVar5;
  TOptional<FText> *pTVar6;
  wchar_t *pwVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  Type TVar11;
  Type TVar12;
  ForAnyElementType FVar13;
  wchar_t *pwVar14;
  Type local_res10 [2];
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  local_res18;
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  local_res20;
  FString local_128;
  FString local_118;
  Number local_108;
  longlong local_100;
  longlong local_f8;
  Type *local_f0;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FTextFormat local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_108 = ((param_1.value_)->data_).n;
  bVar3 = TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                             *)&local_108,L"Name",&param_2->Name);
  if (!bVar3) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_e8,L"LocalizationDescriptor",L"TargetWithoutAName",
                        L"Found a \'Localization Target\' entry with a missing \'Name\' field");
    FText::FText((FText *)__return_storage_ptr__,pFVar5);
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TOptional<FText> *)(*pcVar1)();
      return pTVar6;
    }
    if (local_e8.TextData.Reference == (ITextData *)0x0) {
      return __return_storage_ptr__;
    }
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    return __return_storage_ptr__;
  }
  local_res18.value_ =
       *(GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> **)
        &(param_1.value_)->data_;
  pwVar14 = (wchar_t *)0x0;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember(&local_res18,(wchar_t *)&local_100);
  GVar2.value_ = local_res18.value_;
  if ((((local_res18.value_)->data_).f.flags != 3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x500,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TOptional<FText> *)(*pcVar1)();
    return pTVar6;
  }
  if ((local_100 !=
       ((ulonglong)((GVar2.value_)->data_).s.str & 0xffffffffffff) +
       (ulonglong)((GVar2.value_)->data_).s.length * 0x20) &&
     (bVar3 = ConvertToStringHelper
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)(local_100 + 0x10),&local_128), bVar3)) {
    pwVar7 = pwVar14;
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      pwVar7 = (wchar_t *)0x0;
      FVar13.Data = local_128.Data.AllocatorInstance.Data;
    }
    do {
      TVar11 = (Type)pwVar7;
      pwVar7 = ELocalizationTargetDescriptorLoadingPolicy::ToString(TVar11);
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,pwVar7);
      if (iVar4 == 0) break;
      TVar11 = TVar11 + Always;
      pwVar7 = (wchar_t *)(ulonglong)TVar11;
    } while ((int)TVar11 < 6);
    param_2->LoadingPolicy = TVar11;
    if (TVar11 == Max) {
      pFVar5 = FText::FromString(&local_98,&local_128);
      pFVar8 = FText::FromString(&local_88,&param_2->Name);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_c8,L"LocalizationDescriptor",L"TargetWithInvalidLoadingPolicy",
                          L"Localization Target entry \'{0}\' specified an unrecognized target LoadingPolicy \'{1}\'"
                         );
      pFVar10 = FTextFormat::FTextFormat(&local_78,pFVar9,Default);
      pFVar5 = FText::Format<FText,FText>(&local_d8,pFVar10,pFVar8,pFVar5);
      FText::FText((FText *)__return_storage_ptr__,pFVar5);
      if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TOptional<FText> *)(*pcVar1)();
        return pTVar6;
      }
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      goto LAB_141e2e7b6;
    }
  }
  local_res20.value_ =
       *(GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> **)
        &(param_1.value_)->data_;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember(&local_res20,(wchar_t *)&local_f8);
  GVar2.value_ = local_res20.value_;
  if ((((local_res20.value_)->data_).f.flags != 3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x500,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TOptional<FText> *)(*pcVar1)();
    return pTVar6;
  }
  if ((local_f8 ==
       ((ulonglong)((GVar2.value_)->data_).s.str & 0xffffffffffff) +
       (ulonglong)((GVar2.value_)->data_).s.length * 0x20) ||
     (bVar3 = ConvertToStringHelper
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)(local_f8 + 0x10),&local_118), !bVar3)) {
LAB_141e2e7a0:
    (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  }
  else {
    pwVar7 = pwVar14;
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      pwVar7 = (wchar_t *)0x0;
      FVar13.Data = local_118.Data.AllocatorInstance.Data;
    }
    do {
      TVar12 = (Type)pwVar7;
      local_res10[0] = TVar12;
      if (TVar12 == Never) {
        pwVar7 = L"Never";
      }
      else if (TVar12 == User) {
        pwVar7 = L"User";
      }
      else if (TVar12 == Auto) {
        pwVar7 = L"Auto";
      }
      else {
        local_f0 = local_res10;
        `ELocalizationConfigGenerationPolicy::ToString'::__l4::<lambda_1>::operator()(&local_f0);
        pwVar7 = pwVar14;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,pwVar7);
      if (iVar4 == 0) break;
      TVar12 = TVar12 + User;
      pwVar7 = (wchar_t *)(ulonglong)TVar12;
    } while ((int)TVar12 < 3);
    param_2->ConfigGenerationPolicy = TVar12;
    if (TVar12 != Max) goto LAB_141e2e7a0;
    pFVar5 = FText::FromString(&local_68,&local_118);
    pFVar8 = FText::FromString(&local_58,&param_2->Name);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_a8,L"LocalizationDescriptor",L"TargetWithInvalidGenerationPolicy",
                        L"Localization Target entry \'{0}\' specified an unrecognized target GenerationPolicy\'{1}\'"
                       );
    pFVar10 = FTextFormat::FTextFormat(&local_48,pFVar9,Default);
    pFVar5 = FText::Format<FText,FText>(&local_b8,pFVar10,pFVar8,pFVar5);
    FText::FText((FText *)__return_storage_ptr__,pFVar5);
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TOptional<FText> *)(*pcVar1)();
      return pTVar6;
    }
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
LAB_141e2e7b6:
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Read @ 141e2e800

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FText> * __cdecl
UE::Projects::Private::Read
          (TOptional<FText> *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,FModuleDescriptor *param_2)

{
  Number NVar1;
  code *pcVar2;
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar3;
  bool bVar4;
  int iVar5;
  TOptional<FText> *pTVar6;
  FName *pFVar7;
  wchar_t *pwVar8;
  FText *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  TOptional<FText>_u_0 *pTVar13;
  ForAnyElementType FVar14;
  Type TVar15;
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  local_res10 [2];
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  local_res20;
  TOptional<FText>_u_0 local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  local_218;
  Number local_210;
  Number local_208;
  Number local_200;
  Number local_1f8;
  Number local_1f0;
  Number local_1e8;
  Number local_1e0;
  Number local_1d8;
  Number local_1d0;
  Number local_1c8;
  Number local_1c0;
  Number local_1b8;
  Number local_1b0;
  Number local_1a8;
  Number local_1a0;
  Number local_198;
  Number local_190;
  Number local_188;
  Number local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  Number local_160;
  FModuleDescriptor *local_158;
  Number local_150;
  FName local_148;
  FText local_140;
  FText local_130;
  FText local_120;
  FText local_110;
  TOptional<FText>_u_0 local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FTextFormat local_a0;
  FText local_90;
  FText local_80;
  FTextFormat local_70;
  FText local_60;
  FTextFormat local_50;
  
  local_res10[0].value_ =
       *(GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> **)
        &(param_1.value_)->data_;
  local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.Data.ArrayNum = 0;
  local_238.Data.ArrayMax = 0;
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember(local_res10,(wchar_t *)&local_178);
  GVar3.value_ = local_res10[0].value_;
  if ((((local_res10[0].value_)->data_).f.flags != 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x500,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TOptional<FText> *)(*pcVar2)();
    return pTVar6;
  }
  if ((local_178 ==
       ((ulonglong)((GVar3.value_)->data_).s.str & 0xffffffffffff) +
       (ulonglong)((GVar3.value_)->data_).s.length * 0x20) ||
     (bVar4 = ConvertToStringHelper
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)(local_178 + 0x10),&local_238), !bVar4)) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_d0,L"ModuleDescriptor",L"ModuleWithoutAName",
                        L"Found a \'Module\' entry with a missing \'Name\' field");
    FText::FText((FText *)__return_storage_ptr__,pFVar9);
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TOptional<FText> *)(*pcVar2)();
      return pTVar6;
    }
    if (local_d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
    }
    goto LAB_141e2f066;
  }
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_238.Data.ArrayNum != 0) {
    FVar14.Data = local_238.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_148,(wchar_t *)FVar14.Data);
  param_2->Name = *pFVar7;
  local_res20.value_ =
       *(GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> **)
        &(param_1.value_)->data_;
  local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.Data.ArrayNum = 0;
  local_248.Data.ArrayMax = 0;
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember(&local_res20,(wchar_t *)&local_170);
  GVar3.value_ = local_res20.value_;
  if ((((local_res20.value_)->data_).f.flags != 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x500,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TOptional<FText> *)(*pcVar2)();
    return pTVar6;
  }
  if ((local_170 ==
       ((ulonglong)((GVar3.value_)->data_).s.str & 0xffffffffffff) +
       (ulonglong)((GVar3.value_)->data_).s.length * 0x20) ||
     (bVar4 = ConvertToStringHelper
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)(local_170 + 0x10),&local_248), !bVar4)) {
    pFVar9 = FText::FromName(&local_60,&param_2->Name);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_e0,L"ModuleDescriptor",L"ModuleWithoutAType",
                         L"Found Module entry \'{0}\' with a missing \'Type\' field");
    pFVar12 = FTextFormat::FTextFormat(&local_50,pFVar10,Default);
    pFVar9 = FText::Format<FText>(&local_f0,pFVar12,pFVar9);
    FText::FText((FText *)__return_storage_ptr__,pFVar9);
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TOptional<FText> *)(*pcVar2)();
      return pTVar6;
    }
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
LAB_141e2ea35:
    if (local_e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
    }
  }
  else {
    FVar14.Data = (FScriptContainerElement *)L"";
    TVar15 = EarliestPossible;
    if (local_248.Data.ArrayNum != 0) {
      FVar14.Data = local_248.Data.AllocatorInstance.Data;
      TVar15 = EarliestPossible;
    }
    do {
      pwVar8 = EHostType::ToString(TVar15);
      iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar14.Data,pwVar8);
      if (iVar5 == 0) break;
      TVar15 = TVar15 + PostConfigInit;
    } while ((int)TVar15 < 0xe);
    param_2->Type = TVar15;
    if (TVar15 == (PostEngineInit|Default)) {
      pFVar9 = FText::FromString(&local_c0,&local_248);
      pFVar10 = FText::FromName(&local_b0,&param_2->Name);
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_130,L"ModuleDescriptor",L"ModuleWithInvalidType",
                           L"Module entry \'{0}\' specified an unrecognized module Type \'{1}\'");
      pFVar12 = FTextFormat::FTextFormat(&local_a0,pFVar11,Default);
      pFVar9 = FText::Format<FText,FText>(&local_140,pFVar12,pFVar10,pFVar9);
      TOptional<FText>::TOptional<FText>(__return_storage_ptr__,pFVar9);
      local_e0.TextData.Reference = local_130.TextData.Reference;
      if (local_140.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
        local_e0.TextData.Reference = local_130.TextData.Reference;
      }
      goto LAB_141e2ea35;
    }
    local_218.value_ =
         *(GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> **)
          &(param_1.value_)->data_;
    local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.Data.ArrayNum = 0;
    local_228.Data.ArrayMax = 0;
    rapidjson::
    GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
    ::FindMember(&local_218,(wchar_t *)&local_168);
    GVar3.value_ = local_218.value_;
    if ((((local_218.value_)->data_).f.flags != 3) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x500,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TOptional<FText> *)(*pcVar2)();
      return pTVar6;
    }
    if ((local_168 ==
         (ulonglong)((GVar3.value_)->data_).s.length * 0x20 +
         ((ulonglong)((GVar3.value_)->data_).s.str & 0xffffffffffff)) ||
       (bVar4 = ConvertToStringHelper
                          ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                            *)(local_168 + 0x10),&local_228), !bVar4)) {
LAB_141e2ebf5:
      NVar1 = ((param_1.value_)->data_).n;
      local_210 = NVar1;
      bVar4 = TryGetStringArrayField
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_210,L"PlatformAllowList",&param_2->PlatformAllowList);
      if (!bVar4) {
        local_208 = NVar1;
        TryGetStringArrayField
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_208,L"WhitelistPlatforms",&param_2->PlatformAllowList);
      }
      NVar1 = ((param_1.value_)->data_).n;
      local_200 = NVar1;
      bVar4 = TryGetStringArrayField
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_200,L"PlatformDenyList",&param_2->PlatformDenyList);
      if (!bVar4) {
        local_1f8 = NVar1;
        TryGetStringArrayField
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_1f8,L"BlacklistPlatforms",&param_2->PlatformDenyList);
      }
      local_1f0 = ((param_1.value_)->data_).n;
      TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_1f0,L"HasExplicitPlatforms",&param_2->bHasExplicitPlatforms);
      NVar1 = ((param_1.value_)->data_).n;
      local_1e8 = NVar1;
      bVar4 = TryGetEnumArrayField<enum_EBuildTargetType>
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_1e8,L"TargetAllowList",&param_2->TargetAllowList);
      if (!bVar4) {
        local_1e0 = NVar1;
        TryGetEnumArrayField<enum_EBuildTargetType>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_1e0,L"WhitelistTargets",&param_2->TargetAllowList);
      }
      NVar1 = ((param_1.value_)->data_).n;
      local_1d8 = NVar1;
      bVar4 = TryGetEnumArrayField<enum_EBuildTargetType>
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_1d8,L"TargetDenyList",&param_2->TargetDenyList);
      if (!bVar4) {
        local_1d0 = NVar1;
        TryGetEnumArrayField<enum_EBuildTargetType>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_1d0,L"BlacklistTargets",&param_2->TargetDenyList);
      }
      NVar1 = ((param_1.value_)->data_).n;
      local_1c8 = NVar1;
      bVar4 = TryGetEnumArrayField<enum_EBuildConfiguration>
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_1c8,L"TargetConfigurationAllowList",
                         &param_2->TargetConfigurationAllowList);
      if (!bVar4) {
        local_1c0 = NVar1;
        TryGetEnumArrayField<enum_EBuildConfiguration>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_1c0,L"WhitelistTargetConfigurations",
                   &param_2->TargetConfigurationAllowList);
      }
      NVar1 = ((param_1.value_)->data_).n;
      local_1b8 = NVar1;
      bVar4 = TryGetEnumArrayField<enum_EBuildConfiguration>
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_1b8,L"TargetConfigurationDenyList",
                         &param_2->TargetConfigurationDenyList);
      if (!bVar4) {
        local_1b0 = NVar1;
        TryGetEnumArrayField<enum_EBuildConfiguration>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_1b0,L"BlacklistTargetConfigurations",&param_2->TargetConfigurationDenyList
                  );
      }
      NVar1 = ((param_1.value_)->data_).n;
      local_1a8 = NVar1;
      bVar4 = TryGetStringArrayField
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_1a8,L"ProgramAllowList",&param_2->ProgramAllowList);
      if (!bVar4) {
        local_180 = NVar1;
        TryGetStringArrayField
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_180,L"WhitelistPrograms",&param_2->ProgramAllowList);
      }
      NVar1 = ((param_1.value_)->data_).n;
      local_1a0 = NVar1;
      bVar4 = TryGetStringArrayField
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_1a0,L"ProgramDenyList",&param_2->ProgramDenyList);
      if (!bVar4) {
        local_198 = NVar1;
        TryGetStringArrayField
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_198,L"BlacklistPrograms",&param_2->ProgramDenyList);
      }
      local_190 = ((param_1.value_)->data_).n;
      TryGetStringArrayField
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_190,L"AdditionalDependencies",&param_2->AdditionalDependencies);
      local_188 = ((param_1.value_)->data_).n;
      TryGetStringArrayField
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_188,L"GameTargetAllowList",&param_2->GameTargetAllowList);
      local_160 = ((param_1.value_)->data_).n;
      TryGetStringArrayField
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_160,L"GameTargetDenyList",&param_2->GameTargetDenyList);
      local_150 = ((param_1.value_)->data_).n;
      local_158 = param_2;
      `UE::Projects::Private::Read'::__l2::<lambda_1>::operator()
                (&local_158,(TOptional<FText> *)&local_258.TypedValue,
                 L"PlatformArchitectureAllowList",&param_2->PlatformArchitectureAllowList);
      if (local_258.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
        (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
LAB_141e2ee84:
        FText::FText((FText *)__return_storage_ptr__,&local_258.TypedValue);
        local_110.TextData.Reference = (ITextData *)local_258.TypedValue.TextData.Reference;
        goto LAB_141e2ebd2;
      }
      pTVar13 = &`UE::Projects::Private::Read'::__l2::<lambda_1>::operator()
                           (&local_158,(TOptional<FText> *)&local_100.TypedValue,
                            L"PlatformArchitectureDenyList",&param_2->PlatformArchitectureDenyList)
                 ->field0_0x0;
      if (pTVar13 != &local_258) {
        if ((pTVar13->TypedValue).TextData.Reference == (ITextData *)0x0) {
          if (local_258.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_258.TypedValue.TextData.Reference + 0x10))();
            local_258.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
            local_258.TypedValue.Flags = 0;
          }
        }
        else {
          if (local_258.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_258.TypedValue.TextData.Reference + 0x10))();
          }
          FText::FText(&local_258.TypedValue,&pTVar13->TypedValue);
          if ((local_258.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x171,
                                 L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TOptional<FText> *)(*pcVar2)();
            return pTVar6;
          }
        }
      }
      if (local_100.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_100.TypedValue.TextData.Reference + 0x10))();
      }
      (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
      (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
      if (local_258.TypedValue.TextData.Reference != (ITextData *)0x0) goto LAB_141e2ee84;
    }
    else {
      FVar14.Data = (FScriptContainerElement *)L"";
      TVar15 = EarliestPossible;
      if (local_228.Data.ArrayNum != 0) {
        FVar14.Data = local_228.Data.AllocatorInstance.Data;
        TVar15 = EarliestPossible;
      }
      do {
        pwVar8 = ELoadingPhase::ToString(TVar15);
        iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar14.Data,pwVar8);
        if (iVar5 == 0) break;
        TVar15 = TVar15 + PostConfigInit;
      } while ((int)TVar15 < 10);
      param_2->LoadingPhase = TVar15;
      if (TVar15 != Max) goto LAB_141e2ebf5;
      pFVar9 = FText::FromString(&local_90,&local_228);
      pFVar10 = FText::FromName(&local_80,&param_2->Name);
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_110,L"ModuleDescriptor",L"ModuleWithInvalidLoadingPhase",
                           L"Module entry \'{0}\' specified an unrecognized module LoadingPhase \'{1}\'"
                          );
      pFVar12 = FTextFormat::FTextFormat(&local_70,pFVar11,Default);
      pFVar9 = FText::Format<FText,FText>(&local_120,pFVar12,pFVar10,pFVar9);
      FText::FText((FText *)__return_storage_ptr__,pFVar9);
      if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TOptional<FText> *)(*pcVar2)();
        return pTVar6;
      }
      if (local_120.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
      }
LAB_141e2ebd2:
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
    }
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
LAB_141e2f066:
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Read @ 141e2f0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141e2f9c2) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FText> * __cdecl
UE::Projects::Private::Read
          (TOptional<FText> *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,FPluginDescriptor *param_2)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  Type TVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FText *pFVar10;
  TOptional<FText> *pTVar11;
  wchar_t *pwVar12;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  TArray<FPluginDisallowedDescriptor,TSizedDefaultAllocator<32>_> *pTVar20;
  ulonglong uVar21;
  undefined1 auStackY_448 [32];
  bool local_3f8;
  bool local_3f7 [3];
  int local_3f4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3f0;
  uint local_3e0 [2];
  FString local_3d8;
  undefined1 local_3c8 [8];
  Number local_3c0;
  Number local_3b8;
  Number local_3b0;
  Number local_3a8;
  Number local_3a0;
  Number local_398;
  Number local_390;
  Number local_388;
  Number local_380;
  Number local_378;
  Number local_370;
  Number local_368;
  Number local_360;
  Number local_358;
  Number local_350;
  Number local_348;
  Number local_340;
  Number local_338;
  Number local_330;
  Number local_328;
  Number local_320;
  Number local_318;
  longlong local_310;
  longlong local_308;
  Number local_300;
  Number local_2f8;
  Number local_2f0;
  Number local_2e8;
  Number local_2e0;
  Number local_2d8;
  Number local_2d0;
  Number local_2c8;
  Number local_2c0;
  Number local_2b8;
  Number local_2b0;
  Number local_2a8;
  Number local_2a0;
  Number local_298;
  Number local_290;
  Number local_288;
  Number local_280;
  Number local_278;
  Number local_270;
  Number local_268;
  Number local_260;
  Number local_258;
  undefined1 local_250 [4];
  undefined1 local_24c [4];
  TOptional<FText>_u_0 local_248;
  TOptional<FText>_u_0 local_238;
  TOptional<FText>_u_0 local_228;
  TOptional<FText>_u_0 local_218;
  FText local_208;
  FText local_1f8;
  FString local_1e8;
  FString local_1d8;
  FText local_1c8;
  FText local_1b8;
  FText local_1a8;
  FText local_198;
  FText local_188;
  FText local_178;
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FTextFormat local_128;
  FText local_118;
  FTextFormat local_108;
  FTextFormat local_f8;
  undefined1 local_e8 [72];
  undefined4 local_a0;
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_448;
  local_3c0 = ((param_1.value_)->data_).n;
  uVar19 = 0;
  iVar8 = 0;
  local_3f4 = 0;
  bVar5 = TryGetIntHelper<int>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_3c0,L"FileVersion",L"int32",&local_3f4);
  if (!bVar5) {
    local_3b8 = ((param_1.value_)->data_).n;
    bVar5 = TryGetIntHelper<int>
                      ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_3b8,L"PluginFileVersion",L"int32",&local_3f4);
    if (!bVar5) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_1a8,L"PluginDescriptor",L"InvalidProjectFileVersion",
                           L"File does not have a valid \'FileVersion\' number.");
      FText::FText((FText *)__return_storage_ptr__,pFVar10);
      local_248.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)local_1a8.TextData.Reference;
      if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ),
            local_248.TypedValue.TextData.Reference =
                 (TRefCountPtr<ITextData>)local_1a8.TextData.Reference, bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TOptional<FText> *)(*pcVar4)();
        return pTVar11;
      }
      goto LAB_141e2ffbf;
    }
  }
  if ((byte)((char)local_3f4 - 1U) < 3) {
    local_3b0 = ((param_1.value_)->data_).n;
    TryGetIntHelper<int>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_3b0,L"Version",L"int32",&param_2->Version);
    local_3a8 = ((param_1.value_)->data_).n;
    TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_3a8,L"VersionName",&param_2->VersionName);
    local_3a0 = ((param_1.value_)->data_).n;
    TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_3a0,L"FriendlyName",&param_2->FriendlyName);
    local_398 = ((param_1.value_)->data_).n;
    TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_398,L"Description",&param_2->Description);
    local_390 = ((param_1.value_)->data_).n;
    bVar5 = TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                               *)&local_390,L"Category",&param_2->Category);
    if (!bVar5) {
      local_388 = ((param_1.value_)->data_).n;
      TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_388,L"CategoryPath",&param_2->Category);
    }
    iVar7 = (param_2->Category).Data.ArrayNum;
    iVar16 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar16 = iVar8;
    }
    if (((1 < iVar16) &&
        (bVar5 = ::FString::StartsWith(&param_2->Category,L"\"",1,CaseSensitive), bVar5)) &&
       (bVar5 = ::FString::EndsWith(&param_2->Category,L"\"",1,CaseSensitive), bVar5)) {
      iVar7 = (param_2->Category).Data.ArrayNum;
      iVar16 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar16 = iVar8;
      }
      if ((iVar16 + -2 != 0x7fffffff) && (iVar16 + -2 < 0x7ffffffe)) {
        if (iVar7 != 0) {
          iVar8 = iVar7 + -1;
        }
        iVar7 = iVar8;
        if (iVar16 + -1 < iVar8) {
          iVar7 = iVar16 + -1;
        }
        iVar16 = 0;
        if (0 < iVar7) {
          iVar16 = iVar7;
        }
        ::FString::RemoveAt(&param_2->Category,iVar16,iVar8 - iVar16,No);
      }
      ::FString::RemoveAt(&param_2->Category,0,1,No);
    }
    local_380 = ((param_1.value_)->data_).n;
    TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_380,L"CreatedBy",&param_2->CreatedBy);
    local_378 = ((param_1.value_)->data_).n;
    TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_378,L"CreatedByURL",&param_2->CreatedByURL);
    local_370 = ((param_1.value_)->data_).n;
    TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_370,L"DocsURL",&param_2->DocsURL);
    local_368 = ((param_1.value_)->data_).n;
    TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_368,L"MarketplaceURL",&param_2->MarketplaceURL);
    local_360 = ((param_1.value_)->data_).n;
    TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_360,L"SupportURL",&param_2->SupportURL);
    local_358 = ((param_1.value_)->data_).n;
    TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_358,L"EngineVersion",&param_2->EngineVersion);
    local_350 = ((param_1.value_)->data_).n;
    TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_350,L"EditorCustomVirtualPath",&param_2->EditorCustomVirtualPath);
    local_348 = ((param_1.value_)->data_).n;
    TryGetStringArrayField
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_348,L"SupportedTargetPlatforms",&param_2->SupportedTargetPlatforms);
    local_340 = ((param_1.value_)->data_).n;
    pTVar2 = &param_2->SupportedPrograms;
    TryGetStringArrayField
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_340,L"SupportedPrograms",pTVar2);
    local_338 = ((param_1.value_)->data_).n;
    TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                    &local_338,L"bIsPluginExtension",&param_2->bIsPluginExtension);
    local_330 = ((param_1.value_)->data_).n;
    ReadArray<FModuleDescriptor>
              ((TOptional<FText> *)&local_248.TypedValue,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_330,L"Modules",&param_2->Modules);
    if (local_248.TypedValue.TextData.Reference == (ITextData *)0x0) {
      local_328 = ((param_1.value_)->data_).n;
      ReadArray<FLocalizationTargetDescriptor>
                ((TOptional<FText> *)&local_238.TypedValue,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_328,L"LocalizationTargets",&param_2->LocalizationTargets);
      if (local_238.TypedValue.TextData.Reference == (ITextData *)0x0) {
        local_320 = ((param_1.value_)->data_).n;
        TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                           *)&local_320,L"VersePath",&param_2->VersePath);
        local_318 = ((param_1.value_)->data_).n;
        TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                           *)&local_318,L"DeprecatedEngineVersion",&param_2->DeprecatedEngineVersion
                         );
        rapidjson::
        GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
        ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                      *)param_1.value_,(wchar_t *)&local_310);
        puVar3 = *(uint **)&(param_1.value_)->data_;
        if ((*(short *)((longlong)puVar3 + 0xe) != 3) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsObject()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                               ,0x500,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TOptional<FText> *)(*pcVar4)();
          return pTVar11;
        }
        if ((local_310 != (ulonglong)*puVar3 * 0x20 + (*(ulonglong *)(puVar3 + 2) & 0xffffffffffff))
           && ((*(ushort *)(local_310 + 0x1e) & 0x400) != 0)) {
          pwVar12 = rapidjson::
                    GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
                    GetString((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                               *)(local_310 + 0x10));
          iVar8 = FGenericPlatformStricmp::Stricmp(pwVar12,L"PublicAPI");
          TVar6 = PublicAPI;
          if (iVar8 != 0) {
            iVar8 = FGenericPlatformStricmp::Stricmp(pwVar12,L"InternalAPI");
            if (iVar8 == 0) {
              TVar6 = InternalAPI;
            }
            else {
              iVar8 = FGenericPlatformStricmp::Stricmp(pwVar12,L"PublicUser");
              if (iVar8 == 0) {
                TVar6 = PublicUser;
              }
              else {
                iVar8 = FGenericPlatformStricmp::Stricmp(pwVar12,L"InternalUser");
                if (iVar8 != 0) {
                  pwVar12 = rapidjson::
                            GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                            ::GetString((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                         *)(local_310 + 0x10));
                  pFVar10 = FText::FromString(&local_138,pwVar12);
                  pFVar14 = FText::AsLocalizable_Advanced_LocText
                                      (&local_188,L"PluginDescriptor",L"PluginWithInvalidVerseScope"
                                       ,
                                       L"Plugin entry \'VerseScope\' specified an unrecognized value \'{0}\'"
                                      );
                  pFVar15 = FTextFormat::FTextFormat(&local_128,pFVar14,Default);
                  pFVar10 = FText::Format<FText>(&local_198,pFVar15,pFVar10);
                  FText::FText((FText *)__return_storage_ptr__,pFVar10);
                  if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference ==
                       (ITextData *)0x0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsSet()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                         ,0xbd,
                                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                        ), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    pTVar11 = (TOptional<FText> *)(*pcVar4)();
                    return pTVar11;
                  }
                  local_248.TypedValue.TextData.Reference =
                       (TRefCountPtr<ITextData>)local_188.TextData.Reference;
                  if (local_198.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
                    local_248.TypedValue.TextData.Reference =
                         (TRefCountPtr<ITextData>)local_188.TextData.Reference;
                  }
                  goto LAB_141e2ffbf;
                }
                TVar6 = InternalUser;
              }
            }
          }
          param_2->VerseScope = TVar6;
        }
        rapidjson::
        GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
        ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                      *)param_1.value_,(wchar_t *)&local_308);
        puVar3 = *(uint **)&(param_1.value_)->data_;
        if ((*(short *)((longlong)puVar3 + 0xe) != 3) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsObject()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                               ,0x500,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TOptional<FText> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_308 != (*(ulonglong *)(puVar3 + 2) & 0xffffffffffff) + (ulonglong)*puVar3 * 0x20)
        {
          local_300 = ((param_1.value_)->data_).n;
          local_3e0[0] = 0;
          bVar5 = TryGetIntHelper<int>
                            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                              *)&local_300,L"VerseVersion",L"int32",(int *)local_3e0);
          if (!bVar5) {
            pwVar12 = Json::GetValueTypeName
                                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                  *)(local_308 + 0x10));
            pFVar10 = FText::FromString(&local_118,pwVar12);
            pFVar14 = FText::AsLocalizable_Advanced_LocText
                                (&local_168,L"PluginDescriptor",L"PluginWithInvalidVerseVersion",
                                 L"Plugin entry \'VerseVersion\' specified an unrecognized type \'{0}\'"
                                );
            pFVar15 = FTextFormat::FTextFormat(&local_108,pFVar14,Default);
            pFVar10 = FText::Format<FText>(&local_178,pFVar15,pFVar10);
            FText::FText((FText *)__return_storage_ptr__,pFVar10);
            if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference ==
                 (ITextData *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0xbd,
                                   L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar11 = (TOptional<FText> *)(*pcVar4)();
              return pTVar11;
            }
            local_248.TypedValue.TextData.Reference =
                 (TRefCountPtr<ITextData>)local_168.TextData.Reference;
            if (local_178.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
              local_248.TypedValue.TextData.Reference =
                   (TRefCountPtr<ITextData>)local_168.TextData.Reference;
            }
            goto LAB_141e2ffbf;
          }
          if ((TOptional<unsigned_int> *)local_250 != &param_2->VerseVersion) {
            (param_2->VerseVersion).TypedValue = local_3e0[0];
            (param_2->VerseVersion).bIsSet = true;
          }
        }
        local_2f8 = ((param_1.value_)->data_).n;
        TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_2f8,L"EnableSceneGraph",&param_2->bEnableSceneGraph);
        local_2f0 = ((param_1.value_)->data_).n;
        TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_2f0,L"EnableVerseAssetReflection",
                        &param_2->bEnableVerseAssetReflection);
        local_2e8 = ((param_1.value_)->data_).n;
        TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_2e8,L"EnableIAD",&param_2->bEnableIAD);
        local_2e0 = ((param_1.value_)->data_).n;
        bVar5 = TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                 *)&local_2e0,L"EnabledByDefault",&local_3f8);
        if (bVar5) {
          param_2->EnabledByDefault = (local_3f8 == false) + Enabled;
        }
        local_2d8 = ((param_1.value_)->data_).n;
        TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_2d8,L"CanContainContent",&param_2->bCanContainContent);
        local_2d0 = ((param_1.value_)->data_).n;
        TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_2d0,L"CanContainVerse",&param_2->bCanContainVerse);
        local_2c8 = ((param_1.value_)->data_).n;
        TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_2c8,L"NoCode",&param_2->bNoCode);
        local_2c0 = ((param_1.value_)->data_).n;
        TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_2c0,L"IsBetaVersion",&param_2->bIsBetaVersion);
        local_2b8 = ((param_1.value_)->data_).n;
        TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_2b8,L"IsExperimentalVersion",&param_2->bIsExperimentalVersion);
        local_2b0 = ((param_1.value_)->data_).n;
        TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_2b0,L"Installed",&param_2->bInstalled);
        local_2a8 = ((param_1.value_)->data_).n;
        TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_2a8,L"RequiresBuildPlatform",&param_2->bRequiresBuildPlatform);
        local_2a0 = ((param_1.value_)->data_).n;
        TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_2a0,L"Hidden",&param_2->bIsHidden);
        local_298 = ((param_1.value_)->data_).n;
        TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_298,L"Sealed",&param_2->bIsSealed);
        local_290 = ((param_1.value_)->data_).n;
        TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_290,L"ExplicitlyLoaded",&param_2->bExplicitlyLoaded);
        local_288 = ((param_1.value_)->data_).n;
        TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_288,L"HasExplicitPlatforms",&param_2->bHasExplicitPlatforms);
        local_280 = ((param_1.value_)->data_).n;
        bVar5 = TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                 *)&local_280,L"CanBeUsedWithUnrealHeaderTool",local_3f7);
        if ((bVar5) && (local_3f7[0] != false)) {
          ::FString::FString(&local_3d8,L"UnrealHeaderTool");
          pFVar17 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar17 <= (FScriptContainerElement *)&local_3d8) &&
             (((FScriptContainerElement *)&local_3d8 <
               pFVar17 + (longlong)(param_2->SupportedPrograms).ArrayMax * 0x10 &&
              (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)))) {
            pcVar4 = (code *)swi(3);
            pTVar11 = (TOptional<FText> *)(*pcVar4)();
            return pTVar11;
          }
          iVar8 = (param_2->SupportedPrograms).ArrayNum;
          piVar1 = &(param_2->SupportedPrograms).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar2->AllocatorInstance,piVar1);
          }
          (param_2->SupportedPrograms).ArrayNum = iVar8 + 1;
          pFVar17 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
          *(undefined8 *)pFVar17 = 0;
          *(FScriptContainerElement **)pFVar17 = local_3d8.Data.AllocatorInstance.Data;
          local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar17 + 8) = local_3d8.Data.ArrayNum;
          *(int *)(pFVar17 + 0xc) = local_3d8.Data.ArrayMax;
          local_3d8.Data.ArrayNum = 0;
          local_3d8.Data.ArrayMax = 0;
        }
        local_278 = ((param_1.value_)->data_).n;
        pTVar13 = (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)ReadCustomBuildSteps
                               ((FCustomBuildSteps *)local_e8,
                                (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                 *)&local_278,L"PreBuildSteps");
        if ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&param_2->PreBuildSteps != pTVar13) {
          TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::
          Move<TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
                    ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&param_2->PreBuildSteps,pTVar13);
        }
        local_a0 = 0;
        if ((void *)local_e8._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_e8._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_e8);
        local_270 = ((param_1.value_)->data_).n;
        pTVar13 = (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)ReadCustomBuildSteps
                               ((FCustomBuildSteps *)local_98,
                                (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                 *)&local_270,L"PostBuildSteps");
        if ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&param_2->PostBuildSteps != pTVar13) {
          TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::
          Move<TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
                    ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&param_2->PostBuildSteps,pTVar13);
        }
        local_50 = 0;
        if ((void *)local_98._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_98._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_98);
        local_268 = ((param_1.value_)->data_).n;
        ReadArray<FPluginReferenceDescriptor>
                  ((TOptional<FText> *)&local_228.TypedValue,
                   (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_268,L"Plugins",&param_2->Plugins);
        if (local_228.TypedValue.TextData.Reference == (ITextData *)0x0) {
          local_260 = ((param_1.value_)->data_).n;
          local_3f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3f0.ArrayNum = 0;
          local_3f0.ArrayMax = 0;
          pTVar20 = &param_2->DisallowedPlugins;
          bVar5 = TryGetStringArrayField
                            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                              *)&local_260,L"DisallowedPlugins",&local_3f0);
          if (bVar5) {
            if (local_3f0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidArrayNum(local_3f0._8_8_ & 0xffffffff);
            }
            piVar1 = &(param_2->DisallowedPlugins).ArrayMax;
            if ((param_2->DisallowedPlugins).ArrayMax < local_3f0.ArrayNum) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_3f0.ArrayNum,&pTVar20->AllocatorInstance,
                         (param_2->DisallowedPlugins).ArrayNum,piVar1);
            }
            uVar21 = uVar19;
            iVar8 = local_3f0.ArrayNum;
            if (0 < local_3f0.ArrayNum) {
              do {
                iVar8 = (param_2->DisallowedPlugins).ArrayNum;
                if (iVar8 == *piVar1) {
                  iVar8 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&pTVar20->AllocatorInstance,piVar1);
                }
                (param_2->DisallowedPlugins).ArrayNum = iVar8 + 1;
                pFVar17 = (pTVar20->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
                DefaultConstructItems<FPluginDisallowedDescriptor,int>(pFVar17,1);
                uVar18 = (uint)uVar19;
                uVar9 = 0;
                if ((int)uVar18 < local_3f0.ArrayNum) {
                  uVar9 = ~uVar18 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  pTVar11 = (TOptional<FText> *)(*pcVar4)();
                  return pTVar11;
                }
                uVar9 = *(int *)(local_3f0.AllocatorInstance.Data + uVar21 + 8) - 1;
                if (*(int *)(local_3f0.AllocatorInstance.Data + uVar21 + 8) == 0) {
                  uVar9 = 0;
                }
                ::FString::AssignRange
                          ((FString *)pFVar17,
                           *(wchar_t **)(local_3f0.AllocatorInstance.Data + uVar21),uVar9);
                uVar19 = (ulonglong)(uVar18 + 1);
                uVar21 = uVar21 + 0x10;
                iVar8 = local_3f0.ArrayNum;
              } while ((int)(uVar18 + 1) < local_3f0.ArrayNum);
            }
          }
          else {
            local_258 = ((param_1.value_)->data_).n;
            ReadArray<FPluginDisallowedDescriptor>
                      ((TOptional<FText> *)&local_218.TypedValue,
                       (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_258,L"DisallowedPlugins",pTVar20);
            if (local_218.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
              (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
              FText::FText((FText *)__return_storage_ptr__,&local_218.TypedValue);
              if (local_218.TypedValue.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*(ITextData *)local_218.TypedValue.TextData.Reference + 0x10)
                )();
              }
              DestructItems<FString,int>
                        ((FString *)local_3f0.AllocatorInstance.Data,local_3f0.ArrayNum);
              if (local_3f0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return __return_storage_ptr__;
              }
              FMemory::Free(local_3f0.AllocatorInstance.Data);
              return __return_storage_ptr__;
            }
            iVar8 = local_3f0.ArrayNum;
          }
          DestructItems<FString,int>((FString *)local_3f0.AllocatorInstance.Data,iVar8);
          if (local_3f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f0.AllocatorInstance.Data);
          }
          (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
          (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
          return __return_storage_ptr__;
        }
        (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
        (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
        FText::FText((FText *)__return_storage_ptr__,&local_228.TypedValue);
        local_248.TypedValue.TextData.Reference = local_228.TypedValue.TextData.Reference;
      }
      else {
        (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
        (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
        FText::FText((FText *)__return_storage_ptr__,&local_238.TypedValue);
        local_248.TypedValue.TextData.Reference = local_238.TypedValue.TextData.Reference;
      }
    }
    else {
      (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
      (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
      FText::FText((FText *)__return_storage_ptr__,&local_248.TypedValue);
    }
  }
  else {
    ::FString::PrintfImpl(&local_1e8,L"%d");
    FText::FromString(&local_1f8,&local_1e8);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_1d8,L"%d");
    FText::FromString(&local_208,&local_1d8);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    local_1c8.TextData.Reference = local_208.TextData.Reference;
    if (local_208.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_208.TextData.Reference + 8))
                (local_208.TextData.Reference,local_24c);
    }
    local_1c8.Flags = local_208.Flags;
    local_1b8.TextData.Reference = local_1f8.TextData.Reference;
    if (local_1f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1f8.TextData.Reference + 8))
                (local_1f8.TextData.Reference,local_3c8);
    }
    local_1b8.Flags = local_1f8.Flags;
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_148,L"PluginDescriptor",L"ProjectFileVersionTooLarge",
                         L"File appears to be in a newer version ({0}) of the file format that we can load (max version: {1})."
                        );
    pFVar15 = FTextFormat::FTextFormat(&local_f8,pFVar10,Default);
    pFVar10 = FText::Format<FText,FText>(&local_158,pFVar15,&local_1b8,&local_1c8);
    FText::FText((FText *)__return_storage_ptr__,pFVar10);
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TOptional<FText> *)(*pcVar4)();
      return pTVar11;
    }
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
    }
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
    local_248.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)local_1f8.TextData.Reference;
    if (local_208.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
      local_248.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)local_1f8.TextData.Reference;
    }
  }
LAB_141e2ffbf:
  if (local_248.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_248.TypedValue.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// Read @ 141e30010

TOptional<FText> * __cdecl
UE::Projects::Private::Read
          (TOptional<FText> *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,FPluginDisallowedDescriptor *param_2)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  Number local_res10;
  FText local_18;
  
  local_res10 = ((param_1.value_)->data_).n;
  bVar2 = TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                             *)&local_res10,L"Name",&param_2->Name);
  if (bVar2) {
    (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  }
  else {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"PluginDisallowedDescriptor",L"FPluginDisallowedWithoutName",
                        L"Disallowed plugin must have a \'Name\' field");
    FText::FText((FText *)__return_storage_ptr__,pFVar3);
    if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FText> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// Read @ 141e300c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FText> * __cdecl
UE::Projects::Private::Read
          (TOptional<FText> *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,FPluginManifest *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar6;
  bool bVar7;
  int iVar8;
  FText *pFVar9;
  TOptional<FText> *pTVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [16];
  Number local_res20;
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_148;
  ulonglong local_138;
  ulonglong local_130;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_128;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_120;
  TOptional<FText>_u_0 local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FTextFormat local_70;
  FTextFormat local_60;
  FTextFormat local_50;
  
  local_res20 = ((param_1.value_)->data_).n;
  Json::GetArrayField(&local_148,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_res20,L"Contents");
  GVar6.value_ = local_148.TypedValue.value_;
  if (local_148.bIsSet == false) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_f0,L"PluginManifest",L"PluginDescriptorMissingContentsArray",
                        L"No \'Contents\' array found");
    FText::FText((FText *)__return_storage_ptr__,pFVar9);
    local_90.TextData.Reference = local_f0.TextData.Reference;
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), local_90.TextData.Reference = local_f0.TextData.Reference, bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TOptional<FText> *)(*pcVar5)();
      return pTVar10;
    }
LAB_141e305db:
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
    }
  }
  else {
    if ((((local_148.TypedValue.value_)->data_).f.flags != 4) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x674,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TOptional<FText> *)(*pcVar5)();
      return pTVar10;
    }
    uVar3 = ((GVar6.value_)->data_).s.length;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &(param_2->Contents).ArrayMax;
    if ((param_2->Contents).ArrayMax < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x218,8,uVar3,(ForAnyElementType *)param_2,(param_2->Contents).ArrayNum,piVar1);
    }
    if ((local_148.bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TOptional<FText> *)(*pcVar5)();
      return pTVar10;
    }
    GVar6.value_ = local_148.TypedValue.value_;
    if ((((local_148.TypedValue.value_)->data_).f.flags != 4) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x696,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TOptional<FText> *)(*pcVar5)();
      return pTVar10;
    }
    uVar13 = (ulonglong)((GVar6.value_)->data_).s.str & 0xffffffffffff;
    if ((((local_148.TypedValue.value_)->data_).f.flags != 4) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x699,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TOptional<FText> *)(*pcVar5)();
      return pTVar10;
    }
    pwVar4 = ((local_148.TypedValue.value_)->data_).s.str;
    uVar3 = ((local_148.TypedValue.value_)->data_).s.length;
    for (; uVar13 != ((ulonglong)pwVar4 & 0xffffffffffff) + (ulonglong)uVar3 * 0x10;
        uVar13 = uVar13 + 0x10) {
      if (*(short *)(uVar13 + 0xe) == 3) {
        iVar8 = (param_2->Contents).ArrayNum;
        piVar2 = &(param_2->Contents).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x218,8,(ForAnyElementType *)param_2,piVar1);
        }
        *piVar2 = iVar8 + 1;
        pFVar14 = (param_2->Contents).AllocatorInstance.Data + (longlong)iVar8 * 0x218;
        memset(pFVar14 + 0x10,0,0x208);
        *(undefined8 *)&pFVar14->field_0x0 = 0;
        *(undefined8 *)(pFVar14 + 8) = 0;
        FPluginDescriptor::FPluginDescriptor((FPluginDescriptor *)(pFVar14 + 0x10));
        if ((*(short *)(uVar13 + 0xe) != 3) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsObject()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                               ,0x667,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TOptional<FText> *)(*pcVar5)();
          return pTVar10;
        }
        local_138 = uVar13;
        Json::GetObjectField
                  (&local_120,
                   (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_138,L"Descriptor");
        if (local_120.bIsSet == false) {
          iVar8 = *piVar2;
          pFVar9 = FText::AsLocalizable_Advanced_LocText
                             (&local_90,L"PluginManifest",
                              L"PluginDescriptorIndexMissingDescriptorField",
                              L"Plugin descriptor index \'{0}\' missing \'Descriptor\' field");
          pFVar12 = FTextFormat::FTextFormat(&local_50,pFVar9,Default);
          pFVar9 = FText::Format<int>(&local_a0,pFVar12,iVar8 + -1);
          FText::FText((FText *)__return_storage_ptr__,pFVar9);
          if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference ==
               (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TOptional<FText> *)(*pcVar5)();
            return pTVar10;
          }
          if (local_a0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
          }
          goto LAB_141e305db;
        }
        local_130 = uVar13;
        bVar7 = TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                   *)&local_130,L"File",(FString *)pFVar14);
        if (!bVar7) {
          iVar8 = *piVar2;
          pFVar9 = FText::AsLocalizable_Advanced_LocText
                             (&local_b0,L"PluginManifest",L"PluginDescriptorIndexMissingFileField",
                              L"Plugin descriptor index \'{0}\' missing \'File\' field");
          pFVar12 = FTextFormat::FTextFormat(&local_60,pFVar9,Default);
          pFVar9 = FText::Format<int>(&local_c0,pFVar12,iVar8 + -1);
          FText::FText((FText *)__return_storage_ptr__,pFVar9);
          if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference ==
               (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TOptional<FText> *)(*pcVar5)();
            return pTVar10;
          }
          local_90.TextData.Reference = local_b0.TextData.Reference;
          if (local_c0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
            local_90.TextData.Reference = local_b0.TextData.Reference;
          }
          goto LAB_141e305db;
        }
        if ((local_120.bIsSet == false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TOptional<FText> *)(*pcVar5)();
          return pTVar10;
        }
        local_128 = local_120.TypedValue.value_;
        Read((TOptional<FText> *)&local_110.TypedValue,
             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_128
             ,(FPluginDescriptor *)(pFVar14 + 0x10));
        if (local_110.TypedValue.TextData.Reference != (ITextData *)0x0) {
          local_100.TextData.Reference = (ITextData *)local_110.TypedValue.TextData.Reference;
          if (local_110.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_110.TypedValue.TextData.Reference + 8))
                      (local_110.TypedValue.TextData.Reference,local_res10);
          }
          local_100.Flags = local_110.TypedValue.Flags;
          pFVar9 = FText::FromString(&local_80,(FString *)pFVar14);
          pFVar11 = FText::AsLocalizable_Advanced_LocText
                              (&local_d0,L"PluginManifest",L"PluginDescriptorEntryParseError",
                               L"Failed to parse plugin descriptor entry for file \'{0}\': {1}");
          pFVar12 = FTextFormat::FTextFormat(&local_70,pFVar11,Default);
          pFVar9 = FText::Format<FText,FText>(&local_e0,pFVar12,pFVar9,&local_100);
          FText::FText((FText *)__return_storage_ptr__,pFVar9);
          if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference ==
               (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TOptional<FText> *)(*pcVar5)();
            return pTVar10;
          }
          if (local_e0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
          }
          local_90.TextData.Reference = (ITextData *)local_110.TypedValue.TextData.Reference;
          if (local_d0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
            local_90.TextData.Reference = (ITextData *)local_110.TypedValue.TextData.Reference;
          }
          goto LAB_141e305db;
        }
      }
    }
    (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  }
  return __return_storage_ptr__;
}

// Read @ 141e30600

TOptional<FText> * __cdecl
UE::Projects::Private::Read
          (TOptional<FText> *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,FPluginReferenceDescriptor *param_2)

{
  Number NVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  TOptional<FText> *pTVar5;
  Number local_res10;
  Number local_res18;
  Number local_res20;
  int local_108 [2];
  Number local_100;
  Number local_f8;
  Number local_f0;
  Number local_e8;
  Number local_e0;
  Number local_d8;
  Number local_d0;
  Number local_c8;
  Number local_c0;
  Number local_b8;
  Number local_b0;
  Number local_a8;
  Number local_a0;
  Number local_98;
  Number local_90;
  Number local_88;
  Number local_80;
  Number local_78;
  FText local_70;
  FText local_60;
  FText local_50;
  
  local_res10 = ((param_1.value_)->data_).n;
  bVar3 = TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                             *)&local_res10,L"Name",&param_2->Name);
  if (bVar3) {
    local_res18 = ((param_1.value_)->data_).n;
    bVar3 = TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                             *)&local_res18,L"Enabled",&param_2->bEnabled);
    if (bVar3) {
      local_res20 = ((param_1.value_)->data_).n;
      TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_res20,L"Optional",&param_2->bOptional);
      local_100 = ((param_1.value_)->data_).n;
      TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_100,L"Activate",&param_2->bActivate);
      local_f8 = ((param_1.value_)->data_).n;
      TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_f8,L"Description",&param_2->Description);
      local_f0 = ((param_1.value_)->data_).n;
      TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )&local_f0,L"MarketplaceURL",&param_2->MarketplaceURL);
      NVar1 = ((param_1.value_)->data_).n;
      local_e8 = NVar1;
      bVar3 = TryGetStringArrayField
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_e8,L"PlatformAllowList",&param_2->PlatformAllowList);
      if (!bVar3) {
        local_e0 = NVar1;
        TryGetStringArrayField
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_e0,L"WhitelistPlatforms",&param_2->PlatformAllowList);
      }
      NVar1 = ((param_1.value_)->data_).n;
      local_d8 = NVar1;
      bVar3 = TryGetStringArrayField
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_d8,L"PlatformDenyList",&param_2->PlatformDenyList);
      if (!bVar3) {
        local_d0 = NVar1;
        TryGetStringArrayField
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_d0,L"BlacklistPlatforms",&param_2->PlatformDenyList);
      }
      NVar1 = ((param_1.value_)->data_).n;
      local_c8 = NVar1;
      bVar3 = TryGetEnumArrayField<enum_EBuildConfiguration>
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_c8,L"TargetConfigurationAllowList",
                         &param_2->TargetConfigurationAllowList);
      if (!bVar3) {
        local_c0 = NVar1;
        TryGetEnumArrayField<enum_EBuildConfiguration>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_c0,L"WhitelistTargetConfigurations",&param_2->TargetConfigurationAllowList
                  );
      }
      NVar1 = ((param_1.value_)->data_).n;
      local_b8 = NVar1;
      bVar3 = TryGetEnumArrayField<enum_EBuildConfiguration>
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_b8,L"TargetConfigurationDenyList",
                         &param_2->TargetConfigurationDenyList);
      if (!bVar3) {
        local_b0 = NVar1;
        TryGetEnumArrayField<enum_EBuildConfiguration>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_b0,L"BlacklistTargetConfigurations",&param_2->TargetConfigurationDenyList)
        ;
      }
      NVar1 = ((param_1.value_)->data_).n;
      local_a8 = NVar1;
      bVar3 = TryGetEnumArrayField<enum_EBuildTargetType>
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_a8,L"TargetAllowList",&param_2->TargetAllowList);
      if (!bVar3) {
        local_a0 = NVar1;
        TryGetEnumArrayField<enum_EBuildTargetType>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_a0,L"WhitelistTargets",&param_2->TargetAllowList);
      }
      NVar1 = ((param_1.value_)->data_).n;
      local_98 = NVar1;
      bVar3 = TryGetEnumArrayField<enum_EBuildTargetType>
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_98,L"TargetDenyList",&param_2->TargetDenyList);
      if (!bVar3) {
        local_90 = NVar1;
        TryGetEnumArrayField<enum_EBuildTargetType>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_90,L"BlacklistTargets",&param_2->TargetDenyList);
      }
      local_88 = ((param_1.value_)->data_).n;
      TryGetStringArrayField
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_88,L"SupportedTargetPlatforms",&param_2->SupportedTargetPlatforms);
      local_80 = ((param_1.value_)->data_).n;
      TryGetBoolField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_80,L"HasExplicitPlatforms",&param_2->bHasExplicitPlatforms);
      local_78 = ((param_1.value_)->data_).n;
      bVar3 = TryGetIntHelper<int>
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_78,L"Version",L"int32",local_108);
      if (bVar3) {
        if ((TOptional<int> *)local_108 != &param_2->RequestedVersion) {
          (param_2->RequestedVersion).TypedValue = local_108[0];
          (param_2->RequestedVersion).bIsSet = true;
        }
        if (param_2->bEnabled == false) {
          pFVar4 = FText::AsLocalizable_Advanced_LocText
                             (&local_50,L"PluginDescriptor",L"PluginReferenceDisabledWithVersion",
                              L"Plugin references cannot be used to disable explicit versions. Remove the \'Version\' field when \'Enabled\' is false."
                             );
          FText::FText((FText *)__return_storage_ptr__,pFVar4);
          if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference ==
               (ITextData *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TOptional<FText> *)(*pcVar2)();
            return pTVar5;
          }
          goto LAB_141e309de;
        }
      }
      (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
      (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
      return __return_storage_ptr__;
    }
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_60,L"PluginDescriptor",L"PluginReferenceWithoutEnabled",
                        L"Plugin references must have an \'Enabled\' field");
    FText::FText((FText *)__return_storage_ptr__,pFVar4);
    local_50.TextData.Reference = local_60.TextData.Reference;
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), local_50.TextData.Reference = local_60.TextData.Reference, bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TOptional<FText> *)(*pcVar2)();
      return pTVar5;
    }
  }
  else {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_70,L"PluginDescriptor",L"PluginReferenceWithoutName",
                        L"Plugin references must have a \'Name\' field");
    FText::FText((FText *)__return_storage_ptr__,pFVar4);
    local_50.TextData.Reference = local_70.TextData.Reference;
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), local_50.TextData.Reference = local_70.TextData.Reference, bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TOptional<FText> *)(*pcVar2)();
      return pTVar5;
    }
  }
LAB_141e309de:
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// ReadCustomBuildSteps @ 141e329c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCustomBuildSteps * __cdecl
UE::Projects::Private::ReadCustomBuildSteps
          (FCustomBuildSteps *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,wchar_t *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FCustomBuildSteps *pFVar11;
  ulonglong *puVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  ulonglong *puVar15;
  longlong lVar16;
  undefined1 auStackY_108 [32];
  int local_d8 [2];
  FString local_d0;
  Number local_c0;
  FString *local_b8;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_b0;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_a8;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_c0 = ((param_1.value_)->data_).n;
  local_98.Hash.InlineData[0] = '\0';
  local_98.Hash.InlineData[1] = '\0';
  local_98.Hash.InlineData[2] = '\0';
  local_98.Hash.InlineData[3] = '\0';
  local_98.Hash._padding_ = 0;
  local_98.Elements._16_8_ = 0;
  local_98.Elements._24_8_ = 0;
  local_98._72_8_ = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_b0 = (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__;
  Json::GetObjectField
            (&local_a8,
             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_c0,
             param_2);
  GVar7.value_ = local_a8.TypedValue.value_;
  if (local_a8.bIsSet != false) {
    if ((((local_a8.TypedValue.value_)->data_).f.flags != 3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x4fd,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FCustomBuildSteps *)(*pcVar4)();
      return pFVar11;
    }
    puVar12 = (ulonglong *)((ulonglong)((GVar7.value_)->data_).s.str & 0xffffffffffff);
    if ((((local_a8.TypedValue.value_)->data_).f.flags != 3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x500,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FCustomBuildSteps *)(*pcVar4)();
      return pFVar11;
    }
    puVar15 = (ulonglong *)
              (((ulonglong)((local_a8.TypedValue.value_)->data_).s.str & 0xffffffffffff) +
              (ulonglong)((local_a8.TypedValue.value_)->data_).s.length * 0x20);
    if (puVar12 != puVar15) {
      puVar12 = puVar12 + 3;
      do {
        if (((*(ushort *)((longlong)puVar12 + -10) & 0x400) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsString()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                               ,0x746,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FCustomBuildSteps *)(*pcVar4)();
          return pFVar11;
        }
        if ((*(ushort *)((longlong)puVar12 + -10) & 0x1000) == 0) {
          pwVar13 = (wchar_t *)(puVar12[-2] & 0xffffffffffff);
        }
        else {
          pwVar13 = (wchar_t *)(puVar12 + -3);
        }
        ::FString::FString(&local_d0,pwVar13);
        iVar10 = local_d0.Data.ArrayNum + -1;
        FVar5.Data = local_d0.Data.AllocatorInstance.Data;
        if (local_d0.Data.ArrayNum == 0) {
          iVar10 = 0;
          FVar5.Data = (FScriptContainerElement *)L"";
        }
        uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar5.Data);
        iVar10 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>(&local_98,uVar9,&local_d0);
        if ((iVar10 == -1) ||
           (lVar16 = local_98.Elements._0_8_ + (longlong)iVar10 * 0x28, lVar16 == 0)) {
          local_b8 = &local_d0;
          TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_&&>_>
                    (&local_98,(uint)local_d8,(TKeyInitializer<FString_&&> *)(ulonglong)uVar9,
                     (bool *)&local_b8);
          lVar16 = local_98.Elements._0_8_ + (longlong)local_d8[0] * 0x28;
        }
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        if (*(short *)((longlong)puVar12 + 6) == 4) {
          uVar9 = (uint)puVar12[-1];
          if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
          }
          piVar1 = (int *)(lVar16 + 0x1c);
          if (*(int *)(lVar16 + 0x1c) < (int)uVar9) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar9,(ForAnyElementType *)(lVar16 + 0x10),*(int *)(lVar16 + 0x18),
                       piVar1);
          }
          if ((*(short *)((longlong)puVar12 + 6) != 4) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsArray()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                 ,0x696,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FCustomBuildSteps *)(*pcVar4)();
            return pFVar11;
          }
          pwVar13 = (wchar_t *)(*puVar12 & 0xffffffffffff);
          if (((short)(*puVar12 >> 0x30) != 4) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsArray()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                 ,0x699,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FCustomBuildSteps *)(*pcVar4)();
            return pFVar11;
          }
          uVar6 = puVar12[-1];
          uVar3 = *puVar12;
          for (; pwVar13 != (wchar_t *)((ulonglong)(uint)uVar6 * 0x10 + (uVar3 & 0xffffffffffff));
              pwVar13 = pwVar13 + 8) {
            if ((pwVar13[7] & 0x400U) != 0) {
              pwVar14 = pwVar13;
              if ((pwVar13[7] & 0x1000U) == 0) {
                pwVar14 = (wchar_t *)(*(ulonglong *)(pwVar13 + 4) & 0xffffffffffff);
              }
              iVar10 = *(int *)(lVar16 + 0x18);
              if (iVar10 == *piVar1) {
                iVar10 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,(ForAnyElementType *)(lVar16 + 0x10),piVar1);
              }
              *(int *)(lVar16 + 0x18) = iVar10 + 1;
              ::FString::FString((FString *)((longlong)iVar10 * 0x10 + *(longlong *)(lVar16 + 0x10))
                                 ,pwVar14);
            }
          }
        }
        puVar2 = puVar12 + 1;
        __return_storage_ptr__ = (FCustomBuildSteps *)local_b0;
        puVar12 = puVar12 + 4;
      } while (puVar2 != puVar15);
    }
  }
  *(undefined8 *)
   &((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      *)__return_storage_ptr__)->Elements = 0;
  *(undefined8 *)
   &(((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x8 = 0;
  *(undefined8 *)
   &(((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x20 = 0;
  *(undefined4 *)
   &(((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x28 = 0;
  *(undefined4 *)
   &(((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x2c = 0x80;
  *(undefined4 *)
   &(((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)
   &(((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
       *)__return_storage_ptr__)->Elements).field_0x34 = 0;
  (((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
     *)__return_storage_ptr__)->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    *)__return_storage_ptr__)->HashSize = 0;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_98);
  local_98._72_8_ = local_98._72_8_ & 0xffffffff00000000;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return (FCustomBuildSteps *)
         (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *)__return_storage_ptr__;
}

// ReadFile @ 141e32db0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
UE::PluginDescriptor::Internal::ReadFile(wchar_t *param_1,FString *param_2,FText *param_3)

{
  bool bVar1;
  size_t sVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  TStringView<wchar_t> local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  bVar1 = FFileHelper::LoadFileToString(param_2,param_1,None,0);
  if (!bVar1) {
    if (param_3 != (FText *)0x0) {
      local_58.Size = 0;
      local_58.DataPtr = param_1;
      if (param_1 != (wchar_t *)0x0) {
        sVar2 = wcslen(param_1);
        local_58.Size = (int)sVar2;
      }
      pFVar3 = FText::FromStringView(&local_28,&local_58);
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"PluginDescriptor",L"FailedToLoadDescriptorFile",
                          L"Failed to open descriptor file \'{0}\'");
      pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
      pFVar3 = FText::Format<FText>(&local_48,pFVar5,pFVar3);
      FText::operator=(param_3,pFVar3);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
    return false;
  }
  return true;
}

// SetCoreUObjectPluginManager @ 141e36c50

void __cdecl
UE::PluginManager::Private::SetCoreUObjectPluginManager(ICoreUObjectPluginManager *param_1)

{
  CoreUObjectPluginHandler = param_1;
  return;
}

// TryGetBoolField @ 141e3c1f0

bool __cdecl
UE::Projects::Private::TryGetBoolField
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,wchar_t *param_2,bool *param_3)

{
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *this;
  ushort uVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long64 lVar6;
  ulong64 uVar7;
  wchar_t *pwVar8;
  double dVar9;
  longlong local_res8;
  
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_1.value_,(wchar_t *)&local_res8);
  puVar2 = *(uint **)&(param_1.value_)->data_;
  if (*(short *)((longlong)puVar2 + 0xe) != 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (local_res8 != (ulonglong)*puVar2 * 0x20 + (*(ulonglong *)(puVar2 + 2) & 0xffffffffffff)) {
    this = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
           (local_res8 + 0x10);
    uVar1 = *(ushort *)(local_res8 + 0x1e);
    if ((uVar1 & 8) != 0) {
      *param_3 = uVar1 == 10;
      return true;
    }
    if ((char)uVar1 < '\0') {
      lVar6 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
              GetInt64(this);
      *param_3 = lVar6 != 0;
      return true;
    }
    if ((uVar1 >> 8 & 1) != 0) {
      uVar7 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
              GetUint64(this);
      *param_3 = uVar7 != 0;
      return true;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      dVar9 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
              GetDouble(this);
      if (dVar9 != 0.0) {
        *param_3 = true;
        return true;
      }
      *param_3 = false;
      return true;
    }
    if ((uVar1 >> 10 & 1) != 0) {
      pwVar8 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
               ::GetString(this);
      bVar4 = FToBoolHelper::FromCStringWide(pwVar8);
      *param_3 = bVar4;
      return true;
    }
  }
  return false;
}

// TryGetNumberField @ 141e3c460

bool __cdecl
UE::Projects::Private::TryGetNumberField
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,wchar_t *param_2,int *param_3)

{
  bool bVar1;
  Number local_res8;
  
  local_res8 = ((param_1.value_)->data_).n;
  bVar1 = TryGetIntHelper<int>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_res8,param_2,L"int32",param_3);
  return bVar1;
}

// TryGetNumberField @ 141e3c490

bool __cdecl
UE::Projects::Private::TryGetNumberField
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,wchar_t *param_2,uint *param_3)

{
  bool bVar1;
  Number local_res8;
  
  local_res8 = ((param_1.value_)->data_).n;
  bVar1 = TryGetIntHelper<unsigned_int>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_res8,param_2,L"uint32",param_3);
  return bVar1;
}

// TryGetStringArrayField @ 141e3c540

bool __cdecl
UE::Projects::Private::TryGetStringArrayField
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,wchar_t *param_2,TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar10;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar11;
  FString *pFVar12;
  FName *pFVar13;
  int iVar14;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar15;
  double dVar16;
  GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  local_res8;
  longlong local_res18;
  FName local_res20;
  FString local_68;
  FString local_58;
  FString local_48;
  
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_3->AllocatorInstance,0,piVar1);
  }
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_1.value_,(wchar_t *)&local_res18);
  puVar4 = *(uint **)&(param_1.value_)->data_;
  if ((*(short *)((longlong)puVar4 + 0xe) != 3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x500,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if ((local_res18 == (*(ulonglong *)(puVar4 + 2) & 0xffffffffffff) + (ulonglong)*puVar4 * 0x20) ||
     (*(short *)(local_res18 + 0x1e) != 4)) {
LAB_141e3c820:
    bVar7 = false;
  }
  else {
    pGVar10 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
              (local_res18 + 0x10);
    local_res8.value_ = pGVar10;
    if ((*(short *)(local_res18 + 0x1e) != 4) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x674,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    uVar3 = (pGVar10->data_).s.length;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (*piVar1 < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar3,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    pGVar10 = rapidjson::
              GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
              ::begin(&local_res8);
    pGVar11 = rapidjson::
              GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
              ::end(&local_res8);
    for (; pGVar10 != pGVar11; pGVar10 = pGVar10 + 1) {
      uVar2 = (pGVar10->data_).f.flags;
      if ((uVar2 >> 10 & 1) == 0) {
        if ((char)uVar2 < '\0') {
          pFVar12 = ::FString::SanitizeFloat(&local_58,(double)*(longlong *)&pGVar10->data_,0);
          if (&local_68 != pFVar12) {
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            local_68.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
            (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_68.Data.ArrayNum = (pFVar12->Data).ArrayNum;
            local_68.Data.ArrayMax = (pFVar12->Data).ArrayMax;
            (pFVar12->Data).ArrayNum = 0;
            (pFVar12->Data).ArrayMax = 0;
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        else {
          if ((uVar2 >> 9 & 1) == 0) {
            if ((uVar2 & 8) != 0) {
              pGVar15 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *
                        )L"false";
              if (uVar2 == 10) {
                pGVar15 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                           *)&u_true;
              }
              goto LAB_141e3c79a;
            }
            ::FString::Reset(&local_68,0);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            goto LAB_141e3c820;
          }
          dVar16 = rapidjson::
                   GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
                   GetDouble(pGVar10);
          pFVar12 = ::FString::SanitizeFloat(&local_48,dVar16,0);
          if (&local_68 != pFVar12) {
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            local_68.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
            (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_68.Data.ArrayNum = (pFVar12->Data).ArrayNum;
            local_68.Data.ArrayMax = (pFVar12->Data).ArrayMax;
            (pFVar12->Data).ArrayNum = 0;
            (pFVar12->Data).ArrayMax = 0;
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pGVar15 = pGVar10;
        if ((uVar2 & 0x1000) == 0) {
          pGVar15 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                    ((ulonglong)(pGVar10->data_).s.str & 0xffffffffffff);
        }
LAB_141e3c79a:
        ::FString::operator=(&local_68,(wchar_t *)pGVar15);
      }
      iVar9 = param_3->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_3->AllocatorInstance,piVar1);
      }
      pFVar5 = (param_3->AllocatorInstance).Data;
      param_3->ArrayNum = iVar9 + 1;
      iVar14 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar14 = 0;
      }
      pFVar13 = ::FName::FName(&local_res20,iVar14,(wchar_t *)local_68.Data.AllocatorInstance.Data,
                               FNAME_Add);
      *(FName *)(pFVar5 + (longlong)iVar9 * 8) = *pFVar13;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    bVar7 = true;
  }
  return bVar7;
}

// TryGetStringArrayField @ 141e3c860

bool __cdecl
UE::Projects::Private::TryGetStringArrayField
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,wchar_t *param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar11;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  FScriptContainerElement *pFVar16;
  double dVar17;
  GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  local_res8;
  longlong local_res18 [2];
  FString local_58;
  FString local_48;
  
  piVar1 = &param_3->ArrayMax;
  pFVar16 = (param_3->AllocatorInstance).Data;
  if (param_3->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar16,param_3->ArrayNum);
    param_3->ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar16,param_3->ArrayNum);
    param_3->ArrayNum = 0;
  }
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_1.value_,(wchar_t *)local_res18);
  puVar4 = *(uint **)&(param_1.value_)->data_;
  if (*(short *)((longlong)puVar4 + 0xe) != 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  if ((local_res18[0] == (*(ulonglong *)(puVar4 + 2) & 0xffffffffffff) + (ulonglong)*puVar4 * 0x20)
     || (*(short *)(local_res18[0] + 0x1e) != 4)) {
LAB_141e3cc23:
    bVar8 = false;
  }
  else {
    pGVar11 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
              (local_res18[0] + 0x10);
    local_res8.value_ = pGVar11;
    if (*(short *)(local_res18[0] + 0x1e) != 4) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsArray()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x674,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    uVar3 = (pGVar11->data_).s.length;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (*piVar1 < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar3,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    pGVar11 = rapidjson::
              GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
              ::begin(&local_res8);
    pGVar12 = rapidjson::
              GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
              ::end(&local_res8);
    bVar8 = pGVar11 == pGVar12;
    while (!bVar8) {
      iVar10 = param_3->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar10 + 1;
      pFVar16 = (param_3->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar16->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(undefined8 *)&pFVar16[8].field_0x0 = 0;
      uVar2 = (pGVar11->data_).f.flags;
      if ((uVar2 >> 10 & 1) == 0) {
        if ((char)uVar2 < '\0') {
          pFVar13 = (FScriptContainerElement *)
                    ::FString::SanitizeFloat(&local_58,(double)*(longlong *)&pGVar11->data_,0);
          if (pFVar16 != pFVar13) {
            pFVar5 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar16->field_0x0)->
                     AllocatorInstance).Data;
            if (pFVar5 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar5);
            }
            (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar16->field_0x0)->AllocatorInstance
            ).Data = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->field_0x0)->
                     AllocatorInstance).Data;
            (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->field_0x0)->AllocatorInstance
            ).Data = (FScriptContainerElement *)0x0;
            *(int *)&pFVar16[8].field_0x0 = *(int *)&pFVar13[8].field_0x0;
            *(int *)&pFVar16[0xc].field_0x0 = *(int *)&pFVar13[0xc].field_0x0;
            *(undefined8 *)&pFVar13[8].field_0x0 = 0;
          }
          if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
LAB_141e3cb57:
            pGVar11 = pGVar11 + 1;
            bVar8 = pGVar11 == pGVar12;
          }
          else {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            pGVar11 = pGVar11 + 1;
            bVar8 = pGVar11 == pGVar12;
          }
        }
        else {
          if ((uVar2 >> 9 & 1) == 0) {
            if ((uVar2 & 8) != 0) {
              pwVar15 = L"false";
              if (uVar2 == 10) {
                pwVar15 = L"true";
              }
              ::FString::operator=((FString *)pFVar16,pwVar15);
              goto LAB_141e3cb57;
            }
            ::FString::Reset((FString *)pFVar16,0);
            if (param_3->ArrayNum < 1) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                uVar9 = (*pcVar7)();
                return (bool)uVar9;
              }
            }
            lVar14 = (longlong)param_3->ArrayNum;
            pFVar16 = (param_3->AllocatorInstance).Data;
            pvVar6 = *(void **)(pFVar16 + lVar14 * 0x10 + -0x10);
            *(undefined8 *)(pFVar16 + lVar14 * 0x10 + -0x10) = 0;
            *(undefined8 *)(pFVar16 + lVar14 * 0x10 + -8) = 0;
            iVar10 = param_3->ArrayNum;
            pFVar16 = (param_3->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
            if (*(void **)(pFVar16 + -0x10) != (void *)0x0) {
              FMemory::Free(*(void **)(pFVar16 + -0x10));
            }
            iVar10 = param_3->ArrayNum - iVar10;
            if (iVar10 != 0) {
              memmove(pFVar16 + -0x10,pFVar16,(longlong)iVar10 << 4);
            }
            param_3->ArrayNum = param_3->ArrayNum + -1;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
            if (pvVar6 != (void *)0x0) {
              FMemory::Free(pvVar6);
            }
            goto LAB_141e3cc23;
          }
          dVar17 = rapidjson::
                   GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
                   GetDouble(pGVar11);
          pFVar13 = (FScriptContainerElement *)::FString::SanitizeFloat(&local_48,dVar17,0);
          if (pFVar16 != pFVar13) {
            pFVar5 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar16->field_0x0)->
                     AllocatorInstance).Data;
            if (pFVar5 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar5);
            }
            (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar16->field_0x0)->AllocatorInstance
            ).Data = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->field_0x0)->
                     AllocatorInstance).Data;
            (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar13->field_0x0)->AllocatorInstance
            ).Data = (FScriptContainerElement *)0x0;
            *(int *)&pFVar16[8].field_0x0 = *(int *)&pFVar13[8].field_0x0;
            *(int *)&pFVar16[0xc].field_0x0 = *(int *)&pFVar13[0xc].field_0x0;
            *(undefined8 *)&pFVar13[8].field_0x0 = 0;
          }
          if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
          goto LAB_141e3cb57;
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
          pGVar11 = pGVar11 + 1;
          bVar8 = pGVar11 == pGVar12;
        }
      }
      else if ((uVar2 & 0x1000) == 0) {
        ::FString::operator=
                  ((FString *)pFVar16,
                   (wchar_t *)((ulonglong)(pGVar11->data_).s.str & 0xffffffffffff));
        pGVar11 = pGVar11 + 1;
        bVar8 = pGVar11 == pGVar12;
      }
      else {
        ::FString::operator=((FString *)pFVar16,(wchar_t *)pGVar11);
        pGVar11 = pGVar11 + 1;
        bVar8 = pGVar11 == pGVar12;
      }
    }
    bVar8 = true;
  }
  return bVar8;
}

// TryGetStringArrayFieldWithDeprecatedFallback @ 141e3cc60

bool __cdecl
UE::Projects::Private::TryGetStringArrayFieldWithDeprecatedFallback
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,wchar_t *param_2,wchar_t *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  bool bVar1;
  Number local_res8;
  
  local_res8 = ((param_1.value_)->data_).n;
  bVar1 = TryGetStringArrayField
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_res8,param_2,param_4);
  if (bVar1) {
    return true;
  }
  local_res8 = ((param_1.value_)->data_).n;
  bVar1 = TryGetStringArrayField
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_res8,param_3,param_4);
  return bVar1;
}

// TryGetStringField @ 141e3cce0

bool __cdecl
UE::Projects::Private::TryGetStringField
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,wchar_t *param_2,FString *param_3)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong local_res8;
  
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_1.value_,(wchar_t *)&local_res8);
  puVar1 = *(uint **)&(param_1.value_)->data_;
  if (*(short *)((longlong)puVar1 + 0xe) != 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (local_res8 != (ulonglong)*puVar1 * 0x20 + (*(ulonglong *)(puVar1 + 2) & 0xffffffffffff)) {
    bVar3 = ConvertToStringHelper
                      ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       (local_res8 + 0x10),param_3);
    return bVar3;
  }
  return false;
}

// WriteFile @ 141e46ea0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
UE::PluginDescriptor::Internal::WriteFile(wchar_t *param_1,FString *param_2,FText *param_3)

{
  int iVar1;
  bool bVar2;
  IFileManager *pIVar3;
  size_t sVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  int iVar8;
  TStringView<wchar_t> local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pIVar3 = IFileManager::Get();
  iVar1 = (param_2->Data).ArrayNum;
  local_58.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar8 = 0;
  local_58.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_58.Size = iVar8;
  }
  bVar2 = FFileHelper::SaveStringToFile(&local_58,param_1,AutoDetect,pIVar3,0);
  if (bVar2) {
    bVar2 = true;
  }
  else {
    if (param_3 != (FText *)0x0) {
      local_58.DataPtr = param_1;
      if (param_1 != (wchar_t *)0x0) {
        sVar4 = wcslen(param_1);
        iVar8 = (int)sVar4;
      }
      local_58.Size = iVar8;
      pFVar5 = FText::FromStringView(&local_28,&local_58);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"PluginDescriptor",L"FailedToWriteDescriptorFile",
                          L"Failed to write plugin descriptor file \'{0}\'. Perhaps the file is Read-Only?"
                         );
      pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar6,Default);
      pFVar5 = FText::Format<FText>(&local_48,pFVar7,pFVar5);
      FText::operator=(param_3,pFVar5);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

