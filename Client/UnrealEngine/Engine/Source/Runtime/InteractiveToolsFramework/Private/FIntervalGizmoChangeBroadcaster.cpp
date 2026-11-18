// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 5

// ~FIntervalGizmoChangeBroadcaster @ 1496892e0

void __thiscall
FIntervalGizmoChangeBroadcaster::~FIntervalGizmoChangeBroadcaster
          (FIntervalGizmoChangeBroadcaster *this)

{
  this->_padding_ = (longlong)&___7IToolCommandChangeSource__6B_;
  return;
}

// BeginChange @ 1496926d0

void __thiscall FIntervalGizmoChangeBroadcaster::BeginChange(FIntervalGizmoChangeBroadcaster *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->IntervalGizmo).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->IntervalGizmo).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x000149692700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 800))(pUVar2,*(code **)(*(longlong *)pUVar2 + 800));
    return;
  }
  return;
}

// EndChange @ 14969da40

TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_> __thiscall
FIntervalGizmoChangeBroadcaster::EndChange(FIntervalGizmoChangeBroadcaster *this)

{
  bool bVar1;
  UObject *pUVar2;
  FToolCommandChange *in_RDX;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->IntervalGizmo).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->IntervalGizmo).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x328))(pUVar2);
  }
  *in_RDX = (FToolCommandChange)0x0;
  return (TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_>)in_RDX;
}

// GetChangeDescription @ 1496a05c0

FText * __thiscall
FIntervalGizmoChangeBroadcaster::GetChangeDescription
          (FIntervalGizmoChangeBroadcaster *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"UIntervalGizmo",L"FIntervalGizmoChangeBroadcaster",
             L"IntervalGizmoEdit");
  return __return_storage_ptr__;
}

// GetChangeTarget @ 1496a0650

UObject * __thiscall
FIntervalGizmoChangeBroadcaster::GetChangeTarget(FIntervalGizmoChangeBroadcaster *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->IntervalGizmo).WeakPtr);
  return pUVar1;
}

