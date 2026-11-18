// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// ~IDS_ObjectPoolItem @ 14b5230f0

void __thiscall IDS_ObjectPoolItem::~IDS_ObjectPoolItem(IDS_ObjectPoolItem *this)

{
  this->_padding_ = (longlong)&___7IDS_ObjectPoolItem__6B_;
  return;
}

// _getUObject @ 14b5299f0

UObject * __thiscall IDS_ObjectPoolItem::_getUObject(IDS_ObjectPoolItem *this)

{
  return (UObject *)0x0;
}

// IsPoolItem @ 14c08f820

bool __cdecl IDS_ObjectPoolItem::IsPoolItem(TWeakObjectPtr<UObject,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *this;
  UClass *pUVar2;
  void *pvVar3;
  void *pvVar4;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0] = param_1.WeakPtr;
  this = FWeakObjectPtr::Get(local_res8);
  if (this != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this);
    }
    pUVar2 = Z_Construct_UClass_UDS_ObjectPoolItem_NoRegister();
    pvVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar2);
    pvVar4 = pvVar3;
    if (this == (UObject *)0x0) {
      pvVar4 = (void *)0x0;
    }
    if (pvVar4 != (void *)0x0) {
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)pvVar3 + 8));
      return bVar1;
    }
  }
  return false;
}

