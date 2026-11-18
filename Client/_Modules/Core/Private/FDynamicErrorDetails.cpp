// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FDynamicErrorDetails @ 141583cf0

FDynamicErrorDetails * __thiscall
UE::UnifiedError::FDynamicErrorDetails::FDynamicErrorDetails
          (FDynamicErrorDetails *this,TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> param_1)

{
  IErrorDetails IVar1;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&_vftable__for__UE__UnifiedError__IErrorDetails__;
  this->_padding_ = (longlong)&_vftable__for__FRefCountBase__;
  *(undefined4 *)&this->_padding_ = 0;
  (this->InnerErrorDetails).Reference = (IErrorDetails *)0x0;
  IVar1 = *param_1.Reference;
  if (IVar1 != (IErrorDetails)0x0) {
    (this->InnerErrorDetails).Reference = (IErrorDetails *)IVar1;
    (**(code **)((longlong)*(IErrorDetails *)IVar1 + 8))(IVar1,local_res8);
  }
  if (*param_1.Reference != (IErrorDetails)0x0) {
    (**(code **)(*(longlong *)*param_1.Reference + 0x10))();
  }
  return this;
}

// ~FDynamicErrorDetails @ 1415896f0

void __thiscall
UE::UnifiedError::FDynamicErrorDetails::~FDynamicErrorDetails(FDynamicErrorDetails *this)

{
  IErrorDetails *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UE__UnifiedError__IErrorDetails__;
  this->_padding_ = (longlong)&_vftable__for__FRefCountBase__;
  pIVar1 = (this->InnerErrorDetails).Reference;
  if (pIVar1 != (IErrorDetails *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&FRefCountedErrorDetails::_vftable__for__FRefCountBase__;
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// GetErrorDetailsTypeId @ 1415c61f0

ulong64 __thiscall
UE::UnifiedError::FDynamicErrorDetails::GetErrorDetailsTypeId(FDynamicErrorDetails *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "UnifiedError::FDynamicErrorDetails";
  cVar2 = 'U';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeName @ 1415c62f0

TStringView<char> * __thiscall
UE::UnifiedError::FDynamicErrorDetails::GetErrorDetailsTypeName
          (FDynamicErrorDetails *this,TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x22;
  __return_storage_ptr__->DataPtr = "UnifiedError::FDynamicErrorDetails";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 1415c63e0

TStringView<char> * __thiscall
UE::UnifiedError::FDynamicErrorDetails::GetErrorDetailsTypeNameForLog
          (FDynamicErrorDetails *this,TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr =
       `public:_static_class_TStringView<char>___cdecl_UE::UnifiedError::FDynamicErrorDetails::StaticGetErrorDetailsTypeNameForLog(void)'
       ::__l2::Replaced;
  sVar1 = strlen(`public:_static_class_TStringView<char>___cdecl_UE::UnifiedError::FDynamicErrorDetails::StaticGetErrorDetailsTypeNameForLog(void)'
                 ::__l2::Replaced);
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// GetErrorFormatString @ 1415c65b0

FText * __thiscall
UE::UnifiedError::FDynamicErrorDetails::GetErrorFormatString
          (FDynamicErrorDetails *this,FText *__return_storage_ptr__,FError *param_1)

{
  IErrorDetails *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  
  if ((this->InnerErrorDetails).Reference == (IErrorDetails *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerErrorDetails",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Experimental\\UnifiedError\\UnifiedError.cpp"
                       ,0x11b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->InnerErrorDetails).Reference;
  (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetInnerErrorDetails @ 1415c7270

TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> __thiscall
UE::UnifiedError::FDynamicErrorDetails::GetInnerErrorDetails(FDynamicErrorDetails *this)

{
  IErrorDetails IVar1;
  IErrorDetails *in_RDX;
  undefined1 local_res8 [32];
  
  *in_RDX = (IErrorDetails)0x0;
  IVar1 = (IErrorDetails)(this->InnerErrorDetails).Reference;
  *in_RDX = IVar1;
  if (IVar1 != (IErrorDetails)0x0) {
    (**(code **)(*(longlong *)IVar1 + 8))(IVar1,local_res8);
  }
  return (TRefCountPtr<UE::UnifiedError::IErrorDetails_const_>)in_RDX;
}

// SetInnerErrorDetails @ 1415f24d0

void __thiscall
UE::UnifiedError::FDynamicErrorDetails::SetInnerErrorDetails
          (FDynamicErrorDetails *this,TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> param_1)

{
  IErrorDetails IVar1;
  IErrorDetails IVar2;
  undefined1 local_res8 [8];
  
  IVar1 = *param_1.Reference;
  IVar2 = (IErrorDetails)(this->InnerErrorDetails).Reference;
  if (IVar2 != IVar1) {
    (this->InnerErrorDetails).Reference = (IErrorDetails *)IVar1;
    if (IVar1 != (IErrorDetails)0x0) {
      (**(code **)((longlong)*(IErrorDetails *)IVar1 + 8))(IVar1,local_res8);
    }
    if (IVar2 != (IErrorDetails)0x0) {
      (**(code **)((longlong)*(IErrorDetails *)IVar2 + 0x10))(IVar2);
    }
  }
  if (*param_1.Reference != (IErrorDetails)0x0) {
    (**(code **)(*(longlong *)*param_1.Reference + 0x10))();
  }
  return;
}

// ShouldInclude @ 1415f3d50

bool __thiscall
UE::UnifiedError::FDynamicErrorDetails::ShouldInclude
          (FDynamicErrorDetails *this,EDetailFilter param_1)

{
  return (param_1 & ~IncludeInAnalytics) != None;
}

