// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 5

// ~FGizmoFloatParameterChangeSource @ 1496892a0

void __thiscall
FGizmoFloatParameterChangeSource::~FGizmoFloatParameterChangeSource
          (FGizmoFloatParameterChangeSource *this)

{
  FFloatParameterProxyChange *pFVar1;
  
  this->_padding_ = (longlong)&___7FGizmoFloatParameterChangeSource__6B_;
  pFVar1 = (this->ActiveChange).Ptr;
  if (pFVar1 != (FFloatParameterProxyChange *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,1);
  }
  this->_padding_ = (longlong)&___7IToolCommandChangeSource__6B_;
  return;
}

// BeginChange @ 149692620

void __thiscall
FGizmoFloatParameterChangeSource::BeginChange(FGizmoFloatParameterChangeSource *this)

{
  float fVar1;
  FFloatParameterProxyChange *pFVar2;
  bool bVar3;
  FFloatParameterProxyChange *pFVar4;
  longlong lVar5;
  UObject *pUVar6;
  TUniquePtr<FFloatParameterProxyChange,TDefaultDelete<FFloatParameterProxyChange>_> *pTVar7;
  longlong local_18 [2];
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->Proxy).WeakPtr);
  if (!bVar3) {
    return;
  }
  pFVar4 = ::operator_new(0x18);
  if (pFVar4 != (FFloatParameterProxyChange *)0x0) {
    pFVar4->_padding_ = (longlong)&___7FFloatParameterProxyChange__6B_;
    (pFVar4->To).InitialValue = 0.0;
    (pFVar4->To).CurrentValue = 0.0;
    (pFVar4->From).InitialValue = 0.0;
    (pFVar4->From).CurrentValue = 0.0;
  }
  pTVar7 = &this->ActiveChange;
  if (pTVar7 == (TUniquePtr<FFloatParameterProxyChange,TDefaultDelete<FFloatParameterProxyChange>_>
                 *)local_18) {
    if (pFVar4 == (FFloatParameterProxyChange *)0x0) goto LAB_149692699;
    lVar5 = pFVar4->_padding_;
  }
  else {
    pFVar2 = pTVar7->Ptr;
    pTVar7->Ptr = pFVar4;
    if (pFVar2 == (FFloatParameterProxyChange *)0x0) goto LAB_149692699;
    lVar5 = pFVar2->_padding_;
    pFVar4 = pFVar2;
  }
  (**(code **)(lVar5 + 0x48))(pFVar4,1);
LAB_149692699:
  pUVar6 = FWeakObjectPtr::Get(&(this->Proxy).WeakPtr);
  pFVar4 = pTVar7->Ptr;
  fVar1 = *(float *)&pUVar6[2].field_0x8;
  (pFVar4->From).InitialValue = *(float *)&pUVar6[2].field_0x4;
  (pFVar4->From).CurrentValue = fVar1;
  return;
}

// EndChange @ 14969d9b0

TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_> __thiscall
FGizmoFloatParameterChangeSource::EndChange(FGizmoFloatParameterChangeSource *this)

{
  float fVar1;
  FFloatParameterProxyChange *pFVar2;
  bool bVar3;
  UObject *pUVar4;
  FToolCommandChange *in_RDX;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->Proxy).WeakPtr);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->Proxy).WeakPtr);
    pFVar2 = (this->ActiveChange).Ptr;
    fVar1 = *(float *)&pUVar4[2].field_0x8;
    (pFVar2->To).InitialValue = *(float *)&pUVar4[2].field_0x4;
    (pFVar2->To).CurrentValue = fVar1;
    *in_RDX = (FToolCommandChange)(this->ActiveChange).Ptr;
    (this->ActiveChange).Ptr = (FFloatParameterProxyChange *)0x0;
    return (TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_>)in_RDX;
  }
  *in_RDX = (FToolCommandChange)0x0;
  return (TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_>)in_RDX;
}

// GetChangeDescription @ 1496a0580

FText * __thiscall
FGizmoFloatParameterChangeSource::GetChangeDescription
          (FGizmoFloatParameterChangeSource *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"UIntervalGizmo",L"FFGizmoFloatParameterChangeDescription",
             L"GizmoFloatParameterChange");
  return __return_storage_ptr__;
}

// GetChangeTarget @ 1496a0640

UObject * __thiscall
FGizmoFloatParameterChangeSource::GetChangeTarget(FGizmoFloatParameterChangeSource *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->Proxy).WeakPtr);
  return pUVar1;
}

