// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 10

// StaticStruct @ 144472270

UScriptStruct * __cdecl FPropertyPathSegment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyPathSegment.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PropertyPath();
    Z_Registration_Info_UScriptStruct_FPropertyPathSegment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathSegment,(UObject *)pUVar1,
                         L"PropertyPathSegment");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyPathSegment.OuterSingleton;
}

// FPropertyPathSegment @ 14448a010

FPropertyPathSegment * __thiscall
FPropertyPathSegment::FPropertyPathSegment(FPropertyPathSegment *this,int param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  FPropertyPathSegment *pFVar5;
  FName *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->Struct).field0_0x0.DebugPtr = (UStruct *)0x0;
  (this->Field).Container.Field = (FField *)0x0;
  this->ArrayIndex = -1;
  if (1 < (longlong)param_1) {
    lVar4 = 1;
    iVar8 = 1;
    do {
      if (param_2[lVar4] == L'[') {
        ::FString::ConstructFromPtrSize(&local_28,param_2 + (iVar8 + 1),(param_1 - iVar8) + -2);
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_28.Data.ArrayNum != 0) {
          FVar7.Data = local_28.Data.AllocatorInstance.Data;
        }
        iVar3 = _wtoi((wchar_t *)FVar7.Data);
        this->ArrayIndex = iVar3;
        param_1 = iVar8;
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        break;
      }
      lVar4 = lVar4 + 1;
      iVar8 = iVar8 + 1;
    } while (lVar4 < param_1);
  }
  if ((param_2 == (wchar_t *)0x0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6628892364763038374>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Private\\PropertyPathHelpers.cpp"
                         ,0x2a6,"PropertyName != nullptr"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FPropertyPathSegment *)(*pcVar1)();
    return pFVar5;
  }
  ::FString::ConstructFromPtrSize(&local_18,param_2,param_1);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar7.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar6 = ::FName::FName(&local_res8,(wchar_t *)FVar7.Data,FNAME_Find);
  this->Name = *pFVar6;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// FPropertyPathSegment @ 14448a150

FPropertyPathSegment * __thiscall
FPropertyPathSegment::FPropertyPathSegment(FPropertyPathSegment *this)

{
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->Struct).field0_0x0.DebugPtr = (UStruct *)0x0;
  (this->Field).Container.Field = (FField *)0x0;
  this->ArrayIndex = -1;
  return this;
}

// GetArrayIndex @ 14448dc50

int __thiscall FPropertyPathSegment::GetArrayIndex(FPropertyPathSegment *this)

{
  return this->ArrayIndex;
}

// GetField @ 14448dd00

FFieldVariant __thiscall FPropertyPathSegment::GetField(FPropertyPathSegment *this)

{
  ulonglong uVar1;
  FFieldObjectUnion in_RDX;
  
  uVar1 = (this->Field).Container.Unknown;
  (in_RDX.Field)->_padding_ = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  return (FFieldVariant)in_RDX;
}

// GetName @ 14448de50

FName __thiscall FPropertyPathSegment::GetName(FPropertyPathSegment *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->Name;
  return in_RDX;
}

// GetStruct @ 14448e5b0

UStruct * __thiscall FPropertyPathSegment::GetStruct(FPropertyPathSegment *this)

{
  return (this->Struct).field0_0x0.DebugPtr;
}

// MakeUnresolvedCopy @ 144491630

FPropertyPathSegment * __cdecl
FPropertyPathSegment::MakeUnresolvedCopy
          (FPropertyPathSegment *__return_storage_ptr__,FPropertyPathSegment *param_1)

{
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  __return_storage_ptr__->ArrayIndex = -1;
  (__return_storage_ptr__->Struct).field0_0x0.DebugPtr = (UStruct *)0x0;
  (__return_storage_ptr__->Field).Container.Field = (FField *)0x0;
  __return_storage_ptr__->Name = param_1->Name;
  __return_storage_ptr__->ArrayIndex = param_1->ArrayIndex;
  return __return_storage_ptr__;
}

// PostSerialize @ 144491770

void __thiscall FPropertyPathSegment::PostSerialize(FPropertyPathSegment *this,FArchive *param_1)

{
  FName FVar1;
  ulonglong uVar2;
  FFieldVariant FVar3;
  UObject *pUVar4;
  
  FVar1 = (FName)(this->Struct).field0_0x0.DebugPtr;
  if (FVar1 != (FName)0x0) {
    (this->Struct).field0_0x0.DebugPtr = (UStruct *)0x0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)FVar1);
    }
    (this->Struct).field0_0x0.DebugPtr = (UStruct *)FVar1;
    FVar3 = FindUFieldOrFProperty((UStruct *)&stack0x00000008,FVar1,(this->Name).ComparisonIndex);
    uVar2 = *(ulonglong *)FVar3.Container;
    (this->Field).Container.Unknown = uVar2;
    if ((((uVar2 & 1) != 0) && ((UObject *)(uVar2 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar2 & 0xfffffffffffffffe));
    }
    uVar2 = (this->Field).Container.Unknown;
    if ((((uVar2 & 1) != 0) &&
        (pUVar4 = (UObject *)(uVar2 & 0xfffffffffffffffe), pUVar4 != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
  }
  return;
}

// Resolve @ 144492140

FFieldVariant __thiscall FPropertyPathSegment::Resolve(FPropertyPathSegment *this,UStruct *param_1)

{
  FName FVar1;
  ulonglong uVar2;
  FFieldVariant FVar3;
  FName in_R8;
  
  if (in_R8 == (FName)0x0) {
    param_1->_padding_ = 0;
  }
  else {
    FVar1 = (FName)(this->Struct).field0_0x0.DebugPtr;
    if ((FVar1 == (FName)0x0) || (FVar1 != in_R8)) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)in_R8);
      }
      (this->Struct).field0_0x0.DebugPtr = (UStruct *)in_R8;
      FVar3 = FindUFieldOrFProperty((UStruct *)&stack0x00000018,in_R8,(this->Name).ComparisonIndex);
      uVar2 = *(ulonglong *)FVar3.Container;
      (this->Field).Container.Unknown = uVar2;
      if ((((uVar2 & 1) != 0) && ((UObject *)(uVar2 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
         (UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)(uVar2 & 0xfffffffffffffffe));
      }
    }
    uVar2 = (this->Field).Container.Unknown;
    param_1->_padding_ = uVar2;
    if ((((uVar2 & 1) != 0) && ((UObject *)(uVar2 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar2 & 0xfffffffffffffffe));
      return (FFieldVariant)(FFieldObjectUnion)param_1;
    }
  }
  return (FFieldVariant)(FFieldObjectUnion)param_1;
}

