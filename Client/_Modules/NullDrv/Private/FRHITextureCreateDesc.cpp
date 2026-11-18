// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 2

// FRHITextureCreateDesc @ 1446c44e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHITextureCreateDesc * __thiscall
FRHITextureCreateDesc::FRHITextureCreateDesc
          (FRHITextureCreateDesc *this,FRHITextureCreateDesc *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *_Dst;
  longlong *_Src;
  
  this->_padding_ = 0;
  this->_padding_ = 1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(int *)((longlong)&this->_padding_ + 4) = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1
  ;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined4 *)&this->_padding_ = 0x101;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0xff00;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  this->_padding_ = param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 3) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 3);
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(undefined2 *)((longlong)&this->_padding_ + 4) =
       *(undefined2 *)((longlong)&param_1->_padding_ + 4);
  *(undefined2 *)((longlong)&this->_padding_ + 6) =
       *(undefined2 *)((longlong)&param_1->_padding_ + 6);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  lVar3 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar3;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  if (this != param_1) {
    iVar2 = (int)param_1->_padding_;
    _Src = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      _Src = &param_1->_padding_;
    }
    *(int *)&this->_padding_ = iVar2;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
              (1,1,iVar2,1,(ForElementType<EPixelFormat> *)&this->_padding_,iVar2,piVar1);
    if (iVar2 != 0) {
      _Dst = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        _Dst = &this->_padding_;
      }
      memcpy(_Dst,_Src,(longlong)iVar2);
    }
  }
  this->DebugName = param_1->DebugName;
  this->InitialState = param_1->InitialState;
  this->InitAction = param_1->InitAction;
  this->BulkData = param_1->BulkData;
  this->ClassName = param_1->ClassName;
  this->OwnerName = param_1->OwnerName;
  return this;
}

// Create2D @ 1446c5c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHITextureCreateDesc * __cdecl
FRHITextureCreateDesc::Create2D
          (FRHITextureCreateDesc *__return_storage_ptr__,wchar_t *param_1,int param_2,int param_3,
          EPixelFormat param_4)

{
  undefined1 auStack_c8 [32];
  int local_a8;
  int iStack_a4;
  FRHITextureCreateDesc local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98._padding_._0_4_ = param_3;
  local_98._padding_._4_4_ = param_2;
  local_98._padding_._4_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_98._padding_._3_1_ = param_4;
  local_98._padding_ = 0;
  local_98._padding_ = 1;
  local_98._padding_ = 0;
  local_98._padding_._0_4_ = 0;
  local_98._padding_._0_4_ = 0;
  local_98._padding_._4_4_ = 0x10001;
  local_98._padding_._0_2_ = 0x101;
  local_98._padding_._2_1_ = 0;
  local_98._padding_._4_2_ = 0xff00;
  local_98._padding_ = 0;
  local_98._padding_._0_4_ = 0;
  local_98._padding_._4_4_ = 1;
  local_98.InitialState = None;
  local_98.InitAction = Default;
  local_98.BulkData = (FResourceBulkDataInterface *)0x0;
  local_98.ClassName.ComparisonIndex.Value = 0;
  local_98.ClassName.Number = 0;
  local_98.OwnerName.ComparisonIndex.Value = 0;
  local_98.OwnerName.Number = 0;
  local_a8 = param_2;
  iStack_a4 = param_3;
  local_98.DebugName = param_1;
  FRHITextureCreateDesc(__return_storage_ptr__,&local_98);
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return __return_storage_ptr__;
}

