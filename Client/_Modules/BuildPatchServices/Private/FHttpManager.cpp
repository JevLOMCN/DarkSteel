// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// FHttpManager @ 143223380

FHttpManager * __thiscall BuildPatchServices::FHttpManager::FHttpManager(FHttpManager *this)

{
  FHttpModule *pFVar1;
  
  this->_padding_ = (longlong)&___7FHttpManager_BuildPatchServices__6B_;
  pFVar1 = FHttpModule::Get();
  this->HttpModule = pFVar1;
  return this;
}

// ~FHttpManager @ 143228790

void __thiscall BuildPatchServices::FHttpManager::~FHttpManager(FHttpManager *this)

{
  this->_padding_ = (longlong)&___7IHttpManager_BuildPatchServices__6B_;
  return;
}

// CreateRequest @ 143248a30

TSharedRef<IHttpRequest,1> * __thiscall
BuildPatchServices::FHttpManager::CreateRequest
          (FHttpManager *this,TSharedRef<IHttpRequest,1> *__return_storage_ptr__)

{
  (**(code **)(this->HttpModule->_padding_ + 0x40))();
  return __return_storage_ptr__;
}

