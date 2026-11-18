// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// GetFieldSize @ 141f81cf0

ulong64 __thiscall FStrProperty::GetFieldSize(FStrProperty *this)

{
  return 0x70;
}

// FStrProperty @ 1421ffdc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FStrProperty * __thiscall
FStrProperty::FStrProperty(FStrProperty *this,FFieldVariant param_1,FGenericPropertyParams *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             CPF_HasGetValueTypeHash|CPF_ZeroConstructor);
  *(undefined ***)this = &___7__TProperty_VFString__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x10);
  *(undefined ***)this = &___7FStrProperty__6B_;
  return this;
}

// FStrProperty @ 1421ffea0

FStrProperty * __thiscall
FStrProperty::FStrProperty
          (FStrProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7__TProperty_VFString__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x10);
  *(undefined ***)this = &___7FStrProperty__6B_;
  return this;
}

// Construct @ 142207620

FField * __cdecl FStrProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  FProperty *this;
  FFieldClass *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x70,0);
  if (this == (FProperty *)0x0) {
    return (FField *)0x0;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FStrProperty",0x4000,
                 CASTCLASS_FProperty|CASTCLASS_FStrProperty|CASTCLASS_UField,pFVar2,Construct);
      atexit(`FStrProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FField::FField((FField *)this,EC_InternalUseOnlyConstructor,&::StaticFieldClass);
  this->PropertyLinkNext = (FProperty *)0x0;
  this->NextRef = (FProperty *)0x0;
  this->DestructorLinkNext = (FProperty *)0x0;
  this->PostConstructLinkNext = (FProperty *)0x0;
  (this->RepNotifyFunc).ComparisonIndex = 0;
  (this->RepNotifyFunc).Number = 0;
  this->_padding_ = (longlong)&___7FStrProperty__6B_;
  uVar1 = (param_1->Container).Unknown;
  local_res20 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14220770c;
      goto LAB_142207725;
    }
LAB_142207749:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_142207768;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14220770c:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_142207725:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_142207749;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142207749;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_142207768:
  FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
  this->_padding_ = (longlong)&___7__TProperty_VFString__VFProperty____6B_;
  FProperty::SetElementSize(this,0x10);
  this->_padding_ = (longlong)&___7FStrProperty__6B_;
  return (FField *)this;
}

// ConvertFromType @ 142208120

EConvertFromTypeResult __thiscall
FStrProperty::ConvertFromType
          (FStrProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,uchar *param_3,
          UStruct *param_4,uchar *param_5)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  FNameEntryId FVar4;
  EConvertFromTypeResult EVar5;
  undefined4 extraout_var;
  FString *pFVar6;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FArchive *pFVar7;
  undefined4 extraout_var_02;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  ForAnyElementType FVar12;
  int iVar13;
  longlong lVar14;
  ForAnyElementType *pFVar15;
  int iVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  bool bVar19;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  FString local_f8;
  FUtf8String local_e8;
  FAnsiString local_d8;
  FText local_c8;
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  FSlotBase local_b0;
  FSlotBase local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  pFVar18 = (FScriptContainerElement *)0x0;
  iVar17 = 0;
  local_res8[0] = 0;
  FVar2 = param_1->Type;
  if (**(FName **)&this->field_0x8 == FVar2) {
    EVar5 = UseSerializeItem;
  }
  else {
    FVar4 = FNameEntryId::FromValidEName((EName)local_res8);
    FVar8.Number = 0;
    FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
    if (FVar2 == FVar8) {
      FText::FText(&local_c8);
      (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x170))
                (*(longlong **)(*(longlong *)param_2 + 8),&local_c8);
      pFVar6 = FTextInspector::GetSourceString(&local_c8);
      bVar19 = pFVar6 == (FString *)0x0;
      if (bVar19) {
        pFVar6 = ::FString::FString(&local_a0,L"");
      }
      else {
        pFVar6 = FTextInspector::GetSourceString(&local_c8);
        pFVar6 = ::FString::FString(&local_90,pFVar6);
      }
      local_118.Data = (FScriptContainerElement *)0x0;
      local_110 = (pFVar6->Data).ArrayNum;
      lVar14 = (longlong)local_110;
      pFVar18 = (pFVar6->Data).AllocatorInstance.Data;
      if (local_110 == 0) {
        local_10c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_110,0,&local_118,local_110,&local_10c);
        memcpy(local_118.Data,pFVar18,lVar14 * 2);
      }
      if ((bVar19) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if ((!bVar19) && (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      iVar17 = param_1->ArrayIndex;
      if (((iVar17 < 0) || (*(int *)&this->field_0x30 <= iVar17)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar19)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      iVar13 = local_110;
      FVar12.Data = local_118.Data;
      pFVar15 = (ForAnyElementType *)
                (param_3 +
                (longlong)*(int *)&this->field_0x44 +
                (longlong)iVar17 * (longlong)*(int *)&this->field_0x34);
      if (pFVar15 != &local_118) {
        lVar14 = (longlong)local_110;
        piVar1 = (int *)((longlong)&pFVar15[1].Data + 4);
        iVar17 = *piVar1;
        *(int *)&pFVar15[1].Data = local_110;
        if ((local_110 == 0) && (iVar17 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_110,iVar17,pFVar15,local_110,piVar1);
          if (iVar13 != 0) {
            memcpy(pFVar15->Data,FVar12.Data,lVar14 * 2);
          }
        }
      }
      if (local_118.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data);
      }
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        return Converted;
      }
    }
    else {
      FVar2 = param_1->Type;
      FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
      FVar9.Number = 0;
      FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar4.Value);
      if (FVar2 == FVar9) {
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
        ::operator<<(*(FArchive **)(*(longlong *)param_2 + 8),&local_f8);
        FVar12.Data = local_f8.Data.AllocatorInstance.Data;
        lVar14 = (longlong)local_f8.Data.ArrayNum;
        local_108.Data = (FScriptContainerElement *)0x0;
        local_100 = local_f8.Data.ArrayNum;
        if (local_f8.Data.ArrayNum == 0) {
          local_fc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_f8.Data.ArrayNum,0,&local_108,local_f8.Data.ArrayNum,&local_fc);
          memcpy(local_108.Data,FVar12.Data,lVar14 * 2);
        }
        iVar17 = param_1->ArrayIndex;
        if (((iVar17 < 0) || (*(int *)&this->field_0x30 <= iVar17)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar19)) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
        if ((param_3 == (uchar *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar19)) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
        iVar13 = local_100;
        FVar12.Data = local_108.Data;
        pFVar15 = (ForAnyElementType *)
                  (param_3 +
                  (longlong)*(int *)&this->field_0x44 +
                  (longlong)iVar17 * (longlong)*(int *)&this->field_0x34);
        if (pFVar15 != &local_108) {
          lVar14 = (longlong)local_100;
          piVar1 = (int *)((longlong)&pFVar15[1].Data + 4);
          iVar17 = *piVar1;
          *(int *)&pFVar15[1].Data = local_100;
          if ((local_100 == 0) && (iVar17 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_100,iVar17,pFVar15,local_100,piVar1);
            if (iVar13 != 0) {
              memcpy(pFVar15->Data,FVar12.Data,lVar14 * 2);
            }
          }
        }
        FVar12.Data = local_f8.Data.AllocatorInstance.Data;
        if (local_108.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data);
          FVar12.Data = local_f8.Data.AllocatorInstance.Data;
        }
      }
      else {
        FVar2 = param_1->Type;
        FVar4 = FNameEntryId::FromValidEName((EName)local_b8);
        FVar10.Number = 0;
        FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar4.Value);
        iVar13 = 0;
        if (FVar2 == FVar10) {
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e8.Data.ArrayNum = 0;
          local_e8.Data.ArrayMax = 0;
          local_b0.StructuredArchive = (FStructuredArchive *)param_2;
          pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_b0);
          ::operator<<(pFVar7,&local_e8);
          iVar16 = local_e8.Data.ArrayNum + -1;
          if (local_e8.Data.ArrayNum == 0) {
            iVar16 = iVar13;
          }
          pFVar6 = ::FString::ConstructFromPtrSize
                             (&local_80,(uchar *)local_e8.Data.AllocatorInstance.Data,iVar16);
          if (&local_70 != pFVar6) {
            pFVar18 = (pFVar6->Data).AllocatorInstance.Data;
            (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar17 = (pFVar6->Data).ArrayNum;
            (pFVar6->Data).ArrayNum = 0;
            (pFVar6->Data).ArrayMax = 0;
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          iVar13 = param_1->ArrayIndex;
          if (((iVar13 < 0) || (*(int *)&this->field_0x30 <= iVar13)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar19)) {
            pcVar3 = (code *)swi(3);
            EVar5 = (*pcVar3)();
            return EVar5;
          }
          if ((param_3 == (uchar *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar19)) {
            pcVar3 = (code *)swi(3);
            EVar5 = (*pcVar3)();
            return EVar5;
          }
          pFVar6 = (FString *)
                   (param_3 +
                   (longlong)*(int *)&this->field_0x44 +
                   (longlong)iVar13 * (longlong)*(int *)&this->field_0x34);
          if (pFVar6 != &local_70) {
            iVar13 = (pFVar6->Data).ArrayMax;
            piVar1 = &(pFVar6->Data).ArrayMax;
            (pFVar6->Data).ArrayNum = iVar17;
            if ((iVar17 == 0) && (iVar13 == 0)) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar17,iVar13,(ForAnyElementType *)pFVar6,iVar17,piVar1);
              if (iVar17 != 0) {
                memcpy((pFVar6->Data).AllocatorInstance.Data,pFVar18,(longlong)iVar17 * 2);
              }
            }
          }
          FVar12.Data = local_e8.Data.AllocatorInstance.Data;
          if (pFVar18 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar18);
            FVar12.Data = local_e8.Data.AllocatorInstance.Data;
          }
        }
        else {
          FVar2 = param_1->Type;
          FVar4 = FNameEntryId::FromValidEName((EName)local_b4);
          FVar11.Number = 0;
          FVar11.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar4.Value);
          if (FVar2 != FVar11) {
            return CannotConvert;
          }
          local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.Data.ArrayNum = 0;
          local_d8.Data.ArrayMax = 0;
          local_a8.StructuredArchive = (FStructuredArchive *)param_2;
          pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_a8);
          ::operator<<(pFVar7,&local_d8);
          iVar17 = local_d8.Data.ArrayNum + -1;
          if (local_d8.Data.ArrayNum == 0) {
            iVar17 = iVar13;
          }
          pFVar6 = ::FString::ConstructFromPtrSize
                             (&local_60,(char *)local_d8.Data.AllocatorInstance.Data,iVar17);
          if (&local_50 != pFVar6) {
            pFVar18 = (pFVar6->Data).AllocatorInstance.Data;
            (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar13 = (pFVar6->Data).ArrayNum;
            (pFVar6->Data).ArrayNum = 0;
            (pFVar6->Data).ArrayMax = 0;
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          iVar17 = param_1->ArrayIndex;
          if (((iVar17 < 0) || (*(int *)&this->field_0x30 <= iVar17)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar19)) {
            pcVar3 = (code *)swi(3);
            EVar5 = (*pcVar3)();
            return EVar5;
          }
          if ((param_3 == (uchar *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar19)) {
            pcVar3 = (code *)swi(3);
            EVar5 = (*pcVar3)();
            return EVar5;
          }
          pFVar6 = (FString *)
                   (param_3 +
                   (longlong)*(int *)&this->field_0x44 +
                   (longlong)iVar17 * (longlong)*(int *)&this->field_0x34);
          if (pFVar6 != &local_50) {
            iVar17 = (pFVar6->Data).ArrayMax;
            piVar1 = &(pFVar6->Data).ArrayMax;
            (pFVar6->Data).ArrayNum = iVar13;
            if ((iVar13 == 0) && (iVar17 == 0)) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar13,iVar17,(ForAnyElementType *)pFVar6,iVar13,piVar1);
              if (iVar13 != 0) {
                memcpy((pFVar6->Data).AllocatorInstance.Data,pFVar18,(longlong)iVar13 * 2);
              }
            }
          }
          FVar12.Data = local_d8.Data.AllocatorInstance.Data;
          if (pFVar18 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar18);
            FVar12.Data = local_d8.Data.AllocatorInstance.Data;
          }
        }
      }
      if (FVar12.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar12.Data);
      }
    }
    EVar5 = Converted;
  }
  return EVar5;
}

// ExportText_Internal @ 14220b0a0

void __thiscall
FStrProperty::ExportText_Internal
          (FStrProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  char cVar1;
  ForAnyElementType FVar2;
  longlong lVar3;
  int iVar4;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (param_3 == Container) {
    cVar1 = (**(code **)(*(longlong *)this + 0x78))();
    if (cVar1 == '\0') {
      param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
      goto LAB_14220b0fd;
    }
    FProperty::GetValue_InContainer((FProperty *)this,param_2,&local_28);
  }
  else {
LAB_14220b0fd:
    iVar4 = *(int *)((longlong)param_2 + 8) + -1;
    if (*(int *)((longlong)param_2 + 8) == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(&local_28,*(wchar_t **)param_2,iVar4);
  }
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if ((param_6 & 1U) == 0) {
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
  }
  else {
    lVar3 = (longlong)local_28.Data.ArrayNum;
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = local_28.Data.ArrayNum;
      if (local_28.Data.ArrayNum == 0) {
        local_38.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_38,
                   local_28.Data.ArrayNum,&local_38.Data.ArrayMax);
        memcpy(local_38.Data.AllocatorInstance.Data,FVar2.Data,lVar3 * 2);
      }
      ::FString::ReplaceCharWithEscapedCharInline
                (&local_38,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
      ::FString::PrintfImpl(&local_18,L"\"%s\"");
      iVar4 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      goto LAB_14220b20e;
    }
    FVar2.Data = (FScriptContainerElement *)L"\"\"";
    iVar4 = 2;
  }
  ::FString::AppendChars(param_1,(wchar_t *)FVar2.Data,iVar4);
LAB_14220b20e:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetValueTypeHashInternal @ 14220fe80

uint __thiscall FStrProperty::GetValueTypeHashInternal(FStrProperty *this,void *param_1)

{
  uint uVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  iVar2 = *(int *)((longlong)param_1 + 8) + -1;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    pwVar3 = L"";
    iVar2 = 0;
  }
  else {
    pwVar3 = *(wchar_t **)param_1;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar3);
  return uVar1;
}

// ImportText_Internal @ 142211770

wchar_t * __thiscall
FStrProperty::ImportText_Internal
          (FStrProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_48;
  FString local_38;
  
  pwVar8 = (wchar_t *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if ((param_5 & 1U) == 0) {
    ::FString::operator=(&local_48,param_1);
    sVar6 = wcslen(param_1);
    pwVar8 = param_1 + (int)sVar6;
LAB_1422118b7:
    if (param_3 == Container) {
      cVar5 = (**(code **)(*(longlong *)this + 0x70))(this);
      if (cVar5 != '\0') {
        FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_48);
        goto LAB_14221182f;
      }
      param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
    }
    if (param_2 != &local_48) {
      pFVar1 = (((FString *)param_2)->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (((FString *)param_2)->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (((FString *)param_2)->Data).ArrayNum = local_48.Data.ArrayNum;
      (((FString *)param_2)->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
    }
  }
  else {
    if (*param_1 != L'\"') {
      FOutputDevice::LogfImpl(param_6,L"Missing opening \'\"\' in string property value: %s");
      pwVar8 = (wchar_t *)0x0;
      goto LAB_14221182f;
    }
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    pwVar7 = FPropertyHelpers::ReadToken(param_1,&local_38,false);
    uVar3 = local_38.Data._8_8_;
    FVar2.Data = local_38.Data.AllocatorInstance.Data;
    if (pwVar7 != (wchar_t *)0x0) {
      if ((pwVar7 <= param_1) || (pwVar7[-1] == L'\"')) {
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        uVar4 = local_38.Data._8_8_;
        local_38.Data.ArrayNum = (int)uVar3;
        local_38.Data.ArrayMax = SUB84(uVar3,4);
        local_48.Data.ArrayNum = local_38.Data.ArrayNum;
        local_48.Data.ArrayMax = local_38.Data.ArrayMax;
        local_48.Data.AllocatorInstance.Data = FVar2.Data;
        pwVar8 = pwVar7;
        local_38.Data._8_8_ = uVar4;
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        goto LAB_1422118b7;
      }
      FOutputDevice::LogfImpl(param_6,L"Missing terminating \'\"\' in string property value: %s");
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
LAB_14221182f:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return pwVar8;
}

// StaticClass @ 14222de50

FFieldClass * __cdecl FStrProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FStrProperty",0x4000,
                 CASTCLASS_FProperty|CASTCLASS_FStrProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FStrProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

