// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitPoseTrackingLiveLink
// Functions: 8

// ~ILiveLinkSource @ 14cfe4140

void __thiscall ILiveLinkSource::~ILiveLinkSource(ILiveLinkSource *this)

{
  *this = (ILiveLinkSource)&___7ILiveLinkSource__6B_;
  return;
}

// CanBeDisplayedInUI @ 14cfe54a0

bool __thiscall ILiveLinkSource::CanBeDisplayedInUI(ILiveLinkSource *this)

{
  return true;
}

// GetCustomSettingsClass @ 14cfe59e0

UClass * __thiscall ILiveLinkSource::GetCustomSettingsClass(ILiveLinkSource *this)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  UClass *pUVar5;
  undefined1 local_res8 [8];
  
  plVar4 = (longlong *)(**(code **)((longlong)*this + 0x58))(this,local_res8);
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    pUVar5 = Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (UClass *)*plVar4;
      }
    }
  }
  return (UClass *)0x0;
}

// GetSettingsClass @ 14cfe5dc0

TSubclassOf<ULiveLinkSourceSettings> __thiscall
ILiveLinkSource::GetSettingsClass(ILiveLinkSource *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkSourceSettings>)in_RDX.field0_0x0;
}

// GetSourceToolTip @ 14cfe5e90

FText * __thiscall
ILiveLinkSource::GetSourceToolTip(ILiveLinkSource *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// InitializeSettings @ 14cfe6020

void __thiscall
ILiveLinkSource::InitializeSettings(ILiveLinkSource *this,ULiveLinkSourceSettings *param_1)

{
  return;
}

// OnSettingsChanged @ 14cfe6040

void __thiscall
ILiveLinkSource::OnSettingsChanged
          (ILiveLinkSource *this,ULiveLinkSourceSettings *param_1,FPropertyChangedEvent *param_2)

{
  return;
}

// Update @ 14cfe67c0

void __thiscall ILiveLinkSource::Update(ILiveLinkSource *this)

{
  return;
}

