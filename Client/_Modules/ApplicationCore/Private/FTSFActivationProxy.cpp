// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 9

// ~FTSFActivationProxy @ 1423c6c80

void __thiscall FTSFActivationProxy::~FTSFActivationProxy(FTSFActivationProxy *this)

{
  this->_padding_ = (longlong)&_vftable__for__ITfInputProcessorProfileActivationSink__;
  this->_padding_ = (longlong)&_vftable__for__ITfActiveLanguageProfileNotifySink__;
  return;
}

// AddRef @ 1423d0140

ulong __thiscall FTSFActivationProxy::AddRef(FTSFActivationProxy *this)

{
  this->ReferenceCount = this->ReferenceCount + 1;
  return this->ReferenceCount;
}

// AddRef`adjustor{8}' @ 1423d0150

/* [thunk]:public: virtual unsigned long __cdecl FTSFActivationProxy::AddRef`adjustor{8}' (void)
   __ptr64 */

ulong __thiscall FTSFActivationProxy::AddRef_adjustor_8__(FTSFActivationProxy *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FTSFActivationProxy *)&this[-1].ReferenceCount);
  return uVar1;
}

// OnActivated @ 1423f0110

undefined4 __thiscall
FTSFActivationProxy::OnActivated
          (FTSFActivationProxy *this,_GUID *param_1,_GUID *param_2,int param_3)

{
  FWindowsTextInputMethodSystem::OnIMEActivationStateChanged
            (*(FWindowsTextInputMethodSystem **)&this->TSFProfileCookie,param_3 == 1);
  return 0;
}

// OnActivated @ 1423f0140

undefined4 __thiscall
FTSFActivationProxy::OnActivated
          (FTSFActivationProxy *this,ulong param_1,ushort param_2,_GUID *param_3,_GUID *param_4,
          _GUID *param_5,HKL__ *param_6,ulong param_7)

{
  FWindowsTextInputMethodSystem::OnIMEActivationStateChanged(this->Owner,(bool)((byte)param_7 & 1));
  return 0;
}

// QueryInterface @ 1423fd060

undefined4 __thiscall
FTSFActivationProxy::QueryInterface(FTSFActivationProxy *this,_GUID *param_1,void **param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  FTSFActivationProxy *pFVar5;
  
  *param_2 = (void *)0x0;
  lVar1._0_4_ = param_1->Data1;
  lVar1._4_2_ = param_1->Data2;
  lVar1._6_2_ = param_1->Data3;
  pFVar5 = this;
  if (((lVar1 != IID_IUnknown._0_8_) || (*&param_1->Data4 != IID_IUnknown.Data4)) &&
     ((lVar2._0_4_ = param_1->Data1, lVar2._4_2_ = param_1->Data2, lVar2._6_2_ = param_1->Data3,
      lVar2 != IID_ITfInputProcessorProfileActivationSink._0_8_ ||
      (*&param_1->Data4 != IID_ITfInputProcessorProfileActivationSink.Data4)))) {
    lVar3._0_4_ = param_1->Data1;
    lVar3._4_2_ = param_1->Data2;
    lVar3._6_2_ = param_1->Data3;
    if ((lVar3 != IID_ITfActiveLanguageProfileNotifySink._0_8_) ||
       (*&param_1->Data4 != IID_ITfActiveLanguageProfileNotifySink.Data4)) goto LAB_1423fd0de;
    pFVar5 = (FTSFActivationProxy *)&this->_padding_;
    if (this == (FTSFActivationProxy *)0x0) {
      pFVar5 = (FTSFActivationProxy *)0x0;
    }
  }
  *param_2 = pFVar5;
  if (pFVar5 != (FTSFActivationProxy *)0x0) {
    (**(code **)(this->_padding_ + 8))(this,param_2);
  }
LAB_1423fd0de:
  uVar4 = 0x80004002;
  if (*param_2 != (void *)0x0) {
    uVar4 = 0;
  }
  return uVar4;
}

// QueryInterface`adjustor{8}' @ 1423fd0fc

/* [thunk]:public: virtual long __cdecl FTSFActivationProxy::QueryInterface`adjustor{8}' (struct
   _GUID const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FTSFActivationProxy::QueryInterface_adjustor_8__
          (FTSFActivationProxy *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FTSFActivationProxy *)&this[-1].ReferenceCount,(_GUID *)param_1,param_2);
  return lVar1;
}

// Release @ 142400020

ulong __thiscall FTSFActivationProxy::Release(FTSFActivationProxy *this)

{
  ulong uVar1;
  
  uVar1 = this->ReferenceCount - 1;
  this->ReferenceCount = uVar1;
  if (uVar1 == 0) {
    (**(code **)(this->_padding_ + 0x20))(this,1);
  }
  return uVar1;
}

// Release`adjustor{8}' @ 142400050

/* [thunk]:public: virtual unsigned long __cdecl FTSFActivationProxy::Release`adjustor{8}' (void)
   __ptr64 */

ulong __thiscall FTSFActivationProxy::Release_adjustor_8__(FTSFActivationProxy *this)

{
  ulong uVar1;
  
  uVar1 = Release((FTSFActivationProxy *)&this[-1].ReferenceCount);
  return uVar1;
}

