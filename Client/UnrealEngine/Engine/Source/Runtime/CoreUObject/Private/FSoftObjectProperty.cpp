// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 29

// GetFieldSize @ 141f81ce0

ulong64 __thiscall FSoftObjectProperty::GetFieldSize(FSoftObjectProperty *this)

{
  return 0x78;
}

// FSoftObjectProperty @ 142162700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FSoftObjectProperty * __thiscall
FSoftObjectProperty::FSoftObjectProperty
          (FSoftObjectProperty *this,FFieldVariant param_1,FObjectPropertyParams *param_2)

{
  ulonglong uVar1;
  UClass *pUVar2;
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
  FObjectPropertyBase::FObjectPropertyBase
            ((FObjectPropertyBase *)this,(FFieldVariant)&local_res8,param_2,CPF_HasGetValueTypeHash)
  ;
  *(undefined ***)this = &___7__TProperty_UFSoftObjectPtr__VFObjectPropertyBase____6B_;
  FProperty::SetElementSize((FProperty *)this,0x28);
  *(undefined ***)this = &___7__TFObjectPropertyBase_UFSoftObjectPtr____6B_;
  if (param_2->ClassFunc == (_func___cdecl_UClass_ptr *)0x0) {
    pUVar2 = (UClass *)0x0;
  }
  else {
    pUVar2 = (*param_2->ClassFunc)();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(UClass **)&this->field_0x70 = pUVar2;
  *(undefined ***)this = &___7FSoftObjectProperty__6B_;
  return this;
}

// FSoftObjectProperty @ 142162810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FSoftObjectProperty * __thiscall
FSoftObjectProperty::FSoftObjectProperty
          (FSoftObjectProperty *this,FFieldVariant param_1,
          FObjectPropertyParamsWithoutClass *param_2,UClass *param_3)

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
  FObjectPropertyBase::FObjectPropertyBase
            ((FObjectPropertyBase *)this,(FFieldVariant)&local_res8,param_2,CPF_HasGetValueTypeHash)
  ;
  *(undefined ***)this = &___7__TProperty_UFSoftObjectPtr__VFObjectPropertyBase____6B_;
  FProperty::SetElementSize((FProperty *)this,0x28);
  *(undefined ***)this = &___7__TFObjectPropertyBase_UFSoftObjectPtr____6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  *(UClass **)&this->field_0x70 = param_3;
  *(undefined ***)this = &___7FSoftObjectProperty__6B_;
  return this;
}

// FSoftObjectProperty @ 142162910

FSoftObjectProperty * __thiscall
FSoftObjectProperty::FSoftObjectProperty
          (FSoftObjectProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

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
  FObjectPropertyBase::FObjectPropertyBase
            ((FObjectPropertyBase *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7__TProperty_UFSoftObjectPtr__VFObjectPropertyBase____6B_;
  FProperty::SetElementSize((FProperty *)this,0x28);
  *(undefined ***)this = &___7FSoftObjectProperty__6B_;
  *(undefined8 *)&this->field_0x70 = 0;
  return this;
}

// AllowCrossLevel @ 142167210

bool __thiscall FSoftObjectProperty::AllowCrossLevel(FSoftObjectProperty *this)

{
  return true;
}

// Construct @ 14216c680

FField * __cdecl
FSoftObjectProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  FSoftObjectProperty *this;
  FFieldClass *pFVar1;
  FSoftObjectProperty *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x78,0);
  pFVar2 = (FSoftObjectProperty *)0x0;
  if (this != (FSoftObjectProperty *)0x0) {
    pFVar1 = StaticClass();
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,pFVar1);
    *(undefined8 *)&this->field_0x48 = 0;
    *(undefined8 *)&this->field_0x50 = 0;
    *(undefined8 *)&this->field_0x58 = 0;
    *(undefined8 *)&this->field_0x60 = 0;
    *(undefined8 *)&this->field_0x68 = 0;
    *(undefined8 *)&this->field_0x70 = 0;
    *(undefined ***)this = &___7FSoftObjectProperty__6B_;
    local_res20 = (param_1->Container).Unknown;
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    pFVar2 = FSoftObjectProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
  }
  return (FField *)pFVar2;
}

// ConvertFromType @ 142172040

/* WARNING: Type propagation algorithm not settling */

EConvertFromTypeResult __thiscall
FSoftObjectProperty::ConvertFromType
          (FSoftObjectProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,
          uchar *param_3,UStruct *param_4,uchar *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  FName FVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  bool bVar7;
  EConvertFromTypeResult EVar8;
  FNameEntryId FVar9;
  uint uVar10;
  FArchive *pFVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName FVar12;
  FName FVar13;
  int *piVar14;
  size_t _Size;
  undefined1 local_res10 [8];
  FSlotBase local_res18;
  undefined1 local_98 [8];
  FSerializedPropertyScope local_90;
  FSerializedPropertyScope local_80;
  FSoftObjectPath local_70;
  undefined8 local_50;
  FSoftObjectPath local_48;
  
  piVar14 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_res18.StructuredArchive = (FStructuredArchive *)param_2;
  if ((*piVar14 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_AssetObjectProperty,"AssetObjectProperty");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar14 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&NAME_SoftObjectPath,"SoftObjectPath");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar14 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&NAME_SoftClassPath,"SoftClassPath");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar14 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&NAME_StringAssetReference,"StringAssetReference");
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar14 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FName::FName(&NAME_StringClassReference,"StringClassReference");
    _Init_thread_footer(&::_TSS4);
  }
  pFVar11 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
  FVar5 = param_1->Type;
  if (FVar5 == NAME_AssetObjectProperty) {
    iVar1 = param_1->ArrayIndex;
    if (((iVar1 < 0) || (*(int *)&this->field_0x30 <= iVar1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7)
       ) {
      pcVar6 = (code *)swi(3);
      EVar8 = (*pcVar6)();
      return EVar8;
    }
    if ((param_3 == (uchar *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      EVar8 = (*pcVar6)();
      return EVar8;
    }
    FPropertyTag::SerializeTaggedProperty
              (param_1,(FStructuredArchiveSlot)local_res18.StructuredArchive,(FProperty *)this,
               param_3 + (longlong)*(int *)&this->field_0x44 +
                         (longlong)iVar1 * (longlong)*(int *)&this->field_0x34,(uchar *)0x0);
    if ((pFVar11->field_0x29 & 4) != 0) {
      return CannotConvert;
    }
LAB_14217248b:
    EVar8 = Converted;
  }
  else {
    FVar9 = FNameEntryId::FromValidEName((EName)local_res10);
    FVar12.Number = 0;
    FVar12.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar9.Value);
    if (FVar5 == FVar12) {
      iVar1 = param_1->ArrayIndex;
      if (((iVar1 < 0) || (*(int *)&this->field_0x30 <= iVar1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        EVar8 = (*pcVar6)();
        return EVar8;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        EVar8 = (*pcVar6)();
        return EVar8;
      }
      iVar2 = *(int *)&this->field_0x34;
      iVar3 = *(int *)&this->field_0x44;
      if ((param_3 + (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2 == (uchar *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PropertyValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySoftObjectPtr.cpp"
                             ,0xee,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        EVar8 = (*pcVar6)();
        return EVar8;
      }
      local_90.Ar = pFVar11;
      local_90.Property = (FProperty *)this;
      FSerializedPropertyScope::PushProperty(&local_90);
      bVar7 = FSoftObjectPath::SerializeFromMismatchedTag
                        ((FSoftObjectPath *)
                         (param_3 + (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2 + 8),param_1
                         ,(FStructuredArchiveSlot)local_res18.StructuredArchive);
      FSerializedPropertyScope::PopProperty(&local_90);
      return -(uint)bVar7 & Converted;
    }
    FVar5 = param_1->Type;
    FVar9 = FNameEntryId::FromValidEName((EName)local_98);
    FVar13.Number = 0;
    FVar13.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar9.Value);
    if (FVar5 == FVar13) {
      uVar4 = (param_1->TypeName).Index;
      uVar10 = 0;
      if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar4 >> 0xd] + 8
                      + (ulonglong)(uVar4 & 0x1fff) * 0xc)) {
        uVar10 = uVar4 + 1;
      }
      FVar5 = *(FName *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar10 >> 0xd] +
                        (ulonglong)(uVar10 & 0x1fff) * 0xc);
      if ((((FVar5 == NAME_SoftObjectPath) || (FVar5 == NAME_SoftClassPath)) ||
          (FVar5 == NAME_StringAssetReference)) || (FVar5 == NAME_StringClassReference)) {
        local_70.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_70.AssetPath.PackageName.Number = 0;
        local_70.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_70.AssetPath.AssetName.Number = 0;
        local_70.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_70.SubPathString.Data.ArrayNum = 0;
        local_70.SubPathString.Data.ArrayMax = 0;
        local_80.Ar = pFVar11;
        local_80.Property = (FProperty *)this;
        FSerializedPropertyScope::PushProperty(&local_80);
        FSoftObjectPath::Serialize(&local_70,(FStructuredArchiveSlot)local_res18.StructuredArchive);
        local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.SubPathString.Data.ArrayNum = 0;
        local_48.SubPathString.Data.ArrayMax = 0;
        local_50 = 0;
        local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_48.AssetPath.AssetName.Number = 0;
        local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_48.AssetPath.PackageName.Number = 0;
        FUtf8String::Reset(&local_48.SubPathString,0);
        _Src.Data = local_70.SubPathString.Data.AllocatorInstance.Data;
        iVar1 = local_70.SubPathString.Data.ArrayNum;
        _Size = (size_t)local_70.SubPathString.Data.ArrayNum;
        local_50 = 0;
        local_48.SubPathString.Data.ArrayNum = local_70.SubPathString.Data.ArrayNum;
        local_48.AssetPath.PackageName = local_70.AssetPath.PackageName;
        local_48.AssetPath.AssetName = local_70.AssetPath.AssetName;
        if ((local_70.SubPathString.Data.ArrayNum == 0) &&
           (local_48.SubPathString.Data.ArrayMax == 0)) {
          local_48.SubPathString.Data._8_8_ = local_70.SubPathString.Data._8_8_ & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_70.SubPathString.Data.ArrayNum,local_48.SubPathString.Data.ArrayMax,
                     (ForAnyElementType *)&local_48.SubPathString,
                     local_70.SubPathString.Data.ArrayNum,&local_48.SubPathString.Data.ArrayMax);
          if (iVar1 != 0) {
            memcpy(local_48.SubPathString.Data.AllocatorInstance.Data,_Src.Data,_Size);
          }
        }
        iVar1 = param_1->ArrayIndex;
        if (((iVar1 < 0) || (*(int *)&this->field_0x30 <= iVar1)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          EVar8 = (*pcVar6)();
          return EVar8;
        }
        if ((param_3 == (uchar *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          EVar8 = (*pcVar6)();
          return EVar8;
        }
        iVar2 = *(int *)&this->field_0x34;
        iVar3 = *(int *)&this->field_0x44;
        *(undefined8 *)(param_3 + (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2) = local_50;
        FSoftObjectPath::operator=
                  ((FSoftObjectPath *)
                   (param_3 + (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2 + 8),&local_48);
        if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
        }
        FSerializedPropertyScope::PopProperty(&local_80);
        if (local_70.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.SubPathString.Data.AllocatorInstance.Data);
        }
        goto LAB_14217248b;
      }
    }
    EVar8 = UseSerializeItem;
  }
  return EVar8;
}

// ExportText_Internal @ 1421773d0

void __thiscall
FSoftObjectProperty::ExportText_Internal
          (FSoftObjectProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  ForAnyElementType _Src;
  int iVar1;
  char cVar2;
  bool bVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  FUObjectItem *pFVar6;
  size_t _Size;
  UObject *local_88;
  FSoftObjectPath local_80;
  FSoftObjectPath local_60;
  FWeakObjectPtr local_40;
  FSoftObjectPath local_38;
  
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  local_40.ObjectIndex = 0;
  local_40.ObjectSerialNumber = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_38.SubPathString,0);
  if (param_3 == Container) {
    cVar2 = (**(code **)(*(longlong *)this + 0x78))(this);
    if (cVar2 == '\0') {
      param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
      goto LAB_14217744d;
    }
    FProperty::GetValue_InContainer((FProperty *)this,param_2,&local_40);
  }
  else {
LAB_14217744d:
    local_40 = *(FWeakObjectPtr *)param_2;
    FSoftObjectPath::operator=(&local_38,(FSoftObjectPath *)((longlong)param_2 + 8));
  }
  local_80.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.SubPathString.Data.ArrayMax = 0;
  pUVar4 = FWeakObjectPtr::Get(&local_40);
  if (pUVar4 == (UObject *)0x0) {
    if (local_38.AssetPath.PackageName != (FName)0x0) {
      pUVar5 = FSoftObjectPath::ResolveObject(&local_38);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      bVar3 = (*IsInAsyncLoadingThread)();
      if (((bVar3) && (pUVar5 != (UObject *)0x0)) &&
         (pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar5->field_0xc),
         ((pFVar6->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_142177500:
        bVar3 = true;
        if ((*(uint *)&pUVar5->field_0x8 >> 0x1e & 1) != 0) goto LAB_14217750e;
      }
      else {
        local_88 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=(&local_40,(FObjectPtr)&local_88);
        if (pUVar5 != (UObject *)0x0) goto LAB_142177500;
LAB_14217750e:
        bVar3 = false;
      }
      pUVar4 = (UObject *)0x0;
      if (bVar3) {
        pUVar4 = pUVar5;
      }
    }
    _Src.Data = local_38.SubPathString.Data.AllocatorInstance.Data;
    if (pUVar4 == (UObject *)0x0) {
      iVar1 = local_38.SubPathString.Data.ArrayNum;
      _Size = (size_t)local_38.SubPathString.Data.ArrayNum;
      local_80.SubPathString.Data.ArrayNum = local_38.SubPathString.Data.ArrayNum;
      local_80.AssetPath.PackageName = local_38.AssetPath.PackageName;
      local_80.AssetPath.AssetName = local_38.AssetPath.AssetName;
      if (((local_38.SubPathString.Data.ArrayNum != 0) ||
          (local_80.SubPathString.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_38.SubPathString.Data.ArrayNum,local_80.SubPathString.Data.ArrayMax,
                     (ForAnyElementType *)&local_80.SubPathString,
                     local_38.SubPathString.Data.ArrayNum,&local_80.SubPathString.Data.ArrayMax),
         iVar1 != 0)) {
        memcpy(local_80.SubPathString.Data.AllocatorInstance.Data,_Src.Data,_Size);
      }
      goto LAB_1421775bf;
    }
  }
  local_60.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_60.AssetPath.PackageName.Number = 0;
  local_60.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_60.AssetPath.AssetName.Number = 0;
  local_60.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.SubPathString.Data.ArrayNum = 0;
  local_60.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_60,pUVar4);
  local_80.AssetPath.PackageName = local_60.AssetPath.PackageName;
  local_80.AssetPath.AssetName = local_60.AssetPath.AssetName;
  if (local_80.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.SubPathString.Data.AllocatorInstance.Data);
  }
  local_80.SubPathString.Data.AllocatorInstance.Data =
       local_60.SubPathString.Data.AllocatorInstance.Data;
  local_80.SubPathString.Data.ArrayNum = local_60.SubPathString.Data.ArrayNum;
  local_80.SubPathString.Data.ArrayMax = local_60.SubPathString.Data.ArrayMax;
LAB_1421775bf:
  FSoftObjectPath::ExportTextItem(&local_80,param_1,&local_80,param_5,param_6,param_7);
  if (local_80.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// GetCPPMacroType @ 142179bc0

FString * __thiscall
FSoftObjectProperty::GetCPPMacroType
          (FSoftObjectProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = *(FName *)(*(longlong *)&this->field_0x70 + 0x18);
  ::FName::ToString(&local_res8,&local_18);
  (**(code **)(**(longlong **)&this->field_0x70 + 0x318))();
  ::FString::PrintfImpl(&local_28,L"TSoftObjectPtr<%s%s>");
  if (param_1 != &local_28) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_28.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(__return_storage_ptr__,L"SOFTOBJECT");
  return __return_storage_ptr__;
}

// GetCPPType @ 14217b450

FString * __thiscall
FSoftObjectProperty::GetCPPType
          (FSoftObjectProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  bool bVar1;
  FName local_res8;
  FString local_18;
  
  if ((*(longlong *)&this->field_0x70 == 0) &&
     (local_res8 = (FName)this,
     bVar1 = `FSoftObjectProperty::GetCPPType'::__l3::<lambda_1>::operator()(&local_res8), !bVar1))
  {
    ::FString::FString(__return_storage_ptr__,L"TSoftObjectPtr<UObject>");
    return __return_storage_ptr__;
  }
  local_res8 = *(FName *)(*(longlong *)&this->field_0x70 + 0x18);
  ::FName::ToString(&local_res8,&local_18);
  (**(code **)(**(longlong **)&this->field_0x70 + 0x318))();
  ::FString::PrintfImpl(__return_storage_ptr__,L"TSoftObjectPtr<%s%s>");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetID @ 14217be40

FName __thiscall FSoftObjectProperty::GetID(FSoftObjectProperty *this)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  FName in_RDX;
  undefined1 local_res10 [24];
  
  FVar1 = FNameEntryId::FromValidEName((EName)local_res10);
  *(undefined4 *)in_RDX = *(undefined4 *)CONCAT44(extraout_var,FVar1.Value);
  *(undefined4 *)((longlong)in_RDX + 4) = 0;
  return in_RDX;
}

// GetObjectPropertyValue @ 14217c9d0

UObject * __thiscall
FSoftObjectProperty::GetObjectPropertyValue(FSoftObjectProperty *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get(param_1);
  return pUVar1;
}

// GetObjectPropertyValue_InContainer @ 14217cc90

UObject * __thiscall
FSoftObjectProperty::GetObjectPropertyValue_InContainer
          (FSoftObjectProperty *this,void *param_1,int param_2)

{
  UObject *local_res20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::GetWrappedUObjectPtrValues<FSoftObjectPtr,UObject_*>
            ((FObjectPropertyBase *)this,&local_res20,param_1,InContainer,param_2,1);
  return local_res20;
}

// GetObjectPtrPropertyValue @ 14217cd50

TObjectPtr<UObject> __thiscall
FSoftObjectProperty::GetObjectPtrPropertyValue(FSoftObjectProperty *this,void *param_1)

{
  UObject *pUVar1;
  TPersistentObjectPtr<FSoftObjectPath> *in_R8;
  
  pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get(in_R8);
  *(UObject **)param_1 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// GetObjectPtrPropertyValue_InContainer @ 14217d080

TObjectPtr<UObject> __thiscall
FSoftObjectProperty::GetObjectPtrPropertyValue_InContainer
          (FSoftObjectProperty *this,void *param_1,int param_2)

{
  undefined4 in_register_00000084;
  int in_R9D;
  
  *(undefined8 *)param_1 = 0;
  FObjectPropertyBase::GetWrappedUObjectPtrValues<FSoftObjectPtr,TObjectPtr<UObject>_>
            ((FObjectPropertyBase *)this,param_1,(void *)CONCAT44(in_register_00000084,param_2),
             InContainer,in_R9D,1);
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// GetValueTypeHashInternal @ 14217df00

uint __thiscall
FSoftObjectProperty::GetValueTypeHashInternal(FSoftObjectProperty *this,void *param_1)

{
  uint uVar1;
  
  uVar1 = ::GetTypeHash((FSoftObjectPath *)((longlong)param_1 + 8));
  return uVar1;
}

// Identical @ 14217eca0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FSoftObjectProperty::Identical(FSoftObjectProperty *this,void *param_1,void *param_2,uint param_3)

{
  FSoftObjectPath *pFVar1;
  FUtf8String *pFVar2;
  FSoftObjectPath *pFVar3;
  bool bVar4;
  FSoftObjectPath local_a0;
  undefined8 local_80;
  FSoftObjectPath local_78;
  undefined8 local_58;
  FSoftObjectPath local_50;
  undefined8 local_30;
  FSoftObjectPath local_28;
  
  bVar4 = param_1 == (void *)0x0;
  if (bVar4) {
    local_a0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.SubPathString.Data.ArrayNum = 0;
    local_a0.SubPathString.Data.ArrayMax = 0;
    local_a0.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_a0.AssetPath.AssetName.Number = 0;
    local_a0.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_a0.AssetPath.PackageName.Number = 0;
    FUtf8String::Reset(&local_a0.SubPathString,0);
    local_30 = 0;
    pFVar3 = &local_a0;
    pFVar1 = &local_a0;
    local_28.SubPathString.Data.AllocatorInstance.Data =
         local_a0.SubPathString.Data.AllocatorInstance.Data;
  }
  else {
    local_80 = *(undefined8 *)param_1;
    FSoftObjectPath::FSoftObjectPath(&local_78,(FSoftObjectPath *)((longlong)param_1 + 8));
    pFVar3 = &local_78;
    pFVar1 = &local_78;
    local_30 = local_80;
    local_28.SubPathString.Data.AllocatorInstance.Data =
         local_78.SubPathString.Data.AllocatorInstance.Data;
  }
  pFVar2 = &pFVar1->SubPathString;
  local_28.AssetPath.PackageName = (pFVar3->AssetPath).PackageName;
  local_28.AssetPath.AssetName = (pFVar3->AssetPath).AssetName;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = (pFVar2->Data).ArrayNum;
  local_28.SubPathString.Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (bVar4) {
    if (local_a0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar4) &&
     (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
  }
  bVar4 = param_2 == (void *)0x0;
  if (bVar4) {
    local_a0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.SubPathString.Data.ArrayNum = 0;
    local_a0.SubPathString.Data.ArrayMax = 0;
    local_a0.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_a0.AssetPath.AssetName.Number = 0;
    local_a0.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_a0.AssetPath.PackageName.Number = 0;
    FUtf8String::Reset(&local_a0.SubPathString,0);
    local_58 = 0;
    pFVar3 = &local_a0;
    pFVar1 = &local_a0;
    local_50.SubPathString.Data.AllocatorInstance.Data =
         local_a0.SubPathString.Data.AllocatorInstance.Data;
  }
  else {
    local_80 = *(undefined8 *)param_2;
    FSoftObjectPath::FSoftObjectPath(&local_78,(FSoftObjectPath *)((longlong)param_2 + 8));
    pFVar3 = &local_78;
    pFVar1 = &local_78;
    local_58 = local_80;
    local_50.SubPathString.Data.AllocatorInstance.Data =
         local_78.SubPathString.Data.AllocatorInstance.Data;
  }
  pFVar2 = &pFVar1->SubPathString;
  local_50.AssetPath.PackageName = (pFVar3->AssetPath).PackageName;
  local_50.AssetPath.AssetName = (pFVar3->AssetPath).AssetName;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.SubPathString.Data.ArrayNum = (pFVar2->Data).ArrayNum;
  local_50.SubPathString.Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (bVar4) {
    if (local_a0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar4) &&
     (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
  }
  bVar4 = FSoftObjectPath::operator==(&local_28,&local_50);
  if (local_50.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// ImportText_Internal @ 142182070

wchar_t * __thiscall
FSoftObjectProperty::ImportText_Internal
          (FSoftObjectProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  FLinkerLoad *pFVar7;
  FArchive *pFVar8;
  wchar_t *pwVar9;
  size_t sVar10;
  wchar_t *local_res10;
  undefined8 local_68;
  FSoftObjectPath local_60;
  undefined1 local_40 [8];
  FName local_38;
  FName FStack_30;
  FUtf8String local_28;
  
  pwVar9 = (wchar_t *)0x0;
  local_60.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_60.AssetPath.PackageName.Number = 0;
  local_60.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_60.AssetPath.AssetName.Number = 0;
  local_60.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.SubPathString.Data.ArrayNum = 0;
  local_60.SubPathString.Data.ArrayMax = 0;
  local_res10 = param_1;
  pFVar7 = FField::GetLinker((FField *)this);
  pFVar8 = (FArchive *)&pFVar7->_padding_;
  if (pFVar7 == (FLinkerLoad *)0x0) {
    pFVar8 = (FArchive *)0x0;
  }
  bVar5 = FSoftObjectPath::ImportTextItem(&local_60,&local_res10,param_5,param_4,param_6,pFVar8);
  if (bVar5) {
    if (param_3 == Container) {
      cVar6 = (**(code **)(*(longlong *)this + 0x70))(this);
      FVar3.Data = local_60.SubPathString.Data.AllocatorInstance.Data;
      if (cVar6 != '\0') {
        sVar10 = (size_t)local_60.SubPathString.Data.ArrayNum;
        local_40 = (undefined1  [8])0x0;
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.Data.ArrayNum = local_60.SubPathString.Data.ArrayNum;
        local_38 = local_60.AssetPath.PackageName;
        FStack_30 = local_60.AssetPath.AssetName;
        if (local_60.SubPathString.Data.ArrayNum == 0) {
          local_28.Data._8_8_ = local_60.SubPathString.Data._8_8_ & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_60.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)&local_28,
                     local_60.SubPathString.Data.ArrayNum,&local_28.Data.ArrayMax);
          memcpy(local_28.Data.AllocatorInstance.Data,FVar3.Data,sVar10);
        }
        FProperty::SetValue_InContainer((FProperty *)this,param_2,local_40);
        pwVar9 = local_res10;
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
          pwVar9 = local_res10;
        }
        goto LAB_142182296;
      }
      param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
    }
    FVar3.Data = local_60.SubPathString.Data.AllocatorInstance.Data;
    *(undefined8 *)param_2 = 0;
    pFVar1 = (ForAnyElementType *)((longlong)param_2 + 0x18);
    *(FName *)((longlong)param_2 + 8) = local_60.AssetPath.PackageName;
    *(FName *)((longlong)param_2 + 0x10) = local_60.AssetPath.AssetName;
    pwVar9 = local_res10;
    if ((FUtf8String *)pFVar1 != &local_60.SubPathString) {
      iVar4 = local_60.SubPathString.Data.ArrayNum;
      sVar10 = (size_t)local_60.SubPathString.Data.ArrayNum;
      piVar2 = (int *)((longlong)param_2 + 0x24);
      *(int *)((longlong)param_2 + 0x20) = local_60.SubPathString.Data.ArrayNum;
      if ((local_60.SubPathString.Data.ArrayNum == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_60.SubPathString.Data.ArrayNum,*piVar2,pFVar1,
                   local_60.SubPathString.Data.ArrayNum,piVar2);
        pwVar9 = local_res10;
        if (iVar4 != 0) {
          memcpy(pFVar1->Data,FVar3.Data,sVar10);
          pwVar9 = local_res10;
        }
      }
    }
  }
  else {
    if (param_3 == Container) {
      cVar6 = (**(code **)(*(longlong *)this + 0x70))(this);
      if (cVar6 != '\0') {
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
        local_40 = (undefined1  [8])0x0;
        FStack_30.ComparisonIndex.Value = 0;
        FStack_30.Number = 0;
        local_38.ComparisonIndex.Value = 0;
        local_38.Number = 0;
        FUtf8String::Reset(&local_28,0);
        local_68 = 0;
        FSoftObjectPtr::operator=((FSoftObjectPtr *)local_40,(FObjectPtr)&local_68);
        FProperty::SetValue_InContainer((FProperty *)this,param_2,local_40);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        goto LAB_142182296;
      }
      param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
    }
    local_68 = 0;
    FSoftObjectPtr::operator=(param_2,(FObjectPtr)&local_68);
  }
LAB_142182296:
  if (local_60.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.SubPathString.Data.AllocatorInstance.Data);
  }
  return pwVar9;
}

// LinkInternal @ 142185380

void __thiscall FSoftObjectProperty::LinkInternal(FSoftObjectProperty *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if ((*(uint *)&this->field_0x38 >> 0xc & 1) != 0) {
    FField::GetFullName((FField *)this,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAnyPropertyFlags(CPF_NonNullable)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySoftObjectPtr.cpp"
                       ,0x49,
                       L"Soft Object Properties can\'t be non nullable but \"%s\" is marked as CPF_NonNullable"
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FProperty::SetElementSize((FProperty *)this,0x28);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8000000000000;
  return;
}

// LoadObjectPropertyValue @ 142185560

UObject * __thiscall
FSoftObjectProperty::LoadObjectPropertyValue(FSoftObjectProperty *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get(param_1);
  if ((pUVar1 == (UObject *)0x0) && (*(longlong *)((longlong)param_1 + 8) != 0)) {
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)((longlong)param_1 + 8),(FUObjectSerializeContext *)0x0);
    pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get(param_1);
    return pUVar1;
  }
  return pUVar1;
}

// NetSerializeItem @ 142186e20

bool __thiscall
FSoftObjectProperty::NetSerializeItem
          (FSoftObjectProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  (**(code **)(*(longlong *)param_1 + 0x148))(param_1,param_3);
  return true;
}

// SerializeItem @ 142190a20

void __thiscall
FSoftObjectProperty::SerializeItem
          (FSoftObjectProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *pFVar1;
  bool bVar2;
  FArchive *pFVar3;
  FSlotBase local_res10;
  undefined8 local_48;
  undefined8 local_40;
  FSoftObjectPath local_38;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if (((pFVar3->field_0x2b & 3) != 1) || ((pFVar3->field_0x29 & 1) != 0)) {
    local_40 = *(undefined8 *)param_2;
    FSoftObjectPath::FSoftObjectPath(&local_38,(FSoftObjectPath *)((longlong)param_2 + 8));
    pFVar1 = (local_res10.StructuredArchive)->Formatter->Inner;
    (**(code **)(*(longlong *)pFVar1 + 0x148))(pFVar1,param_2);
    if (((pFVar3->field_0x28 & 1) != 0) || ((pFVar3->field_0x2b & 2) != 0)) {
      bVar2 = FSoftObjectPath::operator==(&local_38,(FSoftObjectPath *)((longlong)param_2 + 8));
      if (!bVar2) {
        local_48 = 0;
        (**(code **)(*(longlong *)this + 0x218))(this,param_2,&local_48,param_3);
      }
    }
    if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetObjectPropertyValueUnchecked @ 142192400

void __thiscall
FSoftObjectProperty::SetObjectPropertyValueUnchecked
          (FSoftObjectProperty *this,void *param_1,UObject *param_2)

{
  UObject *local_res10 [3];
  undefined1 local_38 [8];
  FSoftObjectPath local_30;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.SubPathString.Data.ArrayNum = 0;
  local_30.SubPathString.Data.ArrayMax = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_30.AssetPath.AssetName.Number = 0;
  local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_30.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_30.SubPathString,0);
  local_res10[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_38,(FObjectPtr)local_res10);
  *(undefined1 (*) [8])param_1 = local_38;
  FSoftObjectPath::operator=((FSoftObjectPath *)((longlong)param_1 + 8),&local_30);
  if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// SetObjectPropertyValueUnchecked_InContainer @ 142192630

void __thiscall
FSoftObjectProperty::SetObjectPropertyValueUnchecked_InContainer
          (FSoftObjectProperty *this,void *param_1,UObject *param_2,int param_3)

{
  UObject *local_res18 [2];
  
  local_res18[0] = param_2;
  FObjectPropertyBase::SetWrappedUObjectPtrValues<FSoftObjectPtr,UObject_*>
            ((FObjectPropertyBase *)this,param_1,InContainer,local_res18,param_3,1);
  return;
}

// SetObjectPtrPropertyValueUnchecked @ 142192780

void __thiscall
FSoftObjectProperty::SetObjectPtrPropertyValueUnchecked
          (FSoftObjectProperty *this,void *param_1,TObjectPtr<UObject> param_2)

{
  UObject *pUVar1;
  UObject *local_res10 [3];
  undefined1 local_38 [8];
  FSoftObjectPath local_30;
  
  pUVar1 = *(UObject **)param_2.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.SubPathString.Data.ArrayNum = 0;
  local_30.SubPathString.Data.ArrayMax = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_30.AssetPath.AssetName.Number = 0;
  local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_30.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_30.SubPathString,0);
  local_res10[0] = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_38,(FObjectPtr)local_res10);
  *(undefined1 (*) [8])param_1 = local_38;
  FSoftObjectPath::operator=((FSoftObjectPath *)((longlong)param_1 + 8),&local_30);
  if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// SetObjectPtrPropertyValueUnchecked_InContainer @ 1421929e0

void __thiscall
FSoftObjectProperty::SetObjectPtrPropertyValueUnchecked_InContainer
          (FSoftObjectProperty *this,void *param_1,TObjectPtr<UObject> param_2,int param_3)

{
  FObjectPropertyBase::SetWrappedUObjectPtrValues<FSoftObjectPtr,TObjectPtr<UObject>_>
            ((FObjectPropertyBase *)this,param_1,InContainer,
             (TObjectPtr<UObject> *)param_2.field0_0x0,param_3,1);
  return;
}

// StaticClass @ 142193f10

FFieldClass * __cdecl FSoftObjectProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FObjectPropertyBase::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FSoftObjectProperty",0x20000000,
                 CASTCLASS_FSoftObjectProperty|CASTCLASS_FObjectPropertyBase|CASTCLASS_FProperty|
                 CASTCLASS_UField,pFVar1,Construct);
      atexit(`FSoftObjectProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// operator_new @ 142259e30

void * __cdecl FSoftObjectProperty::operator_new(ulong64 param_1)

{
  FField *this;
  FFieldClass *pFVar1;
  
  this = FMemory::Malloc(param_1,0);
  if (this != (FField *)0x0) {
    pFVar1 = StaticClass();
    FField::FField(this,EC_InternalUseOnlyConstructor,pFVar1);
    this[1].Next = (FField *)0x0;
    this[1].NamePrivate.ComparisonIndex = 0;
    this[1].NamePrivate.Number = 0;
    *(undefined8 *)&this[1].FlagsPrivate = 0;
    this[2]._padding_ = 0;
    this[2].ClassPrivate = (FFieldClass *)0x0;
    this[2].Owner.Container.Field = (FField *)0x0;
    this->_padding_ = (longlong)&___7FSoftObjectProperty__6B_;
  }
  return this;
}

// operator() @ 150486620

bool __thiscall `FSoftObjectProperty::GetCPPType'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6079812011791744984>);
  if (bVar2) {
    GetFullNameSafe(&local_18,*(FField **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6079812011791744984>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150486687;
    }
  }
  bVar2 = false;
LAB_150486687:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

