// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 4

// ~FWmfMediaReadState @ 14ea97820

void __thiscall FWmfMediaReadState::~FWmfMediaReadState(FWmfMediaReadState *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7FWmfMediaReadState__6B_;
  if (this->RefCount != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RefCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaReadState.h"
                       ,0x80,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// AddRef @ 14ea9b3b0

ulong __thiscall FWmfMediaReadState::AddRef(FWmfMediaReadState *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

// QueryInterface @ 14eab9270

HRESULT __thiscall
FWmfMediaReadState::QueryInterface(FWmfMediaReadState *this,_GUID *param_1,void **param_2)

{
  HRESULT HVar1;
  
  HVar1 = QISearch(this,(LPCQITAB)
                        `public:_virtual_long___cdecl_FWmfMediaReadState::QueryInterface(_GUID_const&___ptr64,void*___ptr64*___ptr64)___ptr64'
                        ::__l2::QITab,(IID *)param_1,param_2);
  return HVar1;
}

// Release @ 14eab9a70

ulong __thiscall FWmfMediaReadState::Release(FWmfMediaReadState *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 - 1U == 0) && (this != (FWmfMediaReadState *)0x0)) {
    (**(code **)(this->_padding_ + 0x18))(this,1);
  }
  return iVar2 - 1U;
}

