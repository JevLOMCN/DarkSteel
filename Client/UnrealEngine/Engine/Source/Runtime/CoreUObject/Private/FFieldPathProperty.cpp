// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 18

// FFieldPathProperty @ 141fbdae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FFieldPathProperty * __thiscall
FFieldPathProperty::FFieldPathProperty
          (FFieldPathProperty *this,FFieldVariant param_1,FFieldPathPropertyParams *param_2)

{
  ulonglong uVar1;
  FFieldClass *pFVar2;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             CPF_HasGetValueTypeHash);
  this->_padding_ = (longlong)&___7__TProperty_UFFieldPath__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x20);
  this->_padding_ = (longlong)&___7FFieldPathProperty__6B_;
  pFVar2 = (*param_2->PropertyClassFunc)();
  this->PropertyClass = pFVar2;
  return this;
}

// FFieldPathProperty @ 141fbdb90

FFieldPathProperty * __thiscall
FFieldPathProperty::FFieldPathProperty
          (FFieldPathProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  this->_padding_ = (longlong)&___7__TProperty_UFFieldPath__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x20);
  this->_padding_ = (longlong)&___7FFieldPathProperty__6B_;
  this->PropertyClass = (FFieldClass *)0x0;
  return this;
}

// Construct @ 141fc75b0

FField * __cdecl
FFieldPathProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  FProperty *this;
  FFieldClass *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x78,0);
  if (this != (FProperty *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pFVar2 = FProperty::StaticClass();
        FFieldClass::FFieldClass
                  (&::StaticFieldClass,L"FFieldPathProperty",0x10000000000000,
                   CASTCLASS_FFieldPathProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar2,
                   Construct);
        atexit(`FFieldPathProperty::StaticClass'::__l2::
               _dynamic_atexit_destructor_for__StaticFieldClass__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    this->_padding_ = (longlong)&::StaticFieldClass;
    this->_padding_ = (longlong)&___7FFieldPathProperty__6B_;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    *(undefined4 *)&this->_padding_ = 0;
    this->PropertyLinkNext = (FProperty *)0x0;
    this->NextRef = (FProperty *)0x0;
    this->DestructorLinkNext = (FProperty *)0x0;
    this->PostConstructLinkNext = (FProperty *)0x0;
    (this->RepNotifyFunc).ComparisonIndex = 0;
    (this->RepNotifyFunc).Number = 0;
    uVar1 = (param_1->Container).Unknown;
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    local_res20 = uVar1;
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
    this->_padding_ = (longlong)&___7__TProperty_UFFieldPath__VFProperty____6B_;
    FProperty::SetElementSize(this,0x20);
    this->_padding_ = (longlong)&___7FFieldPathProperty__6B_;
    this[1]._padding_ = 0;
    return (FField *)this;
  }
  return (FField *)0x0;
}

// ConvertFromType @ 141fc87f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EConvertFromTypeResult __thiscall
FFieldPathProperty::ConvertFromType
          (FFieldPathProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,
          uchar *param_3,UStruct *param_4,uchar *param_5)

{
  int *piVar1;
  FName FVar2;
  uint *puVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  int iVar5;
  bool bVar6;
  bool bVar7;
  FNameEntryId FVar8;
  EConvertFromTypeResult EVar9;
  undefined4 extraout_var;
  FName FVar10;
  FArchive *pFVar11;
  FLinkerLoad *pFVar12;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar13;
  UStruct *pUVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  int iVar20;
  ForAnyElementType *pFVar21;
  FSlotBase local_res18 [2];
  undefined1 auStackY_288 [32];
  uint local_238 [2];
  FFieldPath local_230;
  undefined8 local_210;
  undefined1 local_208 [8];
  uchar *local_200;
  FString local_1f0;
  FStructuredArchiveFromArchive local_1e0;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_288;
  FVar2 = param_1->Type;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  local_200 = param_3;
  FVar8 = FNameEntryId::FromValidEName((EName)local_208);
  FVar10.Number = 0;
  FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar8.Value);
  if (FVar2 == FVar10) {
    pFVar11 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
    if ((((pFVar11->field_0x28 & 1) == 0) || ((pFVar11->field_0x29 & 1) == 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("UnderlyingArchive.IsLoading() && UnderlyingArchive.IsPersistent()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\FieldPathProperty.cpp"
                           ,0x2b,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar9 = (*pcVar4)();
      return EVar9;
    }
    pFVar12 = (FLinkerLoad *)(**(code **)(*(longlong *)pFVar11 + 0x20))(pFVar11);
    if ((pFVar12 == (FLinkerLoad *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Linker",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\FieldPathProperty.cpp"
                           ,0x2d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar9 = (*pcVar4)();
      return EVar9;
    }
    local_230.ResolvedField = (FField *)0x0;
    local_230.ResolvedOwner.WeakPtr.ObjectIndex = 0;
    local_230.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
    local_230.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_230.Path.ArrayNum = 0;
    local_230.Path.ArrayMax = 0;
    local_238[0] = 0;
    this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1e0,pFVar11);
    FVar13 = FStructuredArchiveFromArchive::GetSlot(this_00);
    pFVar11 = *(FArchive **)(**(longlong **)FVar13 + 8);
    puVar3 = (uint *)**(undefined8 **)&pFVar11->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar11->field_0x8)[1] < puVar3 + 1) {
      if ((pFVar11->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar11 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar11,local_238);
      }
    }
    else {
      local_238[0] = *puVar3;
      **(longlong **)&pFVar11->field_0x8 = **(longlong **)&pFVar11->field_0x8 + 4;
    }
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1e0);
    bVar6 = 0 < (int)local_238[0];
    if (local_238[0] != 0) {
      do {
        uVar17 = local_238[0];
        uVar19 = local_238[0] >> 0x1f;
        if ((int)local_238[0] < 0) {
          iVar20 = -1 - local_238[0];
          if (((iVar20 < 0) || ((int)pFVar12->_padding_ <= iVar20)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index.IsImport() && ImportMap.IsValidIndex(Index.ToImport())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                                 ,0x8c,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            EVar9 = (*pcVar4)();
            return EVar9;
          }
          uVar17 = 0;
          if (iVar20 < (int)pFVar12->_padding_) {
            uVar17 = uVar19;
          }
          if ((uVar17 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            EVar9 = (*pcVar4)();
            return EVar9;
          }
          pFVar18 = (FScriptContainerElement *)((longlong)iVar20 * 0x38 + pFVar12->_padding_);
        }
        else {
          if (((((int)local_238[0] < 1) || ((int)(local_238[0] - 1) < 0)) ||
              ((int)pFVar12->_padding_ <= (int)(local_238[0] - 1))) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index.IsExport() && ExportMap.IsValidIndex(Index.ToExport())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                                 ,0xaa,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            EVar9 = (*pcVar4)();
            return EVar9;
          }
          if (((int)uVar17 < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsExport()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                 ,0x5b,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            EVar9 = (*pcVar4)();
            return EVar9;
          }
          uVar17 = uVar17 - 1;
          uVar19 = 0;
          if ((int)uVar17 < (int)pFVar12->_padding_) {
            uVar19 = ~uVar17 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            EVar9 = (*pcVar4)();
            return EVar9;
          }
          pFVar18 = (FScriptContainerElement *)((longlong)(int)uVar17 * 0x68 + pFVar12->_padding_);
        }
        if (((local_230.Path.AllocatorInstance.Data <= pFVar18) &&
            (pFVar18 < local_230.Path.AllocatorInstance.Data + (longlong)local_230.Path.ArrayMax * 8
            )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)) {
          pcVar4 = (code *)swi(3);
          EVar9 = (*pcVar4)();
          return EVar9;
        }
        iVar20 = local_230.Path.ArrayNum;
        if (local_230.Path.ArrayNum == local_230.Path.ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_230.Path.AllocatorInstance,&local_230.Path.ArrayMax);
        }
        local_230.Path.ArrayNum = iVar20 + 1;
        *(undefined8 *)(local_230.Path.AllocatorInstance.Data + (longlong)iVar20 * 8) =
             *(undefined8 *)pFVar18;
        local_238[0] = *(uint *)(pFVar18 + 8);
      } while (local_238[0] != 0);
      local_238[0] = 0;
      param_3 = local_200;
    }
    if (bVar6) {
      if ((pFVar12->_padding_ == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Linker->LinkerRoot",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\FieldPathProperty.cpp"
                             ,0x3d,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar9 = (*pcVar4)();
        return EVar9;
      }
      local_210 = *(undefined8 *)(pFVar12->_padding_ + 0x18);
      if (((local_230.Path.AllocatorInstance.Data <= (FScriptContainerElement *)&local_210) &&
          ((FScriptContainerElement *)&local_210 <
           local_230.Path.AllocatorInstance.Data + (longlong)local_230.Path.ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar9 = (*pcVar4)();
        return EVar9;
      }
      iVar20 = local_230.Path.ArrayNum;
      if (local_230.Path.ArrayNum == local_230.Path.ArrayMax) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&local_230.Path.AllocatorInstance,&local_230.Path.ArrayMax);
      }
      local_230.Path.ArrayNum = iVar20 + 1;
      *(undefined8 *)(local_230.Path.AllocatorInstance.Data + (longlong)iVar20 * 8) = local_210;
    }
    if (local_230.Path.ArrayNum != 0) {
      if ((pFVar12 == (FLinkerLoad *)0x0) || ((int)pFVar12->_padding_ != 1)) {
        pFVar12 = (FLinkerLoad *)0x0;
      }
      pUVar14 = FFieldPath::TryToResolveOwnerFromStruct
                          (&local_230,(UStruct *)0x0,UseStructIfOuterNotFound);
      if ((pUVar14 == (UStruct *)0x0) && (pFVar12 != (FLinkerLoad *)0x0)) {
        pUVar14 = FFieldPath::TryToResolveOwnerFromLinker(&local_230,pFVar12);
      }
      if (((5 < (byte)LogProperty._0_1_) && (pUVar14 == (UStruct *)0x0)) &&
         (local_230.Path.ArrayNum != 0)) {
        PathToString(&local_1f0,&local_230.Path);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
      }
    }
    iVar20 = param_1->ArrayIndex;
    if (((iVar20 < 0) || ((int)this->_padding_ <= iVar20)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6)
       ) {
      pcVar4 = (code *)swi(3);
      EVar9 = (*pcVar4)();
      return EVar9;
    }
    if ((param_3 == (uchar *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar9 = (*pcVar4)();
      return EVar9;
    }
    _Src.Data = local_230.Path.AllocatorInstance.Data;
    lVar15 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
    lVar16 = (longlong)*(int *)((longlong)&this->_padding_ + 4) * (longlong)iVar20;
    pFVar21 = (ForAnyElementType *)(param_3 + lVar15 + 0x10 + lVar16);
    *(FField **)(param_3 + lVar15 + lVar16) = local_230.ResolvedField;
    *(FWeakObjectPtr *)(param_3 + lVar15 + lVar16 + 8) = local_230.ResolvedOwner.WeakPtr;
    if ((TArray<FName,TSizedDefaultAllocator<32>_> *)pFVar21 != &local_230.Path) {
      iVar5 = local_230.Path.ArrayNum;
      lVar15 = (longlong)local_230.Path.ArrayNum;
      piVar1 = (int *)((longlong)&pFVar21[1].Data + 4);
      iVar20 = *piVar1;
      *(int *)&pFVar21[1].Data = local_230.Path.ArrayNum;
      if ((local_230.Path.ArrayNum == 0) && (iVar20 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_230.Path.ArrayNum,iVar20,pFVar21,local_230.Path.ArrayNum,piVar1);
        if (iVar5 != 0) {
          memcpy(pFVar21->Data,_Src.Data,lVar15 << 3);
        }
      }
    }
    if (local_230.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Path.AllocatorInstance.Data);
    }
    EVar9 = Converted;
  }
  else {
    EVar9 = UseSerializeItem;
  }
  return EVar9;
}

// ExportText_Internal @ 141fcaa90

void __thiscall
FFieldPathProperty::ExportText_Internal
          (FFieldPathProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  int iVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  UObject *pUVar6;
  FFieldClass *pFVar7;
  UStruct *pUVar8;
  FField *pFVar9;
  FString *pFVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  int iVar14;
  FFieldPath local_138;
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
  
  local_138.ResolvedField = (FField *)0x0;
  local_138.ResolvedOwner.WeakPtr.ObjectIndex = 0;
  local_138.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
  local_138.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Path.ArrayNum = 0;
  local_138.Path.ArrayMax = 0;
  if (param_3 == Container) {
    cVar4 = (**(code **)(this->_padding_ + 0x78))();
    if (cVar4 == '\0') {
      param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
      goto LAB_141fcaafd;
    }
    FProperty::GetValue_InContainer((FProperty *)this,param_2,&local_138);
  }
  else {
LAB_141fcaafd:
    local_138.ResolvedField = *(FField **)param_2;
    local_138.ResolvedOwner.WeakPtr = *(FWeakObjectPtr *)((longlong)param_2 + 8);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&local_138.Path,
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
  }
  if (((uint)param_6 >> 0x13 & 1) == 0) {
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    pUVar6 = FWeakObjectPtr::Get(&local_138.ResolvedOwner.WeakPtr);
    if (pUVar6 != (UObject *)0x0) {
      pFVar7 = FField::StaticClass();
      if (((local_138.ResolvedField == (FField *)0x0) ||
          (bVar5 = FWeakObjectPtr::IsValid(&local_138.ResolvedOwner.WeakPtr),
          pFVar9 = local_138.ResolvedField, !bVar5)) &&
         (pFVar9 = local_138.ResolvedField, local_138.Path.ArrayNum != 0)) {
        pUVar8 = (UStruct *)FWeakObjectPtr::Get(&local_138.ResolvedOwner.WeakPtr);
        if (((pUVar8 != (UStruct *)0x0) ||
            (pUVar8 = FFieldPath::TryToResolveOwnerFromStruct
                                (&local_138,(UStruct *)0x0,UseStructIfOuterNotFound),
            pUVar8 != (UStruct *)0x0)) && (0 < local_138.Path.ArrayNum)) {
          uVar13 = local_138.Path.ArrayNum - 1;
          uVar11 = 0;
          if ((int)uVar13 < local_138.Path.ArrayNum) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          for (pFVar9 = FindFProperty<FField>
                                  (pUVar8,*(FName *)(local_138.Path.AllocatorInstance.Data +
                                                    (longlong)(int)uVar13 * 8),Default);
              pFVar9 != (FField *)0x0;
              pFVar9 = (FField *)
                       (*pcVar3)(pFVar9,local_138.Path.AllocatorInstance.Data +
                                        (longlong)(int)uVar13 * 8)) {
            uVar13 = uVar13 - 1;
            if ((int)uVar13 < 0) {
              if ((pFVar7 == (FFieldClass *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("FieldType",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x2dd,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar2 = pFVar9->ClassPrivate;
              if (pFVar7->Id == CASTCLASS_None) goto joined_r0x000141fcb411;
              bVar5 = (pFVar2->CastFlags & pFVar7->Id) != CASTCLASS_None;
              goto LAB_141fcb42b;
            }
            pcVar3 = *(code **)(pFVar9->_padding_ + 0x50);
            uVar11 = 0;
            if ((int)uVar13 < local_138.Path.ArrayNum) {
              uVar11 = ~uVar13 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        goto LAB_141fcb430;
      }
      goto LAB_141fcb44b;
    }
    pFVar10 = PathToString(&local_38,&local_138.Path);
    local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    if (&local_f8 != pFVar10) {
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      local_f8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_f8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    }
    goto LAB_141fcb594;
  }
  if ((param_6 & 1U) != 0) {
    ::FString::AppendChars(param_1,L"\"",1);
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    pUVar6 = FWeakObjectPtr::Get(&local_138.ResolvedOwner.WeakPtr);
    if (pUVar6 != (UObject *)0x0) {
      pFVar7 = FField::StaticClass();
      if (((local_138.ResolvedField == (FField *)0x0) ||
          (bVar5 = FWeakObjectPtr::IsValid(&local_138.ResolvedOwner.WeakPtr),
          pFVar9 = local_138.ResolvedField, !bVar5)) &&
         (pFVar9 = local_138.ResolvedField, local_138.Path.ArrayNum != 0)) {
        pUVar8 = (UStruct *)FWeakObjectPtr::Get(&local_138.ResolvedOwner.WeakPtr);
        if (((pUVar8 != (UStruct *)0x0) ||
            (pUVar8 = FFieldPath::TryToResolveOwnerFromStruct
                                (&local_138,(UStruct *)0x0,UseStructIfOuterNotFound),
            pUVar8 != (UStruct *)0x0)) && (0 < local_138.Path.ArrayNum)) {
          uVar13 = local_138.Path.ArrayNum - 1;
          uVar11 = 0;
          if ((int)uVar13 < local_138.Path.ArrayNum) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          for (pFVar9 = FindFProperty<FField>
                                  (pUVar8,*(FName *)(local_138.Path.AllocatorInstance.Data +
                                                    (longlong)(int)uVar13 * 8),Default);
              pFVar9 != (FField *)0x0;
              pFVar9 = (FField *)
                       (*pcVar3)(pFVar9,local_138.Path.AllocatorInstance.Data +
                                        (longlong)(int)uVar13 * 8)) {
            uVar13 = uVar13 - 1;
            if ((int)uVar13 < 0) {
              if ((pFVar7 == (FFieldClass *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("FieldType",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x2dd,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar2 = pFVar9->ClassPrivate;
              if (pFVar7->Id == CASTCLASS_None) goto joined_r0x000141fcad35;
              bVar5 = (pFVar2->CastFlags & pFVar7->Id) != CASTCLASS_None;
              goto LAB_141fcad47;
            }
            pcVar3 = *(code **)(pFVar9->_padding_ + 0x50);
            uVar11 = 0;
            if ((int)uVar13 < local_138.Path.ArrayNum) {
              uVar11 = ~uVar13 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        goto LAB_141fcacd5;
      }
      goto LAB_141fcad53;
    }
    pFVar10 = PathToString(&local_b8,&local_138.Path);
    local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    if (&local_118 != pFVar10) {
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      local_118.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_118.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
      local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    }
    goto LAB_141fcae90;
  }
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  pUVar6 = FWeakObjectPtr::Get(&local_138.ResolvedOwner.WeakPtr);
  if (pUVar6 != (UObject *)0x0) {
    pFVar7 = FField::StaticClass();
    if (((local_138.ResolvedField == (FField *)0x0) ||
        (bVar5 = FWeakObjectPtr::IsValid(&local_138.ResolvedOwner.WeakPtr),
        pFVar9 = local_138.ResolvedField, !bVar5)) &&
       (pFVar9 = local_138.ResolvedField, local_138.Path.ArrayNum != 0)) {
      pUVar8 = (UStruct *)FWeakObjectPtr::Get(&local_138.ResolvedOwner.WeakPtr);
      if (((pUVar8 != (UStruct *)0x0) ||
          (pUVar8 = FFieldPath::TryToResolveOwnerFromStruct
                              (&local_138,(UStruct *)0x0,UseStructIfOuterNotFound),
          pUVar8 != (UStruct *)0x0)) && (0 < local_138.Path.ArrayNum)) {
        uVar13 = local_138.Path.ArrayNum - 1;
        uVar11 = 0;
        if ((int)uVar13 < local_138.Path.ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        for (pFVar9 = FindFProperty<FField>
                                (pUVar8,*(FName *)(local_138.Path.AllocatorInstance.Data +
                                                  (longlong)(int)uVar13 * 8),Default);
            pFVar9 != (FField *)0x0;
            pFVar9 = (FField *)
                     (*pcVar3)(pFVar9,local_138.Path.AllocatorInstance.Data +
                                      (longlong)(int)uVar13 * 8)) {
          uVar13 = uVar13 - 1;
          if ((int)uVar13 < 0) {
            if ((pFVar7 == (FFieldClass *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("FieldType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x2dd,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = pFVar9->ClassPrivate;
            if (pFVar7->Id == CASTCLASS_None) goto joined_r0x000141fcb0a1;
            bVar5 = (pFVar2->CastFlags & pFVar7->Id) != CASTCLASS_None;
            goto LAB_141fcb0bb;
          }
          pcVar3 = *(code **)(pFVar9->_padding_ + 0x50);
          uVar11 = 0;
          if ((int)uVar13 < local_138.Path.ArrayNum) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      goto LAB_141fcb0c0;
    }
    goto LAB_141fcb0db;
  }
  pFVar10 = PathToString(&local_78,&local_138.Path);
  local_88.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
  if (&local_108 != pFVar10) {
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    local_108.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_108.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
  }
  goto LAB_141fcb224;
joined_r0x000141fcb411:
  if (pFVar2 == (FFieldClass *)0x0) goto LAB_141fcb425;
  if (pFVar2 == pFVar7) {
    bVar5 = true;
    goto LAB_141fcb42b;
  }
  pFVar2 = pFVar2->SuperClass;
  goto joined_r0x000141fcb411;
LAB_141fcb425:
  bVar5 = false;
LAB_141fcb42b:
  if (bVar5) {
LAB_141fcb44b:
    local_138.ResolvedField = pFVar9;
    if (local_138.ResolvedField != (FField *)0x0) {
      pFVar10 = FField::GetPathName(local_138.ResolvedField,&local_68,(UObject *)0x0);
      local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      if (&local_f8 != pFVar10) {
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        local_f8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
        local_f8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      }
      goto LAB_141fcb594;
    }
  }
  else {
LAB_141fcb430:
    if (local_138.ResolvedField != (FField *)0x0) {
      local_138.ResolvedOwner.WeakPtr.ObjectIndex = 0;
      local_138.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
      pFVar9 = (FField *)0x0;
      goto LAB_141fcb44b;
    }
  }
  pFVar10 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar6,&local_58,(UObject *)0x0);
  if (&local_f8 != pFVar10) {
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    local_f8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_f8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChar(&local_f8,L':');
  pFVar10 = PathToString(&local_48,&local_138.Path);
  iVar1 = (pFVar10->Data).ArrayNum;
  iVar14 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar14 = 0;
  }
  ::FString::AppendChars(&local_f8,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar14);
LAB_141fcb594:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  iVar14 = local_f8.Data.ArrayNum + -1;
  if (local_f8.Data.ArrayNum == 0) {
    iVar14 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar14);
  FVar12.Data = local_f8.Data.AllocatorInstance.Data;
  goto LAB_141fcb5be;
joined_r0x000141fcad35:
  if (pFVar2 == (FFieldClass *)0x0) goto LAB_141fcad45;
  if (pFVar2 == pFVar7) {
    bVar5 = true;
    goto LAB_141fcad47;
  }
  pFVar2 = pFVar2->SuperClass;
  goto joined_r0x000141fcad35;
LAB_141fcad45:
  bVar5 = false;
LAB_141fcad47:
  if (!bVar5) {
LAB_141fcacd5:
    pFVar9 = local_138.ResolvedField;
    if (local_138.ResolvedField != (FField *)0x0) {
      local_138.ResolvedOwner.WeakPtr.ObjectIndex = 0;
      local_138.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
      local_138.ResolvedField = (FField *)0x0;
      pFVar9 = local_138.ResolvedField;
    }
  }
LAB_141fcad53:
  local_138.ResolvedField = pFVar9;
  if (local_138.ResolvedField == (FField *)0x0) {
    pFVar10 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar6,&local_d8,(UObject *)0x0)
    ;
    if (&local_118 != pFVar10) {
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      local_118.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_118.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(&local_118,L':');
    pFVar10 = PathToString(&local_c8,&local_138.Path);
    iVar1 = (pFVar10->Data).ArrayNum;
    iVar14 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar14 = 0;
    }
    ::FString::AppendChars(&local_118,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar14);
  }
  else {
    pFVar10 = FField::GetPathName(local_138.ResolvedField,&local_e8,(UObject *)0x0);
    local_c8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
    if (&local_118 != pFVar10) {
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      local_118.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_118.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
      local_c8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
    }
  }
LAB_141fcae90:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  iVar14 = local_118.Data.ArrayNum + -1;
  if (local_118.Data.ArrayNum == 0) {
    iVar14 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar14);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(param_1,L"\"",1);
  goto LAB_141fcb5c8;
joined_r0x000141fcb0a1:
  if (pFVar2 == (FFieldClass *)0x0) goto LAB_141fcb0b5;
  if (pFVar2 == pFVar7) {
    bVar5 = true;
    goto LAB_141fcb0bb;
  }
  pFVar2 = pFVar2->SuperClass;
  goto joined_r0x000141fcb0a1;
LAB_141fcb0b5:
  bVar5 = false;
LAB_141fcb0bb:
  if (bVar5) {
LAB_141fcb0db:
    local_138.ResolvedField = pFVar9;
    if (local_138.ResolvedField != (FField *)0x0) {
      pFVar10 = FField::GetPathName(local_138.ResolvedField,&local_a8,(UObject *)0x0);
      local_88.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      if (&local_108 != pFVar10) {
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        local_108.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = (pFVar10->Data).ArrayNum;
        local_108.Data.ArrayMax = (pFVar10->Data).ArrayMax;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
        local_88.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      }
      goto LAB_141fcb224;
    }
  }
  else {
LAB_141fcb0c0:
    if (local_138.ResolvedField != (FField *)0x0) {
      local_138.ResolvedOwner.WeakPtr.ObjectIndex = 0;
      local_138.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
      pFVar9 = (FField *)0x0;
      goto LAB_141fcb0db;
    }
  }
  pFVar10 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar6,&local_98,(UObject *)0x0);
  if (&local_108 != pFVar10) {
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    local_108.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_108.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChar(&local_108,L':');
  pFVar10 = PathToString(&local_88,&local_138.Path);
  iVar1 = (pFVar10->Data).ArrayNum;
  iVar14 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar14 = 0;
  }
  ::FString::AppendChars(&local_108,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar14);
LAB_141fcb224:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  iVar14 = local_108.Data.ArrayNum + -1;
  if (local_108.Data.ArrayNum == 0) {
    iVar14 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_108.Data.AllocatorInstance.Data,iVar14);
  FVar12.Data = local_108.Data.AllocatorInstance.Data;
LAB_141fcb5be:
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
LAB_141fcb5c8:
  if (local_138.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Path.AllocatorInstance.Data);
  }
  return;
}

// GetCPPMacroType @ 141fcdcf0

FString * __thiscall
FFieldPathProperty::GetCPPMacroType
          (FFieldPathProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FString local_28;
  FString local_18;
  
  if ((this->PropertyClass == (FFieldClass *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\FieldPathProperty.cpp"
                         ,0xcc,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  ::FName::ToString(&this->PropertyClass->Name,&local_18);
  ::FString::PrintfImpl(&local_28,L"TFieldPath<F%s>");
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
  ::FString::FString(__return_storage_ptr__,L"TFIELDPATH");
  return __return_storage_ptr__;
}

// GetCPPType @ 141fcdfd0

FString * __thiscall
FFieldPathProperty::GetCPPType
          (FFieldPathProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  int iVar1;
  FString local_18;
  
  if (param_1 != (FString *)0x0) {
    ::FString::operator=(param_1,L"<F");
    ::FName::ToString(&this->PropertyClass->Name,&local_18);
    iVar1 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChars(param_1,L">",1);
  }
  ::FString::FString(__return_storage_ptr__,L"TFieldPath");
  return __return_storage_ptr__;
}

// GetFieldSize @ 141fcf3e0

ulong64 __thiscall FFieldPathProperty::GetFieldSize(FFieldPathProperty *this)

{
  return 0x78;
}

// GetValueTypeHashInternal @ 141fd3d20

uint __thiscall FFieldPathProperty::GetValueTypeHashInternal(FFieldPathProperty *this,void *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 local_res10 [8];
  
  puVar6 = *(undefined8 **)((longlong)param_1 + 0x10);
  iVar2 = *(int *)((longlong)param_1 + 0x18);
  uVar5 = 0;
  puVar1 = puVar6 + iVar2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x18) != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (puVar6 == puVar1) break;
    uVar3 = *puVar6;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    uVar4 = uVar4 + (int)((ulonglong)uVar3 >> 0x20);
    uVar5 = uVar5 - uVar4 ^ uVar4 >> 0xd;
    uVar7 = (-0x61c88647 - uVar4) - uVar5 ^ uVar5 << 8;
    uVar4 = (uVar4 - uVar7) - uVar5 ^ uVar7 >> 0xd;
    uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 >> 0xc;
    uVar7 = (uVar7 - uVar5) - uVar4 ^ uVar5 << 0x10;
    uVar4 = (uVar4 - uVar7) - uVar5 ^ uVar7 >> 5;
    uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 >> 3;
    uVar7 = (uVar7 - uVar5) - uVar4 ^ uVar5 << 10;
    uVar5 = (uVar4 - uVar7) - uVar5 ^ uVar7 >> 0xf;
    puVar6 = puVar6 + 1;
  }
  return uVar5;
}

// Identical @ 141fd41f0

bool __thiscall
FFieldPathProperty::Identical(FFieldPathProperty *this,void *param_1,void *param_2,uint param_3)

{
  bool bVar1;
  
  if (param_1 == (void *)0x0) {
    return param_2 == (void *)0x0;
  }
  if (param_2 != (void *)0x0) {
    bVar1 = TWeakObjectPtr<UStruct,FWeakObjectPtr>::UEOpEquals<UStruct,bool>
                      ((TWeakObjectPtr<UStruct,FWeakObjectPtr> *)((longlong)param_1 + 8),
                       (TWeakObjectPtr<UStruct,FWeakObjectPtr> *)((longlong)param_2 + 8));
    if ((bVar1) && (*(int *)((longlong)param_1 + 0x18) == *(int *)((longlong)param_2 + 0x18))) {
      bVar1 = CompareItems<FName,int>
                        (*(FName **)((longlong)param_1 + 0x10),*(FName **)((longlong)param_2 + 0x10)
                         ,*(int *)((longlong)param_1 + 0x18));
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// ImportText_Internal @ 141fd47a0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __thiscall
FFieldPathProperty::ImportText_Internal
          (FFieldPathProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  wchar_t wVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  wchar_t *pwVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  longlong lVar14;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FFieldPath local_58;
  wchar_t *pwVar13;
  
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\FieldPathProperty.cpp"
                         ,0x88,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pwVar8 = (wchar_t *)(*pcVar4)();
    return pwVar8;
  }
  pwVar8 = (wchar_t *)0x0;
  uVar12 = 0;
  local_58.ResolvedField = (FField *)0x0;
  local_58.ResolvedOwner.WeakPtr.ObjectIndex = 0;
  local_58.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
  local_58.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Path.ArrayNum = 0;
  local_58.Path.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  if ((param_5 & 1U) == 0) {
    ::FString::operator=(&local_98,param_1);
    uVar12 = local_98.Data.ArrayNum - 1;
    if (local_98.Data.ArrayNum == 0) {
      uVar12 = 0;
    }
  }
  else {
    wVar3 = *param_1;
    pwVar10 = pwVar8;
    pwVar13 = pwVar8;
    while (((wVar3 != L'\0' && (uVar12 = (uint)pwVar13, wVar3 != L',')) && (wVar3 != L')'))) {
      lVar14 = (longlong)pwVar10 + 1;
      pwVar10 = (wchar_t *)((longlong)pwVar10 + 1);
      uVar12 = uVar12 + 1;
      pwVar13 = (wchar_t *)(ulonglong)uVar12;
      wVar3 = param_1[lVar14];
    }
    pFVar9 = ::FString::ConstructFromPtrSize(&local_78,param_1,uVar12);
    if (&local_98 != pFVar9) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar9->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pwVar10 = param_1 + (int)uVar12;
  iVar7 = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if (iVar7 != 0) {
    ConstructorHelpers::StripObjectClass(&local_98,false);
    uVar12 = local_98.Data.ArrayNum - 1;
    if (local_98.Data.ArrayNum == 0) {
      uVar12 = 0;
    }
    if ((int)uVar12 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pwVar8 = (wchar_t *)(*pcVar4)();
        return pwVar8;
      }
    }
    if (*(short *)local_98.Data.AllocatorInstance.Data == 0x22) {
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar11.Data = local_98.Data.AllocatorInstance.Data;
      }
      bVar5 = FParse::QuotedString((wchar_t *)FVar11.Data,&local_88,(int *)0x0);
      if (!bVar5) {
        FOutputDevice::LogfImpl(param_6,Warning,L"FieldPathProperty: Bad quoted string: %s");
        pwVar10 = pwVar8;
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        goto LAB_141fd4ab6;
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      local_98.Data.ArrayNum = local_88.Data.ArrayNum;
      local_98.Data.ArrayMax = local_88.Data.ArrayMax;
    }
    pFVar9 = RedirectFieldPathName(&local_68,&local_98);
    if (&local_98 != pFVar9) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar9->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar11.Data = local_98.Data.AllocatorInstance.Data;
    }
    FFieldPath::Generate(&local_58,(wchar_t *)FVar11.Data);
    if (param_3 == Container) {
      cVar6 = (**(code **)(this->_padding_ + 0x70))(this);
      if (cVar6 != '\0') {
        FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_58);
        goto LAB_141fd4ab6;
      }
      param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
    }
    FVar11.Data = local_58.Path.AllocatorInstance.Data;
    pFVar1 = (ForAnyElementType *)((longlong)param_2 + 0x10);
    *(FField **)param_2 = local_58.ResolvedField;
    *(FWeakObjectPtr *)((longlong)param_2 + 8) = local_58.ResolvedOwner.WeakPtr;
    if ((TArray<FName,TSizedDefaultAllocator<32>_> *)pFVar1 != &local_58.Path) {
      iVar7 = local_58.Path.ArrayNum;
      lVar14 = (longlong)local_58.Path.ArrayNum;
      piVar2 = (int *)((longlong)param_2 + 0x1c);
      *(int *)((longlong)param_2 + 0x18) = local_58.Path.ArrayNum;
      if ((local_58.Path.ArrayNum == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_58.Path.ArrayNum,*piVar2,pFVar1,local_58.Path.ArrayNum,piVar2);
        if (iVar7 != 0) {
          memcpy(pFVar1->Data,FVar11.Data,lVar14 << 3);
        }
      }
    }
  }
LAB_141fd4ab6:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_58.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Path.AllocatorInstance.Data);
  }
  return pwVar10;
}

// RedirectFieldPathName @ 141fda720

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
FFieldPathProperty::RedirectFieldPathName(FString *__return_storage_ptr__,FString *param_1)

{
  int *piVar1;
  int iVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  atomic<unsigned_int> aVar7;
  FString *pFVar8;
  FName *pFVar9;
  FName FVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FName FVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  FName *pFVar16;
  FName local_res18;
  FName local_res20;
  FName local_138 [2];
  FCoreRedirectObjectName local_128;
  FString local_108;
  FScopeCoreRedirectsReadLockedContext local_f8;
  FString local_e8;
  undefined1 local_d8 [16];
  FCoreRedirectObjectName local_c8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FCoreRedirect *local_68;
  FString local_60;
  FCoreRedirectObjectName local_50;
  
  local_res18 = (FName)((ulonglong)local_res18 & 0xffffffff00000000);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  ::FString::FString(&local_e8,L".");
  bVar6 = false;
  bVar5 = ::FString::Split(param_1,&local_e8,&local_78,&local_60);
  if (bVar5) {
    ::FString::FString((FString *)&local_f8,L":");
    bVar6 = true;
    bVar5 = ::FString::Split(&local_60,(FString *)&local_f8,&local_88,&local_98);
    if (!bVar5) goto LAB_141fda7c2;
    bVar4 = true;
LAB_141fda7ca:
    bVar5 = bVar4;
    if ((FName)local_f8.Context != (FName)0x0) {
      FMemory::Free(local_f8.Context);
    }
  }
  else {
LAB_141fda7c2:
    bVar5 = false;
    bVar4 = false;
    if (bVar6) goto LAB_141fda7ca;
  }
  if ((FName)local_e8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    local_f8.Context = (FCoreRedirectsContext *)(param_1->Data).AllocatorInstance.Data;
    iVar2 = (param_1->Data).ArrayNum;
    local_128.ObjectName.ComparisonIndex.Value = 0;
    local_128.ObjectName.Number = 0;
    local_128.OuterName.ComparisonIndex.Value = 0;
    local_128.OuterName.Number = 0;
    local_128.PackageName.ComparisonIndex.Value = 0;
    local_128.PackageName.Number = 0;
    local_f8._8_4_ = iVar2 - 1;
    if (iVar2 == 0) {
      local_f8._8_4_ = 0;
    }
    local_d8._12_4_ = local_f8._12_4_;
    local_d8._8_4_ = local_f8._8_4_;
    local_d8._0_8_ = local_f8.Context;
    bVar6 = FCoreRedirectObjectName::ExpandNames
                      ((TStringView<wchar_t> *)local_d8,&local_128.ObjectName,&local_128.OuterName,
                       &local_128.PackageName);
    if (!bVar6) {
      local_res18.ComparisonIndex.Value = 0;
      local_res18.Number = 0;
      local_128.PackageName.ComparisonIndex.Value = 0;
      local_128.PackageName.Number = 0;
      local_128.OuterName.ComparisonIndex.Value = 0;
      local_128.OuterName.Number = 0;
      local_128.ObjectName.ComparisonIndex.Value = 0;
      local_128.ObjectName.Number = 0;
    }
    local_c8.ObjectName.ComparisonIndex.Value = 0;
    local_c8.ObjectName.Number = 0;
    local_c8.OuterName.ComparisonIndex.Value = 0;
    local_c8.OuterName.Number = 0;
    pFVar16 = (FName *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90);
    local_c8.PackageName.ComparisonIndex.Value = 0;
    local_c8.PackageName.Number = 0;
    local_68 = (FCoreRedirect *)0x0;
    local_f8.NeedsUnlock = true;
    FVar13 = *pFVar16;
    FVar10 = (FName)&UE::CoreRedirects::Private::GlobalCoreRedirectContext;
    if (FVar13 != (FName)0x0) {
      FVar10 = FVar13;
    }
    aVar3 = *(atomic<unsigned_int> *)((longlong)FVar10 + 200);
    piVar1 = (int *)((longlong)FVar10 + 0xcc);
    local_f8.Context = (FCoreRedirectsContext *)FVar10;
    if ((aVar3 == (atomic<unsigned_int>)0x0) ||
       (aVar7 = (atomic<unsigned_int>)GetCurrentThreadId(), aVar3 != aVar7)) {
      AcquireSRWLockShared((PSRWLOCK)((longlong)FVar10 + 0xc0));
    }
    else {
      *piVar1 = *piVar1 + 1;
    }
    bVar6 = FCoreRedirects::RedirectNameAndValuesUnderReadLock
                      (Type_Property,&local_128,&local_c8,&local_68,None,&local_f8);
    if (*piVar1 < 1) {
      ReleaseSRWLockShared((PSRWLOCK)((longlong)FVar10 + 0xc0));
    }
    else {
      aVar3 = *(atomic<unsigned_int> *)((longlong)FVar10 + 200);
      aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar7) {
        `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
        operator()(&local_res18);
      }
      *piVar1 = *piVar1 + -1;
    }
    if (bVar6) {
      local_res18 = local_c8.PackageName;
      local_138[0] = local_c8.OuterName;
      local_res20 = local_c8.ObjectName;
      if (local_c8.OuterName != (FName)0x0) {
        ::FName::ToString(local_138,&local_e8);
        FVar13 = (FName)((longlong)local_e8.Data.AllocatorInstance.Data +
                        (longlong)local_e8.Data.ArrayNum * 2);
        FVar12 = (FName)local_e8.Data.AllocatorInstance.Data;
        FVar10 = (FName)local_e8.Data.AllocatorInstance.Data;
        if ((FName)local_e8.Data.AllocatorInstance.Data == FVar13) goto joined_r0x000141fda9a8;
        do {
          if (*(short *)FVar12 == 0x2e) {
            if ((int)((longlong)FVar12 - (longlong)local_e8.Data.AllocatorInstance.Data >> 1) == -1)
            goto joined_r0x000141fda9a8;
            goto LAB_141fda9fa;
          }
          FVar12 = (FName)((longlong)FVar12 + 2);
        } while (FVar12 != FVar13);
        do {
          if (*(short *)FVar10 == 0x3a) {
            if ((int)((longlong)FVar10 - (longlong)local_e8.Data.AllocatorInstance.Data >> 1) != -1)
            goto LAB_141fda9fa;
            break;
          }
          FVar10 = (FName)((longlong)FVar10 + 2);
joined_r0x000141fda9a8:
        } while (FVar10 != FVar13);
        if (local_res18 == (FName)0x0) {
          ::FName::ToString(&local_res20,(FString *)local_d8);
          pFVar8 = ::FName::ToString(local_138,&local_a8);
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar14 = L"%s:%s";
          }
          else {
            pwVar14 = L"%s:%s";
          }
          goto LAB_141fdaaf4;
        }
        ::FName::ToString(&local_res20,(FString *)&local_f8);
        ::FName::ToString(local_138,(FString *)local_d8);
        ::FName::ToString(&local_res18,&local_a8);
        ::FString::PrintfImpl(&local_108,L"%s.%s:%s");
        if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        FVar13 = (FName)local_f8.Context;
        if ((FName)local_d8._0_8_ != (FName)0x0) {
          FMemory::Free((void *)local_d8._0_8_);
          FVar13 = (FName)local_f8.Context;
        }
        goto LAB_141fdaa99;
      }
      if (local_c8.PackageName == (FName)0x0) {
        pFVar16 = &local_res20;
      }
      else {
        if (local_c8.ObjectName != (FName)0x0) {
          ::FName::ToString(&local_res20,(FString *)local_d8);
          ::FName::ToString(&local_res18,&local_a8);
          ::FString::PrintfImpl(&local_108,L"%s.%s");
          FVar10 = (FName)local_d8._0_8_;
          if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            FVar10 = (FName)local_d8._0_8_;
          }
          goto LAB_141fdaaa7;
        }
        pFVar16 = &local_res18;
      }
      ::FName::ToString(pFVar16,&local_108);
      goto LAB_141fdac64;
    }
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar15.Data = local_78.Data.AllocatorInstance.Data;
    }
    pFVar9 = ::FName::FName(&local_res20,(wchar_t *)FVar15.Data);
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar15.Data = local_88.Data.AllocatorInstance.Data;
    }
    FVar13 = *pFVar9;
    pFVar9 = ::FName::FName(local_138,(wchar_t *)FVar15.Data);
    local_128.ObjectName.ComparisonIndex.Value = 0;
    local_128.ObjectName.Number = 0;
    local_128.OuterName.ComparisonIndex.Value = 0;
    local_128.OuterName.Number = 0;
    local_128.PackageName.ComparisonIndex.Value = 0;
    local_128.PackageName.Number = 0;
    local_50.ObjectName = *pFVar9;
    local_50.OuterName.ComparisonIndex.Value = 0;
    local_50.OuterName.Number = 0;
    FVar10 = *pFVar16;
    local_68 = (FCoreRedirect *)0x0;
    FVar12 = (FName)&UE::CoreRedirects::Private::GlobalCoreRedirectContext;
    if (FVar10 != (FName)0x0) {
      FVar12 = FVar10;
    }
    local_f8.NeedsUnlock = true;
    aVar3 = *(atomic<unsigned_int> *)((longlong)FVar12 + 200);
    piVar1 = (int *)((longlong)FVar12 + 0xcc);
    local_f8.Context = (FCoreRedirectsContext *)FVar12;
    local_50.PackageName = FVar13;
    if ((aVar3 == (atomic<unsigned_int>)0x0) ||
       (aVar7 = (atomic<unsigned_int>)GetCurrentThreadId(), aVar3 != aVar7)) {
      AcquireSRWLockShared((PSRWLOCK)((longlong)FVar12 + 0xc0));
    }
    else {
      *piVar1 = *piVar1 + 1;
    }
    bVar6 = FCoreRedirects::RedirectNameAndValuesUnderReadLock
                      (Type_Package|Type_Struct|Type_Class,&local_50,&local_128,&local_68,None,
                       &local_f8);
    if (*piVar1 < 1) {
      ReleaseSRWLockShared((PSRWLOCK)((longlong)FVar12 + 0xc0));
    }
    else {
      aVar3 = *(atomic<unsigned_int> *)((longlong)FVar12 + 200);
      aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar7) {
        `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
        operator()(&local_res18);
      }
      *piVar1 = *piVar1 + -1;
    }
    if (bVar6) {
      local_d8._0_8_ = local_98.Data.AllocatorInstance.Data;
      local_res18 = local_128.PackageName;
      FVar11.Value = local_98.Data.ArrayNum - 1;
      if (local_98.Data.ArrayNum == 0) {
        FVar11.Value = 0;
      }
      local_138[0] = local_128.OuterName;
      local_d8._8_4_ = FVar11.Value;
      local_res20 = local_128.ObjectName;
      if (local_128.OuterName != (FName)0x0) {
        ::FName::ToString(local_138,&local_e8);
        FVar13 = (FName)((longlong)local_e8.Data.AllocatorInstance.Data +
                        (longlong)local_e8.Data.ArrayNum * 2);
        FVar12 = (FName)local_e8.Data.AllocatorInstance.Data;
        FVar10 = (FName)local_e8.Data.AllocatorInstance.Data;
        if ((FName)local_e8.Data.AllocatorInstance.Data == FVar13) goto joined_r0x000141fdae95;
        do {
          if (*(short *)FVar12 == 0x2e) {
            if ((int)((longlong)FVar12 - (longlong)local_e8.Data.AllocatorInstance.Data >> 1) == -1)
            goto joined_r0x000141fdae95;
            goto LAB_141fdaee0;
          }
          FVar12 = (FName)((longlong)FVar12 + 2);
        } while (FVar12 != FVar13);
        do {
          if (*(short *)FVar10 == 0x3a) {
            if ((int)((longlong)FVar10 - (longlong)local_e8.Data.AllocatorInstance.Data >> 1) != -1)
            goto LAB_141fdaee0;
            break;
          }
          FVar10 = (FName)((longlong)FVar10 + 2);
joined_r0x000141fdae95:
        } while (FVar10 != FVar13);
        if (local_res18 == (FName)0x0) {
          ::FName::ToString(&local_res20,(FString *)&local_c8);
          pFVar8 = ::FName::ToString(local_138,(FString *)&local_128);
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar14 = L"%s:%s";
          }
          else {
            pwVar14 = L"%s:%s";
          }
          goto LAB_141fdafdc;
        }
        ::FName::ToString(&local_res20,&local_a8);
        ::FName::ToString(local_138,(FString *)&local_c8);
        ::FName::ToString(&local_res18,(FString *)&local_128);
        ::FString::PrintfImpl(&local_108,L"%s.%s:%s");
        if (local_128.ObjectName != (FName)0x0) {
          FMemory::Free((void *)local_128.ObjectName);
        }
        if (local_c8.ObjectName != (FName)0x0) {
          FMemory::Free((void *)local_c8.ObjectName);
        }
        goto LAB_141fdaf80;
      }
      if (local_128.PackageName == (FName)0x0) {
        pFVar16 = &local_res20;
      }
      else {
        if (local_128.ObjectName != (FName)0x0) {
          ::FName::ToString(&local_res20,(FString *)&local_c8);
          ::FName::ToString(&local_res18,(FString *)&local_128);
          ::FString::PrintfImpl(&local_108,L"%s.%s");
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_c8.ObjectName;
          if (local_128.ObjectName != (FName)0x0) {
            FMemory::Free((void *)local_128.ObjectName);
            local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_c8.ObjectName;
          }
          goto LAB_141fdaf8e;
        }
        pFVar16 = &local_res18;
      }
      ::FName::ToString(pFVar16,&local_108);
      goto LAB_141fdb152;
    }
  }
  ::FString::FString(__return_storage_ptr__,param_1);
  goto LAB_141fdb205;
LAB_141fdaee0:
  if (local_res18 == (FName)0x0) {
    ::FName::ToString(&local_res20,(FString *)&local_c8);
    ::FName::ToString(local_138,(FString *)&local_128);
    pwVar14 = L"%s.%s";
LAB_141fdafdc:
    ::FString::PrintfImpl(&local_108,pwVar14);
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_c8.ObjectName;
    if (local_128.ObjectName != (FName)0x0) {
      FMemory::Free((void *)local_128.ObjectName);
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_c8.ObjectName;
    }
  }
  else {
    ::FName::ToString(&local_res20,(FString *)&local_128);
    ::FName::ToString(local_138,(FString *)&local_c8);
    ::FName::ToString(&local_res18,&local_a8);
    ::FString::PrintfImpl(&local_108,L"%s.%s.%s");
    if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_128.ObjectName;
    if (local_c8.ObjectName != (FName)0x0) {
      FMemory::Free((void *)local_c8.ObjectName);
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_128.ObjectName;
    }
  }
LAB_141fdaf80:
  if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
LAB_141fdaf8e:
  if ((FName)local_e8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
LAB_141fdb152:
  DestructItems<FString,int>((FString *)0x0,0);
  local_e8.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
  local_128.ObjectName.ComparisonIndex.Value = local_d8._0_4_;
  local_128.ObjectName.Number = local_d8._4_4_;
  local_128.OuterName.ComparisonIndex.Value = local_d8._8_4_;
  local_128.OuterName.Number = local_d8._12_4_;
  local_e8.Data.ArrayNum = local_108.Data.ArrayNum - 1;
  if (local_108.Data.ArrayNum == 0) {
    local_e8.Data.ArrayNum = 0;
  }
  local_c8.OuterName.Number = local_e8.Data.ArrayMax;
  local_c8.OuterName.ComparisonIndex.Value = local_e8.Data.ArrayNum;
  local_c8.ObjectName = (FName)local_108.Data.AllocatorInstance.Data;
  FPackageName::ObjectPathCombine
            ((FString *)&local_f8,(TStringView<wchar_t> *)&local_c8,
             (TStringView<wchar_t> *)&local_128);
  if ((FName)local_108.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (5 < (byte)LogCoreRedirects._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  ::FString::FString(__return_storage_ptr__,(FString *)&local_f8);
  if ((FName)local_f8.Context != (FName)0x0) {
    FMemory::Free(local_f8.Context);
  }
  goto LAB_141fdb205;
LAB_141fda9fa:
  if (local_res18 == (FName)0x0) {
    ::FName::ToString(&local_res20,(FString *)local_d8);
    ::FName::ToString(local_138,&local_a8);
    pwVar14 = L"%s.%s";
LAB_141fdaaf4:
    ::FString::PrintfImpl(&local_108,pwVar14);
    FVar13 = (FName)local_d8._0_8_;
    if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      FVar13 = (FName)local_d8._0_8_;
    }
  }
  else {
    ::FName::ToString(&local_res20,&local_a8);
    ::FName::ToString(local_138,(FString *)&local_f8);
    ::FName::ToString(&local_res18,(FString *)local_d8);
    ::FString::PrintfImpl(&local_108,L"%s.%s.%s");
    if ((FName)local_d8._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_d8._0_8_);
    }
    FVar13 = (FName)local_a8.Data.AllocatorInstance;
    if ((FName)local_f8.Context != (FName)0x0) {
      FMemory::Free(local_f8.Context);
      FVar13 = (FName)local_a8.Data.AllocatorInstance;
    }
  }
LAB_141fdaa99:
  FVar10 = (FName)local_e8.Data.AllocatorInstance.Data;
  if (FVar13 != (FName)0x0) {
    FMemory::Free((void *)FVar13);
    FVar10 = (FName)local_e8.Data.AllocatorInstance.Data;
  }
LAB_141fdaaa7:
  if (FVar10 != (FName)0x0) {
    FMemory::Free((void *)FVar10);
  }
LAB_141fdac64:
  DestructItems<FString,int>((FString *)0x0,0);
  if (5 < (byte)LogCoreRedirects._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCoreRedirects);
  }
  FVar15.Data = local_108.Data.AllocatorInstance.Data;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = local_108.Data.ArrayNum;
  if (local_108.Data.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
               local_108.Data.ArrayNum,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,FVar15.Data,
           (longlong)local_108.Data.ArrayNum * 2);
  }
  if ((FName)local_108.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
LAB_141fdb205:
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Serialize @ 141fe8100

void __thiscall FFieldPathProperty::Serialize(FFieldPathProperty *this,FArchive *param_1)

{
  TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
  *this_00;
  TTuple<FName,FFieldClass_*> *pTVar1;
  FName FVar2;
  FName local_res8;
  
  FProperty::Serialize((FProperty *)this,param_1);
  FVar2.ComparisonIndex.Value = 0;
  FVar2.Number = 0;
  local_res8 = FVar2;
  if (this->PropertyClass != (FFieldClass *)0x0) {
    local_res8 = this->PropertyClass->Name;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res8);
  if ((param_1->field_0x28 & 1) != 0) {
    if (local_res8 != (FName)0x0) {
      this_00 = (TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
                 *)FFieldClass::GetNameToFieldClassMap();
      pTVar1 = TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
               ::Find(this_00,local_res8);
      if (pTVar1 != (TTuple<FName,FFieldClass_*> *)0x0) {
        FVar2.ComparisonIndex.Value = *(uint *)&pTVar1->field_0x8;
        FVar2.Number = *(uint *)&pTVar1->field_0xc;
      }
    }
    this->PropertyClass = (FFieldClass *)FVar2;
  }
  return;
}

// SerializeItem @ 141fe8cf0

void __thiscall
FFieldPathProperty::SerializeItem
          (FFieldPathProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  ::operator<<(pFVar1,param_2);
  return;
}

// StaticClass @ 141fe98e0

FFieldClass * __cdecl FFieldPathProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FFieldPathProperty",0x10000000000000,
                 CASTCLASS_FFieldPathProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct)
      ;
      atexit(`FFieldPathProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// SupportsNetSharedSerialization @ 141fe9d00

bool __thiscall FFieldPathProperty::SupportsNetSharedSerialization(FFieldPathProperty *this)

{
  return false;
}

// ContainsObjectReference @ 142024770

bool __thiscall
FFieldPathProperty::ContainsObjectReference
          (FFieldPathProperty *this,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          EPropertyObjectReferenceType param_2)

{
  return (bool)((byte)param_2 & 1);
}

// EmitReferenceInfo @ 14203dcd0

void __thiscall
FFieldPathProperty::EmitReferenceInfo
          (FFieldPathProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
  uint uVar1;
  int iVar2;
  FName FVar3;
  FString *pFVar4;
  FName *pFVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  FName local_res8;
  FString local_68;
  FName local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  FMemberDeclaration local_38;
  
  uVar1 = (uint)this->_padding_;
  uVar8 = *(int *)((longlong)&this->_padding_ + 4) + param_2;
  if (0 < (int)uVar1) {
    uVar7 = (ulonglong)uVar1;
    do {
      pFVar4 = UE::GC::FPropertyStack::GetPropertyPath(param_4,&local_68);
      iVar2 = (pFVar4->Data).ArrayNum;
      iVar6 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar6 = 0;
      }
      pFVar5 = ::FName::FName(&local_res8,iVar6,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,
                              FNAME_Add);
      FVar3 = *pFVar5;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      uStack_4c = CONCAT31(uStack_4c._1_3_,7);
      local_38._12_4_ = uStack_4c;
      local_38.Offset = uVar8;
      local_48 = 0;
      local_38.ExtraWord.ObjectARO = (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0;
      local_58 = FVar3;
      uStack_50 = uVar8;
      local_38.DebugName = FVar3;
      UE::GC::FSchemaBuilder::Add(param_1,&local_38);
      uVar8 = uVar8 + 0x20;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

