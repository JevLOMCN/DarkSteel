// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 6

// Disable @ 142d44360

void __thiscall FMessageSubscription::Disable(FMessageSubscription *this)

{
  this->Enabled = false;
  return;
}

// Enable @ 142d44fc0

void __thiscall FMessageSubscription::Enable(FMessageSubscription *this)

{
  this->Enabled = true;
  return;
}

// GetMessageTypePathName @ 142d477f0

FTopLevelAssetPath * __thiscall
FMessageSubscription::GetMessageTypePathName
          (FMessageSubscription *this,FTopLevelAssetPath *__return_storage_ptr__)

{
  FName FVar1;
  
  FVar1 = (this->MessageType).AssetName;
  __return_storage_ptr__->PackageName = (this->MessageType).PackageName;
  __return_storage_ptr__->AssetName = FVar1;
  return __return_storage_ptr__;
}

// GetScopeRange @ 142d47b00

TRange<EMessageScope> * __thiscall FMessageSubscription::GetScopeRange(FMessageSubscription *this)

{
  return &this->ScopeRange;
}

// GetSubscriber @ 142d47e50

TWeakPtr<IMessageReceiver,1> * __thiscall
FMessageSubscription::GetSubscriber(FMessageSubscription *this)

{
  return &this->Subscriber;
}

// IsEnabled @ 142d4a5b0

bool __thiscall FMessageSubscription::IsEnabled(FMessageSubscription *this)

{
  return this->Enabled;
}

