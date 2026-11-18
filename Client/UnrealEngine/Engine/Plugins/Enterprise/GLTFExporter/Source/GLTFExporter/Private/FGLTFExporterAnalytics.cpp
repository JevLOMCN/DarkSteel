// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 5

// FGLTFExporterAnalytics @ 14e5d10b0

FGLTFExporterAnalytics * __thiscall
FGLTFExporterAnalytics::FGLTFExporterAnalytics
          (FGLTFExporterAnalytics *this,UObject *param_1,FGLTFConvertBuilder *param_2,bool param_3,
          bool param_4,bool param_5,ulong64 param_6,ulong64 param_7)

{
  int iVar1;
  int iVar2;
  UClass *pUVar3;
  double dVar4;
  
  if (param_1 == (UObject *)0x0) {
    pUVar3 = (UClass *)0x0;
  }
  else {
    pUVar3 = *(UClass **)&param_1->field_0x10;
  }
  this->AssetType = pUVar3;
  this->ExportOptions = (UGLTFExportOptions *)param_2->_padding_;
  this->bExportAsGLB = SUB81(param_2->_padding_,0);
  iVar1 = *(int *)&(param_2->SelectedActors).Elements.field_0x34;
  iVar2 = *(int *)&(param_2->SelectedActors).Elements.field_0x8;
  this->bInitiatedByTask = param_3;
  this->bSelectedOnly = iVar2 != iVar1;
  this->bExportAutomated = param_4;
  this->bExportSuccessful = param_5;
  dVar4 = (double)(param_7 - param_6) * FGenericPlatformTime::SecondsPerCycle64;
  this->Builder = param_2;
  this->ExportDuration = dVar4;
  return this;
}

// FGLTFExporterAnalytics @ 14e5d1140

FGLTFExporterAnalytics * __thiscall
FGLTFExporterAnalytics::FGLTFExporterAnalytics
          (FGLTFExporterAnalytics *this,UObject *param_1,FGLTFConvertBuilder *param_2,bool param_3,
          bool param_4,bool param_5,ulong64 param_6)

{
  int iVar1;
  int iVar2;
  UClass *pUVar3;
  double dVar4;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  if (param_1 == (UObject *)0x0) {
    pUVar3 = (UClass *)0x0;
  }
  else {
    pUVar3 = *(UClass **)&param_1->field_0x10;
  }
  this->AssetType = pUVar3;
  this->ExportOptions = (UGLTFExportOptions *)param_2->_padding_;
  this->bExportAsGLB = SUB81(param_2->_padding_,0);
  iVar1 = *(int *)&(param_2->SelectedActors).Elements.field_0x34;
  iVar2 = *(int *)&(param_2->SelectedActors).Elements.field_0x8;
  this->bInitiatedByTask = param_3;
  this->bSelectedOnly = iVar2 != iVar1;
  this->bExportAutomated = param_4;
  this->bExportSuccessful = param_5;
  dVar4 = (double)(local_res8.QuadPart - param_6) * FGenericPlatformTime::SecondsPerCycle64;
  this->Builder = param_2;
  this->ExportDuration = dVar4;
  return this;
}

// GetAttributesFromProperty @ 14e5f4030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FGLTFExporterAnalytics::GetAttributesFromProperty
          (FProperty *param_1,void *param_2,FString *param_3,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  FScriptMapHelper_u_16 FVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FString *pFVar12;
  FString *pFVar13;
  FString *pFVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  int iVar17;
  FAnalyticsEventAttribute *pFVar18;
  longlong lVar19;
  void *pvVar20;
  FProperty *pFVar21;
  undefined1 auStackY_188 [32];
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130 [2];
  void *local_128;
  undefined8 local_120;
  FString local_118;
  FString *local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FScriptMapHelper local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_108 = param_3;
  if (param_1->ArrayDim == 1) {
    FVar4 = ((FName *)param_1->_padding_)[3];
    if (((ulonglong)FVar4 >> 0x11 & 1) == 0) {
      if (((ulonglong)FVar4 >> 0xe & 1) == 0) {
        if ((((ulonglong)FVar4 >> 0x30 & 1) == 0) && (((ulonglong)FVar4 >> 0x18 & 1) == 0)) {
          pFVar21 = param_1;
          if (((ulonglong)FVar4 >> 0x2e & 1) == 0) {
            pFVar21 = (FProperty *)0x0;
          }
          if (pFVar21 == (FProperty *)0x0) {
            if (((ulonglong)FVar4 >> 0x14 & 1) == 0) {
              if (2 < (byte)LogGLTFExporter._0_1_) {
                ::FName::ToString((FName *)param_1->_padding_,&local_100);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogGLTFExporter);
                if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_100.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              GetAttributesFromStruct((UStruct *)param_1[1]._padding_,param_2,param_3,param_4);
            }
          }
          else {
            local_90.KeyProp = (FProperty *)pFVar21[1]._padding_;
            local_90.ValueProp = (FProperty *)pFVar21[1]._padding_;
            local_90.MapLayout.SetLayout.SparseArrayLayout =
                 (FScriptSparseArrayLayout)pFVar21[1]._padding_;
            local_90.MapFlags = (EMapPropertyFlags)pFVar21[1]._padding_;
            local_90.MapLayout._0_8_ = pFVar21[1]._padding_;
            local_90.MapLayout.SetLayout._4_8_ = pFVar21[1]._padding_;
            if (((local_90.KeyProp == (FProperty *)0x0) || (local_90.ValueProp == (FProperty *)0x0))
               && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InKeyProp && InValueProp",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x1558,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_90.field2_0x10 = (FScriptMapHelper_u_16)param_2;
            if (((local_90.KeyProp == (FProperty *)0x0) || (local_90.ValueProp == (FProperty *)0x0))
               && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                     ("KeyProp && ValueProp",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x1564,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar10 = ((local_90.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
            if ((local_90.MapFlags & UsesMemoryImageAllocator) == None) {
              iVar17 = *(int *)&((local_90.field2_0x10.FreezableMap)->Pairs).field_0x34;
            }
            else {
              iVar17 = ((local_90.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
            }
            iVar11 = param_4->ArrayNum;
            if (iVar11 == param_4->ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,&param_4->AllocatorInstance,&param_4->ArrayMax);
            }
            param_4->ArrayNum = iVar11 + 1;
            pFVar18 = (FAnalyticsEventAttribute *)
                      ((param_4->AllocatorInstance).Data + (longlong)iVar11 * 0x30);
            pFVar12 = ::FString::FString(&local_b0,param_3);
            pFVar13 = FAnalyticsEventAttribute::CheckName(pFVar18,pFVar12);
            (pFVar18->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pwVar16 = L"true";
            (pFVar18->AttrName).Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data
            ;
            (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar18->AttrName).Data.ArrayNum = (pFVar13->Data).ArrayNum;
            (pFVar18->AttrName).Data.ArrayMax = (pFVar13->Data).ArrayMax;
            (pFVar13->Data).ArrayNum = 0;
            (pFVar13->Data).ArrayMax = 0;
            if (iVar10 - iVar17 < 1) {
              pwVar16 = L"false";
            }
            ::FString::FString(&pFVar18->AttrValueString,pwVar16);
            pFVar18->AttrValueNumber = 0.0;
            pFVar18->AttrValueBool = false;
            pFVar18->AttrType = JsonFragment;
            pFVar5 = (pFVar12->Data).AllocatorInstance.Data;
            if (pFVar5 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar5);
            }
            iVar17 = 0;
            iVar10 = ((local_90.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
            if (0 < iVar10) {
              do {
                local_144 = iVar17;
                bVar9 = FScriptMapHelper::
                        WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                  (&local_90,(<lambda_1> *)&local_144);
                if (bVar9) break;
                iVar17 = iVar17 + 1;
              } while (iVar17 < iVar10);
            }
            local_148 = iVar17;
            bVar9 = FScriptMapHelper::
                    WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                              (&local_90,(<lambda_1> *)&local_148);
            if (bVar9) {
              do {
                FVar8 = local_90.field2_0x10;
                plVar6 = (longlong *)pFVar21[1]._padding_;
                local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_118.Data.ArrayNum = 0;
                local_118.Data.ArrayMax = 0;
                if ((local_90.MapFlags & UsesMemoryImageAllocator) == None) {
                  local_13c = iVar17;
                  bVar9 = FScriptMapHelper::
                          WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                    (&local_90,(<lambda_1> *)&local_13c);
                  if ((!bVar9) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Iterator",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x1321,
                                         L"Invalid Iterator. Test Iterator before calling this method."
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar19 = (longlong)(local_90.MapLayout.SetLayout.SparseArrayLayout.Size * iVar17)
                           + ((FVar8.FreezableMap)->Pairs).Elements.Data._padding_;
                }
                else {
                  local_140 = iVar17;
                  bVar9 = FScriptMapHelper::
                          WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                    (&local_90,(<lambda_1> *)&local_140);
                  if ((!bVar9) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Iterator",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x1321,
                                         L"Invalid Iterator. Test Iterator before calling this method."
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  uVar15 = ((FVar8.FreezableMap)->Pairs).Elements.Data._padding_;
                  if ((uVar15 & 1) != 0) {
                    uVar15 = (longlong)&(FVar8.HeapMap)->field_0x0 + ((longlong)uVar15 >> 0x18);
                  }
                  lVar19 = (longlong)(local_90.MapLayout.SetLayout.SparseArrayLayout.Size * iVar17)
                           + uVar15;
                }
                (**(code **)(*plVar6 + 0xe0))(plVar6,&local_118,lVar19,0);
                ::FString::ConcatFC(&local_e0,param_3,L".");
                ::FString::ConcatFF(&local_f0,&local_e0,&local_118);
                FVar8 = local_90.field2_0x10;
                if ((local_90.MapFlags & UsesMemoryImageAllocator) == None) {
                  local_134 = iVar17;
                  bVar9 = FScriptMapHelper::
                          WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                    (&local_90,(<lambda_1> *)&local_134);
                  if ((!bVar9) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Iterator",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x133f,
                                         L"Invalid Iterator. Test Iterator before calling this method."
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pvVar20 = (void *)((longlong)
                                     (local_90.MapLayout.SetLayout.SparseArrayLayout.Size * iVar17)
                                     + (longlong)local_90.MapLayout.ValueOffset +
                                    ((FVar8.FreezableMap)->Pairs).Elements.Data._padding_);
                }
                else {
                  local_138 = iVar17;
                  bVar9 = FScriptMapHelper::
                          WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                    (&local_90,(<lambda_1> *)&local_138);
                  if ((!bVar9) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Iterator",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x133f,
                                         L"Invalid Iterator. Test Iterator before calling this method."
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  uVar15 = ((FVar8.FreezableMap)->Pairs).Elements.Data._padding_;
                  if ((uVar15 & 1) != 0) {
                    uVar15 = (longlong)&(FVar8.HeapMap)->field_0x0 + ((longlong)uVar15 >> 0x18);
                  }
                  pvVar20 = (void *)((longlong)local_90.MapLayout.ValueOffset +
                                    (longlong)
                                    (local_90.MapLayout.SetLayout.SparseArrayLayout.Size * iVar17) +
                                    uVar15);
                }
                GetAttributesFromProperty
                          ((FProperty *)pFVar21[1]._padding_,pvVar20,&local_f0,param_4);
                if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                }
                if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                }
                if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_118.Data.AllocatorInstance.Data);
                }
                iVar10 = ((local_90.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
                do {
                  iVar17 = iVar17 + 1;
                  if (iVar10 <= iVar17) break;
                  local_130[0] = iVar17;
                  bVar9 = FScriptMapHelper::
                          WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                    (&local_90,(<lambda_1> *)local_130);
                } while (!bVar9);
                local_148 = iVar17;
                bVar9 = FScriptMapHelper::
                        WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                  (&local_90,(<lambda_1> *)&local_148);
              } while (bVar9);
            }
          }
        }
        else {
          local_128 = (void *)0x0;
          local_120 = 0;
          (**(code **)(param_1->_padding_ + 0xe0))(param_1,&local_128,param_2);
          iVar10 = param_4->ArrayNum;
          if (iVar10 == param_4->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar10 + 1;
          pFVar18 = (FAnalyticsEventAttribute *)
                    ((param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x30);
          pFVar13 = ::FString::FString(&local_a0,param_3);
          pFVar14 = FAnalyticsEventAttribute::CheckName(pFVar18,pFVar13);
          pvVar20 = local_128;
          (pFVar18->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar12 = &pFVar18->AttrValueString;
          (pFVar18->AttrName).Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
          (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar18->AttrName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
          (pFVar18->AttrName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
          (pFVar14->Data).ArrayNum = 0;
          (pFVar14->Data).ArrayMax = 0;
          piVar1 = &(pFVar18->AttrValueString).Data.ArrayMax;
          (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          lVar19 = (longlong)(int)local_120;
          (pFVar18->AttrValueString).Data.ArrayNum = (int)local_120;
          if ((int)local_120 == 0) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,(int)local_120,0,(ForAnyElementType *)pFVar12,(int)local_120,piVar1);
            memcpy((pFVar12->Data).AllocatorInstance.Data,pvVar20,lVar19 * 2);
          }
          pFVar18->AttrValueNumber = 0.0;
          pFVar18->AttrValueBool = false;
          pFVar18->AttrType = String;
          pFVar5 = (pFVar13->Data).AllocatorInstance.Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          if (local_128 != (void *)0x0) {
            FMemory::Free(local_128);
          }
        }
      }
      else {
        iVar10 = param_4->ArrayNum;
        if (iVar10 == param_4->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar10 + 1;
        pFVar5 = (param_4->AllocatorInstance).Data;
        pFVar12 = ::FString::FString(&local_c0,param_3);
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>
                  ((FAnalyticsEventAttribute *)(pFVar5 + (longlong)iVar10 * 0x30),pFVar12,param_2);
      }
    }
    else {
      if (((char)param_1[1]._padding_ == '\0') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldSize != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0xa4b,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar2 = *(byte *)((ulonglong)*(byte *)((longlong)&param_1[1]._padding_ + 1) +
                       (longlong)param_2);
      bVar3 = *(byte *)((longlong)&param_1[1]._padding_ + 3);
      iVar10 = param_4->ArrayNum;
      if (iVar10 == param_4->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar10 + 1;
      pFVar18 = (FAnalyticsEventAttribute *)
                ((param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x30);
      pFVar12 = ::FString::FString(&local_d0,local_108);
      pFVar13 = FAnalyticsEventAttribute::CheckName(pFVar18,pFVar12);
      pwVar16 = L"true";
      (pFVar18->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar18->AttrName).Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar18->AttrName).Data.ArrayNum = (pFVar13->Data).ArrayNum;
      (pFVar18->AttrName).Data.ArrayMax = (pFVar13->Data).ArrayMax;
      (pFVar13->Data).ArrayNum = 0;
      (pFVar13->Data).ArrayMax = 0;
      if ((bVar2 & bVar3) == 0) {
        pwVar16 = L"false";
      }
      ::FString::FString(&pFVar18->AttrValueString,pwVar16);
      pFVar18->AttrValueNumber = 0.0;
      pFVar18->AttrValueBool = false;
      pFVar18->AttrType = JsonFragment;
      pFVar5 = (pFVar12->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
    }
  }
  else if (2 < (byte)LogGLTFExporter._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGLTFExporter);
  }
  return;
}

// GetAttributesFromStruct @ 14e5f47d0

void __cdecl
FGLTFExporterAnalytics::GetAttributesFromStruct
          (UStruct *param_1,void *param_2,FString *param_3,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  FProperty *this;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this = param_1->PropertyLink;
  do {
    if (this == (FProperty *)0x0) {
      return;
    }
    if ((this->PropertyFlags & (CPF_Deprecated|CPF_Transient)) == CPF_None) {
      if ((this->ArrayDim < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((param_2 == (void *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = this->Offset_Internal;
      pFVar4 = FField::GetAuthoredName((FField *)this,&local_28);
      ::FString::ConcatFC(&local_38,param_3,L".");
      ::FString::ConcatFF(&local_48,&local_38,pFVar4);
      GetAttributesFromProperty
                (this,(void *)((longlong)iVar1 + (longlong)param_2),&local_48,param_4);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    this = this->PropertyLinkNext;
  } while( true );
}

// Send @ 14e6132b0

void __thiscall FGLTFExporterAnalytics::Send(FGLTFExporterAnalytics *this)

{
  UGLTFExportOptions *pUVar1;
  FProperty *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  UClass *pUVar7;
  FString *pFVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar11;
  IAnalyticsProviderET *pIVar12;
  FAnalyticsEventAttribute *pFVar13;
  bool bVar14;
  FName local_res10;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_138;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  if (FEngineAnalytics::Analytics.Object != (IAnalyticsProviderET *)0x0) {
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    bVar14 = this->AssetType == (UClass *)0x0;
    if (bVar14) {
      pFVar8 = ::FString::FString(&local_c8,"null");
    }
    else {
      local_res10 = (FName)this->AssetType->_padding_;
      ::FName::ToString(&local_res10,&local_118);
      pFVar8 = &local_118;
    }
    iVar4 = local_138.ArrayNum;
    if (local_138.ArrayNum == local_138.ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    local_138.ArrayNum = iVar4 + 1;
    pFVar13 = (FAnalyticsEventAttribute *)
              (local_138.AllocatorInstance.Data + (longlong)iVar4 * 0x30);
    pFVar6 = ::FString::FString(&local_a8,L"AssetType");
    FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>(pFVar13,pFVar6,pFVar8);
    if ((bVar14) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if ((!bVar14) && (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    pUVar7 = Z_Construct_UClass_UWorld_NoRegister();
    if (this->AssetType == pUVar7) {
      iVar4 = local_138.ArrayNum;
      if (local_138.ArrayNum == local_138.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_138.AllocatorInstance,&local_138.ArrayMax);
      }
      local_138.ArrayNum = iVar4 + 1;
      pFVar13 = (FAnalyticsEventAttribute *)
                (local_138.AllocatorInstance.Data + (longlong)iVar4 * 0x30);
      pFVar8 = ::FString::FString(&local_98,L"bSelectedOnly");
      FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
                (pFVar13,pFVar8,&this->bSelectedOnly);
    }
    iVar4 = local_138.ArrayNum;
    if (local_138.ArrayNum == local_138.ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    pFVar13 = (FAnalyticsEventAttribute *)
              (local_138.AllocatorInstance.Data + (longlong)iVar4 * 0x30);
    local_138.ArrayNum = iVar4 + 1;
    pFVar8 = ::FString::FString(&local_88,L"bExportAsGLB");
    FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
              (pFVar13,pFVar8,&this->bExportAsGLB);
    if (local_138.ArrayNum == local_138.ArrayMax) {
      local_138.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    pFVar13 = (FAnalyticsEventAttribute *)
              (local_138.AllocatorInstance.Data + (longlong)local_138.ArrayNum * 0x30);
    local_138.ArrayNum = local_138.ArrayNum + 1;
    pFVar8 = ::FString::FString(&local_78,L"bInitiatedByTask");
    FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
              (pFVar13,pFVar8,&this->bInitiatedByTask);
    if (local_138.ArrayNum == local_138.ArrayMax) {
      local_138.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    pFVar13 = (FAnalyticsEventAttribute *)
              (local_138.AllocatorInstance.Data + (longlong)local_138.ArrayNum * 0x30);
    local_138.ArrayNum = local_138.ArrayNum + 1;
    pFVar8 = ::FString::FString(&local_68,L"bExportAutomated");
    FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
              (pFVar13,pFVar8,&this->bExportAutomated);
    if (local_138.ArrayNum == local_138.ArrayMax) {
      local_138.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    lVar9 = (longlong)local_138.ArrayNum;
    local_138.ArrayNum = local_138.ArrayNum + 1;
    pFVar13 = (FAnalyticsEventAttribute *)(local_138.AllocatorInstance.Data + lVar9 * 0x30);
    pFVar8 = ::FString::FString(&local_58,L"ExportDuration");
    FAnalyticsEventAttribute::FAnalyticsEventAttribute<double_const_&>
              (pFVar13,pFVar8,&this->ExportDuration);
    ::FString::FString(&local_e8,L"ExportOptions");
    pUVar1 = this->ExportOptions;
    for (this_00 = *(FProperty **)(pUVar1->_padding_ + 0x70); this_00 != (FProperty *)0x0;
        this_00 = this_00->PropertyLinkNext) {
      if ((this_00->PropertyFlags & (CPF_Deprecated|CPF_Transient)) == CPF_None) {
        if ((this_00->ArrayDim < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((pUVar1 == (UGLTFExportOptions *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar4 = this_00->Offset_Internal;
        pFVar8 = FField::GetAuthoredName((FField *)this_00,&local_b8);
        ::FString::ConcatFC(&local_f8,&local_e8,L".");
        ::FString::ConcatFF(&local_108,&local_f8,pFVar8);
        GetAttributesFromProperty
                  (this_00,(void *)((longlong)&pUVar1->_padding_ + (longlong)iVar4),&local_108,
                   &local_138);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    iVar4 = local_138.ArrayNum;
    if (local_138.ArrayNum == local_138.ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    local_138.ArrayNum = iVar4 + 1;
    pFVar13 = (FAnalyticsEventAttribute *)
              (local_138.AllocatorInstance.Data + (longlong)iVar4 * 0x30);
    pFVar8 = ::FString::FString(&local_48,L"Platform");
    pFVar6 = FAnalyticsEventAttribute::CheckName(pFVar13,pFVar8);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
    ::FString::FString(&pFVar13->AttrValueString,"Windows");
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = String;
    pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pwVar10 = FGenericPlatformMisc::GetEngineMode();
    iVar4 = local_138.ArrayNum;
    if (local_138.ArrayNum == local_138.ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    local_138.ArrayNum = iVar4 + 1;
    pFVar13 = (FAnalyticsEventAttribute *)
              (local_138.AllocatorInstance.Data + (longlong)iVar4 * 0x30);
    pFVar8 = ::FString::FString(&local_38,L"EngineMode");
    pFVar6 = FAnalyticsEventAttribute::CheckName(pFVar13,pFVar8);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
    ::FString::FString(&pFVar13->AttrValueString,pwVar10);
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = String;
    pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pTVar11 = FGLTFAnalyticsBuilder::GenerateAnalytics
                        ((FGLTFAnalyticsBuilder *)this->Builder,&local_128);
    if ((&local_138 == pTVar11) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x986,L""), bVar14)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar4 = pTVar11->ArrayNum;
    if (iVar4 != 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,iVar4,&local_138.AllocatorInstance,&local_138.ArrayNum,
                         &local_138.ArrayMax);
      memmove(local_138.AllocatorInstance.Data + (longlong)iVar5 * 0x30,
              (pTVar11->AllocatorInstance).Data,(longlong)iVar4 * 0x30);
      pTVar11->ArrayNum = 0;
    }
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
    if ((FAnalyticsEventAttribute *)local_128.AllocatorInstance.Data !=
        (FAnalyticsEventAttribute *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
    pwVar10 = L"GLTFExporter.ExportFailure";
    if (this->bExportSuccessful != false) {
      pwVar10 = L"GLTFExporter.Export";
    }
    ::FString::FString(&local_d8,pwVar10);
    pIVar12 = FEngineAnalytics::GetProvider();
    (**(code **)(pIVar12->_padding_ + 0x80))(pIVar12,&local_d8,&local_138);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
    if ((FAnalyticsEventAttribute *)local_138.AllocatorInstance.Data !=
        (FAnalyticsEventAttribute *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
  }
  return;
}

