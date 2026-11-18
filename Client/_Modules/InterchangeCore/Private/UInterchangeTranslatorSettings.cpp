// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 10

// StaticClass @ 14e3030c0

UClass * __cdecl UInterchangeTranslatorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTranslatorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeTranslatorSettings",
               &Z_Registration_Info_UClass_UInterchangeTranslatorSettings.InnerSingleton,
               StaticRegisterNativesUInterchangeTranslatorSettings,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeTranslatorSettings>,
               InternalVTableHelperCtorCaller<UInterchangeTranslatorSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTranslatorSettings.InnerSingleton;
}

// UInterchangeTranslatorSettings @ 14e402330

UInterchangeTranslatorSettings * __thiscall
UInterchangeTranslatorSettings::UInterchangeTranslatorSettings
          (UInterchangeTranslatorSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeTranslatorSettings__6B_;
  return this;
}

// UInterchangeTranslatorSettings @ 14e402360

UInterchangeTranslatorSettings * __thiscall
UInterchangeTranslatorSettings::UInterchangeTranslatorSettings
          (UInterchangeTranslatorSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeTranslatorSettings__6B_;
  return this;
}

// ~UInterchangeTranslatorSettings @ 14e4051a0

void __thiscall
UInterchangeTranslatorSettings::~UInterchangeTranslatorSettings
          (UInterchangeTranslatorSettings *this)

{
  *(undefined ***)this = &___7UInterchangeTranslatorSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e442370

UClass * __cdecl UInterchangeTranslatorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTranslatorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeTranslatorSettings",
               &Z_Registration_Info_UClass_UInterchangeTranslatorSettings.InnerSingleton,
               StaticRegisterNativesUInterchangeTranslatorSettings,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeTranslatorSettings>,
               InternalVTableHelperCtorCaller<UInterchangeTranslatorSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTranslatorSettings.InnerSingleton;
}

// LoadSettings @ 14e44cc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UInterchangeTranslatorSettings::LoadSettings(UInterchangeTranslatorSettings *this)

{
  EArrayPropertyFlags EVar1;
  FProperty *this_00;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FFeedbackContext *pFVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FConfigSection *this_01;
  FScriptArrayHelper_u_8 FVar12;
  FString *pFVar13;
  FConfigValue *pFVar14;
  ulonglong uVar15;
  void *pvVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  ForAnyElementType FVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  TArray<FConfigValue,TSizedDefaultAllocator<32>_> local_198;
  FString local_188;
  FScriptArrayHelper local_178;
  ForAnyElementType local_158;
  int local_150;
  int local_14c;
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FName local_b8;
  FName local_b0;
  FFeedbackContext *local_a8;
  FName local_a0;
  FName local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  lVar23 = *(longlong *)&this->field_0x10;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  local_b8 = *(FName *)(lVar23 + 0x18);
  ::FName::ToString(&local_b8,&local_80);
  ::FString::ConcatCF(&local_f8,L"Interchange_Translator_ClassName_",&local_80);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  this_00 = *(FProperty **)(lVar23 + 0x70);
  do {
    if (this_00 == (FProperty *)0x0) {
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      return;
    }
    iVar22 = 0;
    if (((uint)(int)this_00->PropertyFlags >> 0xd & 1) == 0) {
      bVar9 = IsThisNotNull(this_00,"FField::GetName");
      if (bVar9) {
        ::FName::ToString((FName *)&this_00->_padding_,&local_188);
      }
      else {
        ::FString::FString(&local_188,L"None");
      }
      if (((*(uint *)(this_00->_padding_ + 0x18) >> 0x15 & 1) == 0) || (this_00 == (FProperty *)0x0)
         ) {
        iVar11 = this_00->ArrayDim;
        if (0 < iVar11) {
          do {
            if (iVar11 != 1) {
              bVar9 = IsThisNotNull(this_00,"FField::GetName");
              if (bVar9) {
                ::FName::ToString((FName *)&this_00->_padding_,&local_d8);
              }
              else {
                ::FString::FString(&local_d8,L"None");
              }
              ::FString::PrintfImpl(&local_108,L"%s[%i]");
              if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.Data.AllocatorInstance.Data);
              }
              local_188.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
              local_188.Data.ArrayNum = local_108.Data.ArrayNum;
              local_188.Data.ArrayMax = local_108.Data.ArrayMax;
              local_108.Data.ArrayNum = 0;
              local_108.Data.ArrayMax = 0;
              local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Data.AllocatorInstance.Data);
              }
            }
            FVar18.Data = (FScriptContainerElement *)L"";
            if (local_188.Data.ArrayNum != 0) {
              FVar18.Data = local_188.Data.AllocatorInstance.Data;
            }
            local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FVar19.Data = (FScriptContainerElement *)L"";
            if (local_f8.Data.ArrayNum != 0) {
              FVar19.Data = local_f8.Data.AllocatorInstance.Data;
            }
            local_138.Data.ArrayNum = 0;
            local_138.Data.ArrayMax = 0;
            bVar9 = FConfigCacheIni::GetString
                              (GConfig,(wchar_t *)FVar19.Data,(wchar_t *)FVar18.Data,&local_138,
                               &GEditorPerProjectIni);
            pFVar8 = GWarn;
            if (bVar9) {
              pvVar16 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                  (this_00,(UObject *)this,iVar22);
              FVar18.Data = (FScriptContainerElement *)L"";
              if (local_138.Data.ArrayNum != 0) {
                FVar18.Data = local_138.Data.AllocatorInstance.Data;
              }
              bVar9 = FProperty::ValidateImportFlags(this_00,0,(FOutputDevice *)pFVar8);
              if ((((!bVar9) || (FVar18.Data == (FScriptContainerElement *)0x0)) ||
                  (lVar23 = (**(code **)(this_00->_padding_ + 0xe8))
                                      (this_00,FVar18.Data,pvVar16,0,this,0x8000000,pFVar8),
                  lVar23 == 0)) && (1 < (byte)LogInterchangeCore._0_1_)) {
                bVar9 = IsThisNotNull(this_00,"FField::GetName");
                if (bVar9) {
                  ::FName::ToString((FName *)&this_00->_padding_,&local_c8);
                }
                else {
                  ::FString::FString(&local_c8,L"None");
                }
                local_98 = *(FName *)(*(longlong *)&this->field_0x10 + 0x18);
                ::FName::ToString(&local_98,&local_90);
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeCore);
                if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_90.Data.AllocatorInstance.Data);
                }
                if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                }
              }
            }
            if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.Data.AllocatorInstance.Data);
            }
            iVar11 = this_00->ArrayDim;
            iVar22 = iVar22 + 1;
          } while (iVar22 < iVar11);
        }
      }
      else {
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_f8.Data.ArrayNum != 0) {
          FVar18.Data = local_f8.Data.AllocatorInstance.Data;
        }
        this_01 = FConfigCacheIni::GetSection
                            (GConfig,(wchar_t *)FVar18.Data,false,&GEditorPerProjectIni);
        if (this_01 != (FConfigSection *)0x0) {
          local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_188.Data.ArrayNum != 0) {
            FVar18.Data = local_188.Data.AllocatorInstance.Data;
          }
          local_198.ArrayNum = 0;
          local_198.ArrayMax = 0;
          ::FName::FName(&local_b0,(wchar_t *)FVar18.Data,FNAME_Find);
          TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
          ::MultiFind<TSizedDefaultAllocator<32>_>
                    ((TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                      *)this_01,local_b0,&local_198,false);
          FVar12.HeapArray =
               FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)this,0);
          EVar1 = (EArrayPropertyFlags)this_00[1]._padding_;
          local_178.ElementAlignment = (**(code **)(*(longlong *)this_00[1]._padding_ + 0x168))();
          local_178.InnerProperty = (FProperty *)this_00[1]._padding_;
          local_178.ElementSize = (local_178.InnerProperty)->ElementSize;
          local_178.field1_0x8.HeapArray = FVar12.HeapArray;
          local_178.ArrayFlags = EVar1;
          if ((local_178.ElementSize < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementSize > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1177,L""), bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((local_178.InnerProperty == (FProperty *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InnerProperty",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1178,L""), bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_198.ArrayNum < 1) {
            do {
              ::FString::PrintfImpl(&local_e8,L"%s[%i]");
              FVar18.Data = (FScriptContainerElement *)L"";
              if (local_e8.Data.ArrayNum != 0) {
                FVar18.Data = local_e8.Data.AllocatorInstance.Data;
              }
              ::FName::FName(&local_a0,(wchar_t *)FVar18.Data,FNAME_Find);
              if (local_a0 == (FName)0x0) {
                if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                }
                break;
              }
              pFVar14 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                        ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                                *)this_01,local_a0);
              if (pFVar14 != (FConfigValue *)0x0) {
                if ((iVar22 < 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x10be,L""), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if ((local_178.field1_0x8.FreezableArray)->ArrayNum <= iVar22) {
                  FScriptArrayHelper::AddValues
                            (&local_178,
                             (iVar22 - (local_178.field1_0x8.FreezableArray)->ArrayNum) + 1);
                }
                pFVar8 = GWarn;
                pFVar2 = (FProperty *)this_00[1]._padding_;
                if ((local_178.field1_0x8.FreezableArray)->ArrayNum == 0) {
                  lVar23 = 0;
                }
                else {
                  uVar15 = (local_178.field1_0x8.FreezableArray)->_padding_;
                  if (((local_178.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                     ((uVar15 & 1) != 0)) {
                    uVar15 = (longlong)&(local_178.field1_0x8.HeapArray)->field_0x0 +
                             ((longlong)uVar15 >> 0x18);
                  }
                  lVar23 = (longlong)local_178.ElementSize * (longlong)iVar22 + uVar15;
                }
                if (pFVar14->bExpandOnDemand == false) {
                  iVar11 = (pFVar14->SavedValue).Data.ArrayNum;
                  bVar6 = true;
                  pFVar17 = (pFVar14->SavedValue).Data.AllocatorInstance.Data;
                  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_118.Data.ArrayNum = iVar11;
                  if (iVar11 == 0) {
                    local_118.Data.ArrayMax = iVar11;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,iVar11,0,(ForAnyElementType *)&local_118,iVar11,
                               &local_118.Data.ArrayMax);
                    memcpy(local_118.Data.AllocatorInstance.Data,pFVar17,(longlong)iVar11 * 2);
                  }
                  pFVar13 = &local_118;
                }
                else {
                  bVar7 = true;
                  pFVar13 = FConfigValue::ExpandValue(local_60,&pFVar14->SavedValue);
                }
                local_148.Data = (FScriptContainerElement *)0x0;
                local_140 = (pFVar13->Data).ArrayNum;
                lVar21 = (longlong)local_140;
                pFVar17 = (pFVar13->Data).AllocatorInstance.Data;
                if (local_140 == 0) {
                  local_13c = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_140,0,&local_148,local_140,&local_13c);
                  memcpy(local_148.Data,pFVar17,lVar21 * 2);
                }
                if ((bVar6) &&
                   (bVar6 = false,
                   local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_118.Data.AllocatorInstance.Data);
                }
                if ((bVar7) &&
                   (bVar7 = false,
                   local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
                }
                FVar18.Data = (FScriptContainerElement *)L"";
                if (local_140 != 0) {
                  FVar18.Data = local_148.Data;
                }
                bVar9 = FProperty::ValidateImportFlags(pFVar2,0,(FOutputDevice *)pFVar8);
                if ((bVar9) && (FVar18.Data != (FScriptContainerElement *)0x0)) {
                  (**(code **)(pFVar2->_padding_ + 0xe8))
                            (pFVar2,FVar18.Data,lVar23,0,this,0x8000000,pFVar8);
                }
                if (local_148.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_148.Data);
                }
              }
              iVar22 = iVar22 + 1;
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
            } while ((pFVar14 != (FConfigValue *)0x0) ||
                    (iVar22 < (local_178.field1_0x8.FreezableArray)->ArrayNum));
          }
          else {
            FScriptArrayHelper::EmptyAndAddValues(&local_178,local_198.ArrayNum);
            iVar22 = 0;
            uVar24 = local_198.ArrayNum - 1;
            if (-1 < (int)uVar24) {
              lVar23 = (longlong)(int)uVar24 * 0x18;
              do {
                pFVar2 = (FProperty *)this_00[1]._padding_;
                local_a8 = GWarn;
                if ((local_178.field1_0x8.FreezableArray)->ArrayNum == 0) {
                  lVar21 = 0;
                }
                else {
                  uVar15 = (local_178.field1_0x8.FreezableArray)->_padding_;
                  if (((local_178.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                     ((uVar15 & 1) != 0)) {
                    uVar15 = (longlong)&(local_178.field1_0x8.HeapArray)->field_0x0 +
                             ((longlong)uVar15 >> 0x18);
                  }
                  lVar21 = (longlong)local_178.ElementSize * (longlong)iVar22 + uVar15;
                }
                uVar10 = 0;
                if ((int)uVar24 < local_198.ArrayNum) {
                  uVar10 = ~uVar24 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar17 = local_198.AllocatorInstance.Data + lVar23;
                if (pFVar17[0x15] == (FScriptContainerElement)0x0) {
                  iVar11 = *(int *)(pFVar17 + 8);
                  bVar4 = true;
                  pvVar16 = *(void **)pFVar17;
                  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_128.Data.ArrayNum = iVar11;
                  if (iVar11 == 0) {
                    local_128.Data.ArrayMax = iVar11;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,iVar11,0,(ForAnyElementType *)&local_128,iVar11,
                               &local_128.Data.ArrayMax);
                    memcpy(local_128.Data.AllocatorInstance.Data,pvVar16,(longlong)iVar11 * 2);
                  }
                  pFVar13 = &local_128;
                }
                else {
                  bVar5 = true;
                  pFVar13 = FConfigValue::ExpandValue(&local_70,(FString *)pFVar17);
                }
                local_158.Data = (FScriptContainerElement *)0x0;
                local_150 = (pFVar13->Data).ArrayNum;
                lVar20 = (longlong)local_150;
                pFVar17 = (pFVar13->Data).AllocatorInstance.Data;
                if (local_150 == 0) {
                  local_14c = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_150,0,&local_158,local_150,&local_14c);
                  memcpy(local_158.Data,pFVar17,lVar20 * 2);
                }
                if ((bVar4) &&
                   (bVar4 = false,
                   local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_128.Data.AllocatorInstance.Data);
                }
                if ((bVar5) &&
                   (bVar5 = false,
                   local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_70.Data.AllocatorInstance.Data);
                }
                pFVar8 = local_a8;
                FVar18.Data = (FScriptContainerElement *)L"";
                if (local_150 != 0) {
                  FVar18.Data = local_158.Data;
                }
                bVar9 = FProperty::ValidateImportFlags(pFVar2,0,(FOutputDevice *)local_a8);
                if ((bVar9) && (FVar18.Data != (FScriptContainerElement *)0x0)) {
                  (**(code **)(pFVar2->_padding_ + 0xe8))
                            (pFVar2,FVar18.Data,lVar21,0,this,0x8000000,pFVar8);
                }
                if (local_158.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_158.Data);
                }
                lVar23 = lVar23 + -0x18;
                iVar22 = iVar22 + 1;
                uVar24 = uVar24 - 1;
              } while (-1 < (int)uVar24);
            }
          }
          DestructItems<FConfigValue,int>
                    ((FConfigValue *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
          if ((FConfigValue *)local_198.AllocatorInstance.Data != (FConfigValue *)0x0) {
            FMemory::Free(local_198.AllocatorInstance.Data);
          }
        }
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
    }
    this_00 = this_00->PropertyLinkNext;
  } while( true );
}

// SaveSettings @ 14e456150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UInterchangeTranslatorSettings::SaveSettings(UInterchangeTranslatorSettings *this)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  int iVar11;
  int iVar12;
  FProperty *this_00;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  byte bVar15;
  undefined1 auStackY_908 [32];
  FString local_8c8;
  FString local_8b8;
  FString local_8a8;
  FString local_898;
  FString local_888;
  FName local_878;
  FString local_870;
  FString local_860;
  FName local_850;
  FName local_848 [2];
  wchar_t local_838;
  undefined1 local_836 [2046];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_908;
  lVar1 = *(longlong *)&this->field_0x10;
  local_878 = *(FName *)(lVar1 + 0x18);
  ::FName::ToString(&local_878,&local_870);
  ::FString::ConcatCF(&local_8b8,L"Interchange_Translator_ClassName_",&local_870);
  if (local_870.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_870.Data.AllocatorInstance.Data);
  }
  this_00 = *(FProperty **)(lVar1 + 0x70);
  if (this_00 != (FProperty *)0x0) {
    uVar14 = 0;
    do {
      if (((uint)(int)this_00->PropertyFlags >> 0xd & 1) == 0) {
        bVar4 = IsThisNotNull(this_00,"FField::GetName");
        if (bVar4) {
          ::FName::ToString((FName *)&this_00->_padding_,&local_8c8);
        }
        else {
          ::FString::FString(&local_8c8,L"None");
        }
        if (((*(uint *)(this_00->_padding_ + 0x18) >> 0x15 & 1) == 0) ||
           (this_00 == (FProperty *)0x0)) {
          local_838 = L'\0';
          memset(local_836,0,0x7fe);
          iVar5 = this_00->ArrayDim;
          uVar8 = uVar14;
          if (0 < iVar5) {
            do {
              iVar12 = 1;
              if (iVar5 != 1) {
                bVar4 = IsThisNotNull(this_00,"FField::GetName");
                if (bVar4) {
                  ::FName::ToString((FName *)&this_00->_padding_,&local_888);
                }
                else {
                  ::FString::FString(&local_888,L"None");
                }
                TCString<wchar_t>::SprintfImpl(&local_838,L"%s[%i]");
                if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_888.Data.AllocatorInstance.Data);
                }
                ::FString::operator=(&local_8c8,&local_838);
                iVar12 = this_00->ArrayDim;
              }
              local_8a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_8a8.Data.ArrayNum = 0;
              local_8a8.Data.ArrayMax = 0;
              iVar11 = (int)uVar8;
              if (((iVar11 < 0) || (iVar12 <= iVar11)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar5 = this_00->ElementSize;
              iVar12 = this_00->Offset_Internal;
              if (((iVar11 < 0) || (this_00->ArrayDim <= iVar11)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FProperty::ExportText_Direct
                        (this_00,&local_8a8,
                         &this->field_0x0 +
                         (longlong)this_00->Offset_Internal +
                         (longlong)this_00->ElementSize * (longlong)iVar11,
                         &this->field_0x0 + (longlong)iVar12 + (longlong)iVar5 * (longlong)iVar11,
                         (UObject *)this,0,(UObject *)0x0);
              FVar9.Data = (FScriptContainerElement *)L"";
              if (local_8a8.Data.ArrayNum != 0) {
                FVar9.Data = local_8a8.Data.AllocatorInstance.Data;
              }
              FVar13.Data = (FScriptContainerElement *)L"";
              if (local_8c8.Data.ArrayNum != 0) {
                FVar13.Data = local_8c8.Data.AllocatorInstance.Data;
              }
              FVar10.Data = (FScriptContainerElement *)L"";
              if (local_8b8.Data.ArrayNum != 0) {
                FVar10.Data = local_8b8.Data.AllocatorInstance.Data;
              }
              FConfigCacheIni::SetString
                        (GConfig,(wchar_t *)FVar10.Data,(wchar_t *)FVar13.Data,(wchar_t *)FVar9.Data
                         ,&GEditorPerProjectIni);
              if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
              }
              iVar5 = this_00->ArrayDim;
              uVar8 = (ulonglong)(iVar11 + 1U);
            } while ((int)(iVar11 + 1U) < iVar5);
          }
        }
        else {
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_8c8.Data.ArrayNum != 0) {
            FVar9.Data = local_8c8.Data.AllocatorInstance.Data;
          }
          pFVar6 = ::FName::FName(&local_850,(wchar_t *)FVar9.Data);
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_8b8.Data.ArrayNum != 0) {
            FVar9.Data = local_8b8.Data.AllocatorInstance.Data;
          }
          FConfigCacheIni::RemoveKeyFromSection
                    (GConfig,(wchar_t *)FVar9.Data,*pFVar6,&GEditorPerProjectIni);
          puVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)this,0);
          lVar3 = this_00[1]._padding_;
          (**(code **)(*(longlong *)this_00[1]._padding_ + 0x168))();
          lVar1 = this_00[1]._padding_;
          iVar5 = *(int *)(lVar1 + 0x34);
          if ((iVar5 < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementSize > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1177,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((lVar1 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InnerProperty",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1178,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          bVar15 = (byte)lVar3 & 1;
          uVar8 = uVar14;
          while( true ) {
            iVar12 = (int)uVar8;
            if ((int)puVar7[1] <= iVar12) break;
            local_898.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_898.Data.ArrayNum = 0;
            local_898.Data.ArrayMax = 0;
            uVar8 = uVar14;
            if ((int)puVar7[1] != 0) {
              if (bVar15 == 0) {
                uVar8 = *puVar7;
              }
              else {
                uVar8 = *puVar7;
              }
              if ((bVar15 != 0) && ((uVar8 & 1) != 0)) {
                uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)puVar7;
              }
              uVar8 = (longlong)iVar5 * (longlong)iVar12 + uVar8;
            }
            (**(code **)(*(longlong *)this_00[1]._padding_ + 0xe0))
                      ((longlong *)this_00[1]._padding_,&local_898,uVar8,0);
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_8c8.Data.ArrayNum != 0) {
              FVar9.Data = local_8c8.Data.AllocatorInstance.Data;
            }
            pFVar6 = ::FName::FName(local_848,(wchar_t *)FVar9.Data);
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_8b8.Data.ArrayNum != 0) {
              FVar9.Data = local_8b8.Data.AllocatorInstance.Data;
            }
            FConfigCacheIni::AddToSection
                      (GConfig,(wchar_t *)FVar9.Data,*pFVar6,&local_898,&GEditorPerProjectIni);
            if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_898.Data.AllocatorInstance.Data);
            }
            uVar8 = (ulonglong)(iVar12 + 1);
          }
        }
        if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
        }
      }
      this_00 = this_00->PropertyLinkNext;
    } while (this_00 != (FProperty *)0x0);
  }
  ::FString::FString(&local_860,L"");
  FConfigCacheIni::Flush(GConfig,false,&local_860);
  if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_860.Data.AllocatorInstance.Data);
  }
  if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUInterchangeTranslatorSettings @ 14e460100

void __cdecl
UInterchangeTranslatorSettings::StaticRegisterNativesUInterchangeTranslatorSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeTranslatorSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execLoadSettings @ 14e46fe40

void __cdecl
UInterchangeTranslatorSettings::execLoadSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  LoadSettings((UInterchangeTranslatorSettings *)param_1);
  return;
}

// execSaveSettings @ 14e470980

void __cdecl
UInterchangeTranslatorSettings::execSaveSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SaveSettings((UInterchangeTranslatorSettings *)param_1);
  return;
}

