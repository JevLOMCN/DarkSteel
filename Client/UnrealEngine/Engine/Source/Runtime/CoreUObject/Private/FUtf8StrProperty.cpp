// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// GetFieldSize @ 14226f260

ulong64 __thiscall FUtf8StrProperty::GetFieldSize(FUtf8StrProperty *this)

{
  return 0x70;
}

// FUtf8StrProperty @ 142294c50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FUtf8StrProperty * __thiscall
FUtf8StrProperty::FUtf8StrProperty
          (FUtf8StrProperty *this,FFieldVariant param_1,FGenericPropertyParams *param_2)

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
  *(undefined ***)this = &___7__TProperty_VFUtf8String__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x10);
  *(undefined ***)this = &___7FUtf8StrProperty__6B_;
  return this;
}

// FUtf8StrProperty @ 142294d30

FUtf8StrProperty * __thiscall
FUtf8StrProperty::FUtf8StrProperty
          (FUtf8StrProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

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
  *(undefined ***)this = &___7__TProperty_VFUtf8String__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x10);
  *(undefined ***)this = &___7FUtf8StrProperty__6B_;
  return this;
}

// Construct @ 142298c10

FField * __cdecl
FUtf8StrProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

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
                (&::StaticFieldClass,L"FUtf8StrProperty",0x1000000000000000,
                 CASTCLASS_FUtf8StrProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar2,Construct);
      atexit(`FUtf8StrProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
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
  this->_padding_ = (longlong)&___7FUtf8StrProperty__6B_;
  uVar1 = (param_1->Container).Unknown;
  local_res20 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_142298cfc;
      goto LAB_142298d15;
    }
LAB_142298d39:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_142298d58;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_142298cfc:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_142298d15:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_142298d39;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142298d39;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_142298d58:
  FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
  this->_padding_ = (longlong)&___7__TProperty_VFUtf8String__VFProperty____6B_;
  FProperty::SetElementSize(this,0x10);
  this->_padding_ = (longlong)&___7FUtf8StrProperty__6B_;
  return (FField *)this;
}

// ConvertFromType @ 142299150

EConvertFromTypeResult __thiscall
FUtf8StrProperty::ConvertFromType
          (FUtf8StrProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,
          uchar *param_3,UStruct *param_4,uchar *param_5)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  FNameEntryId FVar5;
  EConvertFromTypeResult EVar6;
  undefined4 extraout_var;
  FString *pFVar7;
  FUtf8String *pFVar8;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FArchive *pFVar9;
  undefined4 extraout_var_02;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  ForAnyElementType FVar14;
  int iVar15;
  size_t sVar16;
  ForAnyElementType *pFVar17;
  int iVar18;
  int iVar19;
  FScriptContainerElement *_Src;
  bool bVar20;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  FString local_118;
  FUtf8String local_108;
  FAnsiString local_f8;
  FText local_e8;
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  FSlotBase local_d0;
  FSlotBase local_c8;
  FUtf8String local_c0;
  FString local_b0;
  FString local_a0;
  FUtf8String local_90;
  FUtf8String local_80;
  FUtf8String local_70;
  FUtf8String local_60;
  FUtf8String local_50;
  
  _Src = (FScriptContainerElement *)0x0;
  iVar19 = 0;
  local_res8[0] = 0;
  FVar3 = param_1->Type;
  if (**(FName **)&this->field_0x8 == FVar3) {
    EVar6 = UseSerializeItem;
  }
  else {
    FVar5 = FNameEntryId::FromValidEName((EName)local_res8);
    FVar10.Number = 0;
    FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
    iVar15 = 0;
    if (FVar3 == FVar10) {
      FText::FText(&local_e8);
      (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x170))
                (*(longlong **)(*(longlong *)param_2 + 8),&local_e8);
      pFVar7 = FTextInspector::GetSourceString(&local_e8);
      bVar20 = pFVar7 == (FString *)0x0;
      if (bVar20) {
        pFVar7 = ::FString::FString(&local_b0,L"");
      }
      else {
        pFVar7 = FTextInspector::GetSourceString(&local_e8);
        pFVar7 = ::FString::FString(&local_a0,pFVar7);
      }
      iVar2 = (pFVar7->Data).ArrayNum;
      iVar18 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar18 = iVar15;
      }
      pFVar8 = FUtf8String::ConstructFromPtrSize
                         (&local_c0,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar18);
      if (&local_90 != pFVar8) {
        _Src = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar19 = (pFVar8->Data).ArrayNum;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if ((bVar20) && (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if ((!bVar20) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      iVar15 = param_1->ArrayIndex;
      if (((iVar15 < 0) || (*(int *)&this->field_0x30 <= iVar15)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar20)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar20)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      pFVar8 = (FUtf8String *)
               (param_3 +
               (longlong)*(int *)&this->field_0x44 +
               (longlong)iVar15 * (longlong)*(int *)&this->field_0x34);
      if (pFVar8 != &local_90) {
        iVar15 = (pFVar8->Data).ArrayMax;
        piVar1 = &(pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = iVar19;
        if ((iVar19 == 0) && (iVar15 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar19,iVar15,(ForAnyElementType *)pFVar8,iVar19,piVar1);
          if (iVar19 != 0) {
            memcpy((pFVar8->Data).AllocatorInstance.Data,_Src,(longlong)iVar19);
          }
        }
      }
      if (_Src != (FScriptContainerElement *)0x0) {
        FMemory::Free(_Src);
      }
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
        return Converted;
      }
    }
    else {
      FVar3 = param_1->Type;
      FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
      FVar11.Number = 0;
      FVar11.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar5.Value);
      if (FVar3 == FVar11) {
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.Data.ArrayNum = 0;
        local_118.Data.ArrayMax = 0;
        ::operator<<(*(FArchive **)(*(longlong *)param_2 + 8),&local_118);
        iVar19 = local_118.Data.ArrayNum + -1;
        if (local_118.Data.ArrayNum == 0) {
          iVar19 = iVar15;
        }
        pFVar8 = FUtf8String::ConstructFromPtrSize
                           (&local_80,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar19);
        if (&local_70 != pFVar8) {
          _Src = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar15 = (pFVar8->Data).ArrayNum;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
        }
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        iVar19 = param_1->ArrayIndex;
        if (((iVar19 < 0) || (*(int *)&this->field_0x30 <= iVar19)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar20)) {
          pcVar4 = (code *)swi(3);
          EVar6 = (*pcVar4)();
          return EVar6;
        }
        if ((param_3 == (uchar *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar20)) {
          pcVar4 = (code *)swi(3);
          EVar6 = (*pcVar4)();
          return EVar6;
        }
        pFVar8 = (FUtf8String *)
                 (param_3 +
                 (longlong)*(int *)&this->field_0x44 +
                 (longlong)iVar19 * (longlong)*(int *)&this->field_0x34);
        if (pFVar8 != &local_70) {
          iVar19 = (pFVar8->Data).ArrayMax;
          piVar1 = &(pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = iVar15;
          if ((iVar15 == 0) && (iVar19 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar15,iVar19,(ForAnyElementType *)pFVar8,iVar15,piVar1);
            if (iVar15 != 0) {
              memcpy((pFVar8->Data).AllocatorInstance.Data,_Src,(longlong)iVar15);
            }
          }
        }
        FVar14.Data = local_118.Data.AllocatorInstance.Data;
        if (_Src != (FScriptContainerElement *)0x0) {
          FMemory::Free(_Src);
          FVar14.Data = local_118.Data.AllocatorInstance.Data;
        }
      }
      else {
        FVar3 = param_1->Type;
        FVar5 = FNameEntryId::FromValidEName((EName)local_d8);
        FVar12.Number = 0;
        FVar12.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar5.Value);
        if (FVar3 == FVar12) {
          local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.Data.ArrayNum = 0;
          local_108.Data.ArrayMax = 0;
          local_d0.StructuredArchive = (FStructuredArchive *)param_2;
          pFVar9 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_d0);
          ::operator<<(pFVar9,&local_108);
          FVar14.Data = local_108.Data.AllocatorInstance.Data;
          sVar16 = (size_t)local_108.Data.ArrayNum;
          local_128.Data = (FScriptContainerElement *)0x0;
          local_120 = local_108.Data.ArrayNum;
          if (local_108.Data.ArrayNum == 0) {
            local_11c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_108.Data.ArrayNum,0,&local_128,local_108.Data.ArrayNum,&local_11c);
            memcpy(local_128.Data,FVar14.Data,sVar16);
          }
          iVar19 = param_1->ArrayIndex;
          if (((iVar19 < 0) || (*(int *)&this->field_0x30 <= iVar19)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar20)) {
            pcVar4 = (code *)swi(3);
            EVar6 = (*pcVar4)();
            return EVar6;
          }
          if ((param_3 == (uchar *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar20)) {
            pcVar4 = (code *)swi(3);
            EVar6 = (*pcVar4)();
            return EVar6;
          }
          iVar15 = local_120;
          FVar14.Data = local_128.Data;
          pFVar17 = (ForAnyElementType *)
                    (param_3 +
                    (longlong)*(int *)&this->field_0x44 +
                    (longlong)iVar19 * (longlong)*(int *)&this->field_0x34);
          if (pFVar17 != &local_128) {
            sVar16 = (size_t)local_120;
            piVar1 = (int *)((longlong)&pFVar17[1].Data + 4);
            iVar19 = *piVar1;
            *(int *)&pFVar17[1].Data = local_120;
            if ((local_120 == 0) && (iVar19 == 0)) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,local_120,iVar19,pFVar17,local_120,piVar1);
              if (iVar15 != 0) {
                memcpy(pFVar17->Data,FVar14.Data,sVar16);
              }
            }
          }
          FVar14.Data = local_108.Data.AllocatorInstance.Data;
          if (local_128.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data);
            FVar14.Data = local_108.Data.AllocatorInstance.Data;
          }
        }
        else {
          FVar3 = param_1->Type;
          FVar5 = FNameEntryId::FromValidEName((EName)local_d4);
          FVar13.Number = 0;
          FVar13.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar5.Value);
          if (FVar3 != FVar13) {
            return CannotConvert;
          }
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f8.Data.ArrayNum = 0;
          local_f8.Data.ArrayMax = 0;
          local_c8.StructuredArchive = (FStructuredArchive *)param_2;
          pFVar9 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_c8);
          ::operator<<(pFVar9,&local_f8);
          iVar19 = local_f8.Data.ArrayNum + -1;
          if (local_f8.Data.ArrayNum == 0) {
            iVar19 = iVar15;
          }
          pFVar8 = FUtf8String::ConstructFromPtrSize
                             (&local_60,(char *)local_f8.Data.AllocatorInstance.Data,iVar19);
          if (&local_50 != pFVar8) {
            _Src = (pFVar8->Data).AllocatorInstance.Data;
            (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar15 = (pFVar8->Data).ArrayNum;
            (pFVar8->Data).ArrayNum = 0;
            (pFVar8->Data).ArrayMax = 0;
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          iVar19 = param_1->ArrayIndex;
          if (((iVar19 < 0) || (*(int *)&this->field_0x30 <= iVar19)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar20)) {
            pcVar4 = (code *)swi(3);
            EVar6 = (*pcVar4)();
            return EVar6;
          }
          if ((param_3 == (uchar *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar20)) {
            pcVar4 = (code *)swi(3);
            EVar6 = (*pcVar4)();
            return EVar6;
          }
          pFVar8 = (FUtf8String *)
                   (param_3 +
                   (longlong)*(int *)&this->field_0x44 +
                   (longlong)iVar19 * (longlong)*(int *)&this->field_0x34);
          if (pFVar8 != &local_50) {
            iVar19 = (pFVar8->Data).ArrayMax;
            piVar1 = &(pFVar8->Data).ArrayMax;
            (pFVar8->Data).ArrayNum = iVar15;
            if ((iVar15 == 0) && (iVar19 == 0)) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar15,iVar19,(ForAnyElementType *)pFVar8,iVar15,piVar1);
              if (iVar15 != 0) {
                memcpy((pFVar8->Data).AllocatorInstance.Data,_Src,(longlong)iVar15);
              }
            }
          }
          FVar14.Data = local_f8.Data.AllocatorInstance.Data;
          if (_Src != (FScriptContainerElement *)0x0) {
            FMemory::Free(_Src);
            FVar14.Data = local_f8.Data.AllocatorInstance.Data;
          }
        }
      }
      if (FVar14.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar14.Data);
      }
    }
    EVar6 = Converted;
  }
  return EVar6;
}

// ExportText_Internal @ 14229a2c0

void __thiscall
FUtf8StrProperty::ExportText_Internal
          (FUtf8StrProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  char cVar1;
  ForAnyElementType FVar2;
  size_t _Size;
  int iVar3;
  FUtf8String local_38;
  FUtf8String local_28;
  FUtf8String local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (param_3 == Container) {
    cVar1 = (**(code **)(*(longlong *)this + 0x78))();
    if (cVar1 == '\0') {
      param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
      goto LAB_14229a31d;
    }
    FProperty::GetValue_InContainer((FProperty *)this,param_2,&local_28);
  }
  else {
LAB_14229a31d:
    iVar3 = *(int *)((longlong)param_2 + 8) + -1;
    if (*(int *)((longlong)param_2 + 8) == 0) {
      iVar3 = 0;
    }
    FUtf8String::AssignRange(&local_28,*(uchar **)param_2,iVar3);
  }
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if ((param_6 & 1U) == 0) {
    iVar3 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
  }
  else {
    _Size = (size_t)local_28.Data.ArrayNum;
    iVar3 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    if (0 < iVar3) {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = local_28.Data.ArrayNum;
      if (local_28.Data.ArrayNum == 0) {
        local_38.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_38,
                   local_28.Data.ArrayNum,&local_38.Data.ArrayMax);
        memcpy(local_38.Data.AllocatorInstance.Data,FVar2.Data,_Size);
      }
      FUtf8String::ReplaceCharWithEscapedCharInline
                (&local_38,(TArray<char8_t,TSizedDefaultAllocator<32>_> *)0x0);
      FUtf8String::PrintfImpl(&local_18,(uchar *)"\"%s\"");
      iVar3 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      ::FString::AppendChars(param_1,(uchar *)local_18.Data.AllocatorInstance.Data,iVar3);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      goto LAB_14229a42b;
    }
    FVar2.Data = (FScriptContainerElement *)"\"\"";
    iVar3 = 2;
  }
  ::FString::AppendChars(param_1,(uchar *)FVar2.Data,iVar3);
LAB_14229a42b:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetValueTypeHashInternal @ 14229eaf0

uint __thiscall FUtf8StrProperty::GetValueTypeHashInternal(FUtf8StrProperty *this,void *param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *(int *)((longlong)param_1 + 8) + -1;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    pcVar3 = "";
    iVar2 = 0;
  }
  else {
    pcVar3 = *(char **)param_1;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<char8_t>(iVar2,(uchar *)pcVar3);
  return uVar1;
}

// ImportText_Internal @ 14229fe50

wchar_t * __thiscall
FUtf8StrProperty::ImportText_Internal
          (FUtf8StrProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  char cVar1;
  size_t sVar2;
  FScriptContainerElement *pFVar3;
  FUtf8String *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar7;
  int iVar8;
  FScriptContainerElement *local_68;
  undefined8 local_60;
  FUtf8String local_58;
  FUtf8String local_48;
  FUtf8String local_38;
  FScriptContainerElement *pFVar6;
  
  pFVar6 = (FScriptContainerElement *)0x0;
  pFVar5 = (FScriptContainerElement *)0x0;
  local_68 = (FScriptContainerElement *)0x0;
  local_60._0_4_ = 0;
  local_60._4_4_ = 0;
  if ((param_5 & 1U) == 0) {
    FUtf8String::FUtf8String(&local_58,param_1);
    if (local_68 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68);
    }
    local_68 = local_58.Data.AllocatorInstance.Data;
    local_60._0_4_ = local_58.Data.ArrayNum;
    local_60._4_4_ = local_58.Data.ArrayMax;
    sVar2 = wcslen(param_1);
    pFVar5 = (FScriptContainerElement *)(param_1 + (int)sVar2);
LAB_14229ffef:
    if (param_3 == Container) {
      cVar1 = (**(code **)(*(longlong *)this + 0x70))(this);
      if (cVar1 != '\0') {
        FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_68);
        goto LAB_14229ff2f;
      }
      param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
    }
    if (param_2 != &local_68) {
      if (*(FScriptContainerElement **)param_2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(*(FScriptContainerElement **)param_2);
      }
      *(FScriptContainerElement **)param_2 = local_68;
      local_68 = (FScriptContainerElement *)0x0;
      *(int *)((longlong)param_2 + 8) = (int)local_60;
      *(int *)((longlong)param_2 + 0xc) = local_60._4_4_;
      local_60._0_4_ = 0;
      local_60._4_4_ = 0;
    }
  }
  else {
    if (*param_1 != L'\"') {
      FOutputDevice::LogfImpl(param_6,L"Missing opening \'\"\' in string property value: %s");
      pFVar5 = pFVar6;
      goto LAB_14229ff2f;
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    pFVar3 = (FScriptContainerElement *)
             FPropertyHelpers::ReadToken(param_1,(FString *)&local_58,false);
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      if ((pFVar3 <= param_1) || (*(wchar_t *)(pFVar3 + -2) == L'\"')) {
        iVar8 = 0;
        iVar7 = local_58.Data.ArrayNum + -1;
        if (local_58.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        pFVar4 = FUtf8String::ConstructFromPtrSize
                           (&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar7);
        iVar7 = iVar8;
        if (&local_38 != pFVar4) {
          pFVar6 = (pFVar4->Data).AllocatorInstance.Data;
          (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar8 = (pFVar4->Data).ArrayNum;
          iVar7 = (pFVar4->Data).ArrayMax;
          (pFVar4->Data).ArrayNum = 0;
          (pFVar4->Data).ArrayMax = 0;
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_68 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68);
        }
        local_60._4_4_ = iVar7;
        local_60._0_4_ = iVar8;
        pFVar5 = pFVar3;
        local_68 = pFVar6;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14229ffef;
      }
      FOutputDevice::LogfImpl(param_6,L"Missing terminating \'\"\' in string property value: %s");
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
LAB_14229ff2f:
  if (local_68 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68);
  }
  return (wchar_t *)pFVar5;
}

// StaticClass @ 1422a7660

FFieldClass * __cdecl FUtf8StrProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FUtf8StrProperty",0x1000000000000000,
                 CASTCLASS_FUtf8StrProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FUtf8StrProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

