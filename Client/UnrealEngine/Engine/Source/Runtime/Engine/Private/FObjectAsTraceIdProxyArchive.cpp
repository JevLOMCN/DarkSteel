// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FObjectAsTraceIdProxyArchive @ 148089f10

FObjectAsTraceIdProxyArchive * __thiscall
FObjectAsTraceIdProxyArchive::FObjectAsTraceIdProxyArchive
          (FObjectAsTraceIdProxyArchive *this,FArchive *param_1)

{
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)this,param_1);
  *(undefined ***)this = &___7FObjectAsTraceIdProxyArchive__6B_;
  return this;
}

// ~FObjectAsTraceIdProxyArchive @ 14808eca0

void __thiscall
FObjectAsTraceIdProxyArchive::~FObjectAsTraceIdProxyArchive(FObjectAsTraceIdProxyArchive *this)

{
  *(undefined ***)this = &___7FObjectAsTraceIdProxyArchive__6B_;
  FNameAsStringProxyArchive::~FNameAsStringProxyArchive((FNameAsStringProxyArchive *)this);
  return;
}

// operator<< @ 148090780

FArchive * __thiscall
FObjectAsTraceIdProxyArchive::operator<<(FObjectAsTraceIdProxyArchive *this,UObject **param_1)

{
  int iVar1;
  UStruct *pUVar2;
  UClass *pUVar3;
  FArchive *this_00;
  ulong64 local_res8;
  
  if ((this->field_0x28 & 1) == 0) {
    pUVar2 = (UStruct *)*param_1;
    if (pUVar2 == (UStruct *)0x0) {
      this_00 = *(FArchive **)&this->field_0x90;
      local_res8 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        FObjectTrace::OutputType(pUVar2);
      }
      FObjectTrace::OutputObject((UObject *)pUVar2);
      local_res8 = FObjectTrace::GetObjectId((UObject *)pUVar2);
      this_00 = *(FArchive **)&this->field_0x90;
    }
    if (**(longlong **)&this_00->field_0x8 + 8U <= (ulonglong)(*(longlong **)&this_00->field_0x8)[1]
       ) {
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
      return (FArchive *)this;
    }
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_res8,8);
      return (FArchive *)this;
    }
    FArchive::SerializeByteOrderSwapped(this_00,&local_res8);
  }
  return (FArchive *)this;
}

// operator<< @ 148090870

FArchive * __thiscall
FObjectAsTraceIdProxyArchive::operator<<(FObjectAsTraceIdProxyArchive *this,FObjectPtr *param_1)

{
  FObjectPtr_u_0 FVar1;
  FObjectPtr_u_0 FStackX_8;
  
  FStackX_8.Handle = (UObject *)0xfffffefbf1234567;
  if ((this->field_0x28 & 1) == 0) {
    FStackX_8 = (FObjectPtr_u_0)(param_1->field0_0x0).Handle;
  }
  (**(code **)(*(longlong *)this + 0x168))(this,&FStackX_8);
  FVar1 = FStackX_8;
  if ((((this->field_0x28 & 1) != 0) || ((this->field_0x2b & 2) != 0)) &&
     (FStackX_8.Handle != (UObject *)0xfffffefbf1234567)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FStackX_8.Handle != (UObject *)0x0)
       ) {
      UE::GC::MarkAsReachable(FStackX_8.Handle);
    }
    (param_1->field0_0x0).Handle = (UObject *)FVar1;
  }
  return (FArchive *)this;
}

// operator<< @ 148090880

FArchive * __thiscall
FObjectAsTraceIdProxyArchive::operator<<
          (FObjectAsTraceIdProxyArchive *this,FSoftObjectPath *param_1)

{
  FSoftObjectPath::SerializePath(param_1,(FArchive *)this);
  return (FArchive *)this;
}

// operator<< @ 1480908b0

FArchive * __thiscall
FObjectAsTraceIdProxyArchive::operator<<(FObjectAsTraceIdProxyArchive *this,FSoftObjectPtr *param_1)

{
  if ((this->field_0x28 & 1) != 0) {
    *(undefined8 *)param_1 = 0;
  }
  (**(code **)(*(longlong *)this + 0x140))(this,&param_1->field_0x8);
  return (FArchive *)this;
}

// operator<< @ 1480908e0

FArchive * __thiscall
FObjectAsTraceIdProxyArchive::operator<<(FObjectAsTraceIdProxyArchive *this,FWeakObjectPtr *param_1)

{
  UObject *pUStackX_8;
  UObject *apUStackX_18 [2];
  
  if ((this->field_0x2b & 3) != 1) {
    pUStackX_8 = FWeakObjectPtr::Get(param_1,true);
    (**(code **)(*(longlong *)this + 0x168))(this,&pUStackX_8);
    if (((this->field_0x28 & 1) != 0) || ((this->field_0x2b & 2) != 0)) {
      apUStackX_18[0] = pUStackX_8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUStackX_8);
      }
      FWeakObjectPtr::operator=(param_1,(FObjectPtr)apUStackX_18);
    }
  }
  return (FArchive *)this;
}

// Write @ 1480e3610

void __thiscall
FObjectAsTraceIdProxyArchive::Write(FObjectAsTraceIdProxyArchive *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FArchive *this_00;
  ulong64 local_res10 [3];
  
  if (param_1 == (UObject *)0x0) {
    this_00 = *(FArchive **)&this->field_0x90;
    local_res10[0] = 0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      FObjectTrace::OutputType((UStruct *)param_1);
    }
    FObjectTrace::OutputObject(param_1);
    local_res10[0] = FObjectTrace::GetObjectId(param_1);
    this_00 = *(FArchive **)&this->field_0x90;
  }
  if (**(longlong **)&this_00->field_0x8 + 8U <= (ulonglong)(*(longlong **)&this_00->field_0x8)[1])
  {
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res10,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,local_res10);
  return;
}

