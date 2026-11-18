// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 16

// Destroy @ 141f78a30

void __thiscall FStructOnScope::Destroy(FStructOnScope *this)

{
  UObject *pUVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  if (this->OwnsMemory != false) {
    pUVar1 = FWeakObjectPtr::Get(&(this->ScriptStruct).WeakPtr);
    if (pUVar1 != (UObject *)0x0) {
      if (this->SampleStructMemory != (uchar *)0x0) {
        (**(code **)(*(longlong *)pUVar1 + 0x300))(pUVar1,this->SampleStructMemory,1);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = 0;
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      (this->ScriptStruct).WeakPtr = local_res8;
    }
    if (this->SampleStructMemory != (uchar *)0x0) {
      FMemory::Free(this->SampleStructMemory);
      this->SampleStructMemory = (uchar *)0x0;
    }
  }
  return;
}

// GetStruct @ 141f86d10

UStruct * __thiscall FStructOnScope::GetStruct(FStructOnScope *this)

{
  UStruct *pUVar1;
  
  pUVar1 = (UStruct *)FWeakObjectPtr::Get(&(this->ScriptStruct).WeakPtr);
  return pUVar1;
}

// GetStructMemory @ 141f87590

uchar * __thiscall FStructOnScope::GetStructMemory(FStructOnScope *this)

{
  return this->SampleStructMemory;
}

// GetStructMemory @ 141f875a0

uchar * __thiscall FStructOnScope::GetStructMemory(FStructOnScope *this)

{
  return this->SampleStructMemory;
}

// IsValid @ 141f908a0

bool __thiscall FStructOnScope::IsValid(FStructOnScope *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ScriptStruct).WeakPtr);
  if ((bVar1) && (this->SampleStructMemory != (uchar *)0x0)) {
    return true;
  }
  return false;
}

// OwnsStructMemory @ 141f944d0

bool __thiscall FStructOnScope::OwnsStructMemory(FStructOnScope *this)

{
  return this->OwnsMemory;
}

// Reset @ 141f99df0

void __thiscall FStructOnScope::Reset(FStructOnScope *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  (**(code **)(this->_padding_ + 0x40))();
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->ScriptStruct).WeakPtr = local_res8;
  this->SampleStructMemory = (uchar *)0x0;
  this->OwnsMemory = false;
  return;
}

// FStructOnScope @ 1421fff70

FStructOnScope * __thiscall
FStructOnScope::FStructOnScope(FStructOnScope *this,FStructOnScope *param_1)

{
  this->_padding_ = (longlong)&___7FStructOnScope__6B_;
  (this->ScriptStruct).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Package).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ScriptStruct).WeakPtr = (param_1->ScriptStruct).WeakPtr;
  this->SampleStructMemory = param_1->SampleStructMemory;
  this->OwnsMemory = param_1->OwnsMemory;
  param_1->OwnsMemory = false;
  (**(code **)(param_1->_padding_ + 0x48))(param_1);
  return this;
}

// FStructOnScope @ 1421fffc0

FStructOnScope * __thiscall FStructOnScope::FStructOnScope(FStructOnScope *this,UStruct *param_1)

{
  UObject *pUVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  UStruct *local_res8;
  
  this->_padding_ = (longlong)&___7FStructOnScope__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ScriptStruct).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->ScriptStruct).WeakPtr,(FObjectPtr)&local_res8);
  this->SampleStructMemory = (uchar *)0x0;
  (this->Package).WeakPtr = (FWeakObjectPtr)0x0;
  this->OwnsMemory = false;
  pUVar1 = FWeakObjectPtr::Get(&(this->ScriptStruct).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
    uVar4 = (uint)*(short *)&pUVar1[2].field_0xc;
    uVar5 = *(int *)&pUVar1[2].field_0x8 + -1 + uVar4 & ~(uVar4 - 1);
    uVar3 = 1;
    if (uVar5 != 0) {
      uVar3 = uVar5;
    }
    puVar2 = FMemory::Malloc((longlong)(int)uVar3,uVar4);
    this->SampleStructMemory = puVar2;
    (**(code **)(*(longlong *)pUVar1 + 0x2f8))(pUVar1,puVar2,1);
    this->OwnsMemory = true;
  }
  return this;
}

// FStructOnScope @ 1422000b0

FStructOnScope * __thiscall
FStructOnScope::FStructOnScope(FStructOnScope *this,UStruct *param_1,uchar *param_2)

{
  UStruct *local_res8;
  
  this->_padding_ = (longlong)&___7FStructOnScope__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ScriptStruct).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->ScriptStruct).WeakPtr,(FObjectPtr)&local_res8);
  this->SampleStructMemory = param_2;
  (this->Package).WeakPtr = (FWeakObjectPtr)0x0;
  this->OwnsMemory = false;
  return this;
}

// FStructOnScope @ 142200150

FStructOnScope * __thiscall FStructOnScope::FStructOnScope(FStructOnScope *this)

{
  this->_padding_ = (longlong)&___7FStructOnScope__6B_;
  (this->ScriptStruct).WeakPtr = (FWeakObjectPtr)0x0;
  this->SampleStructMemory = (uchar *)0x0;
  (this->Package).WeakPtr = (FWeakObjectPtr)0x0;
  this->OwnsMemory = false;
  return this;
}

// ~FStructOnScope @ 1422011d0

void __thiscall FStructOnScope::~FStructOnScope(FStructOnScope *this)

{
  UObject *pUVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this->_padding_ = (longlong)&___7FStructOnScope__6B_;
  if (this->OwnsMemory != false) {
    pUVar1 = FWeakObjectPtr::Get(&(this->ScriptStruct).WeakPtr);
    if (pUVar1 != (UObject *)0x0) {
      if (this->SampleStructMemory != (uchar *)0x0) {
        (**(code **)(*(longlong *)pUVar1 + 0x300))(pUVar1,this->SampleStructMemory,1);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = 0;
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      (this->ScriptStruct).WeakPtr = local_res8;
    }
    if (this->SampleStructMemory != (uchar *)0x0) {
      FMemory::Free(this->SampleStructMemory);
      this->SampleStructMemory = (uchar *)0x0;
    }
  }
  return;
}

// AddReferencedObjects @ 142203820

void __thiscall
FStructOnScope::AddReferencedObjects(FStructOnScope *this,FReferenceCollector *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (this->SampleStructMemory != (uchar *)0x0) {
    pUVar2 = (UStruct *)FWeakObjectPtr::GetEvenIfUnreachable(&(this->ScriptStruct).WeakPtr);
    if (pUVar2 == (UStruct *)0x0) {
      pFVar4 = GetTypeName<UScriptStruct>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UScriptStruct>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UStruct_const_>(&local_18,pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    FReferenceCollector::AddReferencedObjects
              (param_1,(TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&this->ScriptStruct,
               this->SampleStructMemory,(UObject *)0x0,(FProperty *)0x0);
  }
  return;
}

// GetPackage @ 14220de40

UPackage * __thiscall FStructOnScope::GetPackage(FStructOnScope *this)

{
  UPackage *pUVar1;
  
  pUVar1 = (UPackage *)FWeakObjectPtr::Get(&(this->Package).WeakPtr);
  return pUVar1;
}

// Initialize @ 142211e40

void __thiscall FStructOnScope::Initialize(FStructOnScope *this)

{
  UObject *pUVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->ScriptStruct).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
    uVar4 = (uint)*(short *)&pUVar1[2].field_0xc;
    uVar5 = *(int *)&pUVar1[2].field_0x8 + -1 + uVar4 & ~(uVar4 - 1);
    uVar3 = 1;
    if (uVar5 != 0) {
      uVar3 = uVar5;
    }
    puVar2 = FMemory::Malloc((longlong)(int)uVar3,uVar4);
    this->SampleStructMemory = puVar2;
    (**(code **)(*(longlong *)pUVar1 + 0x2f8))(pUVar1,puVar2,1);
    this->OwnsMemory = true;
  }
  return;
}

// SetPackage @ 14222af60

void __thiscall FStructOnScope::SetPackage(FStructOnScope *this,UPackage *param_1)

{
  UPackage *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPackage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Package).WeakPtr,(FObjectPtr)local_res8);
  return;
}

