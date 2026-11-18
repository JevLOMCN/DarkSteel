// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 16

// ~IPCGAttributeAccessorKeys @ 1497e2b80

void __thiscall
IPCGAttributeAccessorKeys::~IPCGAttributeAccessorKeys(IPCGAttributeAccessorKeys *this)

{
  return;
}

// GetGenericObjectKeys @ 149815060

bool __thiscall
IPCGAttributeAccessorKeys::GetGenericObjectKeys
          (IPCGAttributeAccessorKeys *this,int param_1,TArrayView<void_*,int> *param_2)

{
  return false;
}

// GetGenericObjectKeys @ 149815070

bool __thiscall
IPCGAttributeAccessorKeys::GetGenericObjectKeys
          (IPCGAttributeAccessorKeys *this,int param_1,TArrayView<void_const_*,int> *param_2)

{
  return false;
}

// GetKeyIndices @ 1498157d0

bool __thiscall
IPCGAttributeAccessorKeys::GetKeyIndices
          (IPCGAttributeAccessorKeys *this,int param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool *param_4)

{
  return false;
}

// GetMetadataEntryKeys @ 1498163f0

bool __thiscall
IPCGAttributeAccessorKeys::GetMetadataEntryKeys
          (IPCGAttributeAccessorKeys *this,int param_1,TArrayView<__int64_*,int> *param_2)

{
  return false;
}

// GetMetadataEntryKeys @ 149816400

bool __thiscall
IPCGAttributeAccessorKeys::GetMetadataEntryKeys
          (IPCGAttributeAccessorKeys *this,int param_1,TArrayView<__int64_const_*,int> *param_2)

{
  return false;
}

// GetPointKeys @ 1498170a0

bool __thiscall
IPCGAttributeAccessorKeys::GetPointKeys
          (IPCGAttributeAccessorKeys *this,int param_1,TArrayView<FPCGPoint_*,int> *param_2)

{
  return false;
}

// GetPointKeys @ 1498170b0

bool __thiscall
IPCGAttributeAccessorKeys::GetPointKeys
          (IPCGAttributeAccessorKeys *this,int param_1,TArrayView<FPCGPoint_const_*,int> *param_2)

{
  return false;
}

// IsClassSupported @ 14981fcd0

bool __thiscall
IPCGAttributeAccessorKeys::IsClassSupported(IPCGAttributeAccessorKeys *this,UStruct *param_1)

{
  return false;
}

// GetKeys<void> @ 149862780

bool __thiscall
IPCGAttributeAccessorKeys::GetKeys<void>
          (IPCGAttributeAccessorKeys *this,int param_1,TArrayView<void_*,int> *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_IPCGAttributeAccessorKeys::GetKeys<void>(int,TArrayView<void*___ptr64,int>)___ptr64'
                ::__l2::__CpuProfilerEventSpecId487,"IPCGAttributeAccessorKeys::GetKeys",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessorKeys.h"
               ,0x1e7);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_IPCGAttributeAccessorKeys::GetKeys<void>(int,TArrayView<void*___ptr64,int>)___ptr64'
               ::__l2::__CpuProfilerEventSpecId487);
  }
  if (this->bIsReadOnly == false) {
    local_18 = *(undefined4 *)&param_2->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_10 = param_2->ArrayNum;
    uStack_c = *(undefined4 *)&param_2->field_0xc;
    uVar1 = (**(code **)(this->_padding_ + 0x38))(this,param_1,&local_18);
  }
  else {
    uVar1 = 0;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)uVar1;
}

// GetKeys<void> @ 149862830

bool __thiscall
IPCGAttributeAccessorKeys::GetKeys<void>
          (IPCGAttributeAccessorKeys *this,int param_1,TArrayView<void_const_*,int> *param_2)

{
  undefined1 uVar1;
  undefined4 in_register_00000014;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (CpuChannel->Enabled < 0) {
    local_18 = *(undefined4 *)&param_2->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_10 = param_2->ArrayNum;
    uStack_c = *(undefined4 *)&param_2->field_0xc;
    uVar1 = (**(code **)(this->_padding_ + 0x30))
                      (local_18,CONCAT44(in_register_00000014,param_1),&local_18);
    return (bool)uVar1;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&`public:_bool___cdecl_IPCGAttributeAccessorKeys::GetKeys<void>(int,TArrayView<void_const*___ptr64,int>)const___ptr64'
              ::__l2::__CpuProfilerEventSpecId515,"IPCGAttributeAccessorKeys::GetKeys",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessorKeys.h"
             ,0x203);
  FCpuProfilerTrace::OutputBeginEvent
            (`public:_bool___cdecl_IPCGAttributeAccessorKeys::GetKeys<void>(int,TArrayView<void_const*___ptr64,int>)const___ptr64'
             ::__l2::__CpuProfilerEventSpecId515);
  local_18 = *(undefined4 *)&param_2->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_10 = param_2->ArrayNum;
  uStack_c = *(undefined4 *)&param_2->field_0xc;
  uVar1 = (**(code **)(this->_padding_ + 0x30))(this,param_1,&local_18);
  FCpuProfilerTrace::OutputEndEvent();
  return (bool)uVar1;
}

// GetKeys<__int64> @ 149d2bd40

bool __thiscall
IPCGAttributeAccessorKeys::GetKeys<__int64>
          (IPCGAttributeAccessorKeys *this,int param_1,TArrayView<__int64_*,int> *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_IPCGAttributeAccessorKeys::GetKeys<__int64>(int,TArrayView<__int64*___ptr64,int>)___ptr64'
                ::__l2::__CpuProfilerEventSpecId487,"IPCGAttributeAccessorKeys::GetKeys",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessorKeys.h"
               ,0x1e7);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_IPCGAttributeAccessorKeys::GetKeys<__int64>(int,TArrayView<__int64*___ptr64,int>)___ptr64'
               ::__l2::__CpuProfilerEventSpecId487);
  }
  if (this->bIsReadOnly == false) {
    local_18 = *(undefined4 *)&param_2->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_10 = param_2->ArrayNum;
    uStack_c = *(undefined4 *)&param_2->field_0xc;
    uVar1 = (**(code **)(this->_padding_ + 0x48))(this,param_1,&local_18);
  }
  else {
    uVar1 = 0;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)uVar1;
}

// GetKeys<__int64> @ 149d2bdf0

bool __thiscall
IPCGAttributeAccessorKeys::GetKeys<__int64>
          (IPCGAttributeAccessorKeys *this,int param_1,TArrayView<__int64_const_*,int> *param_2)

{
  undefined1 uVar1;
  undefined4 in_register_00000014;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (CpuChannel->Enabled < 0) {
    local_18 = *(undefined4 *)&param_2->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_10 = param_2->ArrayNum;
    uStack_c = *(undefined4 *)&param_2->field_0xc;
    uVar1 = (**(code **)(this->_padding_ + 0x40))
                      (local_18,CONCAT44(in_register_00000014,param_1),&local_18);
    return (bool)uVar1;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&`public:_bool___cdecl_IPCGAttributeAccessorKeys::GetKeys<__int64>(int,TArrayView<__int64_const*___ptr64,int>)const___ptr64'
              ::__l2::__CpuProfilerEventSpecId515,"IPCGAttributeAccessorKeys::GetKeys",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessorKeys.h"
             ,0x203);
  FCpuProfilerTrace::OutputBeginEvent
            (`public:_bool___cdecl_IPCGAttributeAccessorKeys::GetKeys<__int64>(int,TArrayView<__int64_const*___ptr64,int>)const___ptr64'
             ::__l2::__CpuProfilerEventSpecId515);
  local_18 = *(undefined4 *)&param_2->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_10 = param_2->ArrayNum;
  uStack_c = *(undefined4 *)&param_2->field_0xc;
  uVar1 = (**(code **)(this->_padding_ + 0x40))(this,param_1,&local_18);
  FCpuProfilerTrace::OutputEndEvent();
  return (bool)uVar1;
}

// GetKey<__int64> @ 149ded4e0

bool __thiscall
IPCGAttributeAccessorKeys::GetKey<__int64>(IPCGAttributeAccessorKeys *this,long64 **param_1)

{
  undefined1 uVar1;
  bool bVar2;
  long64 **local_18;
  undefined4 uStack_10;
  
  uStack_10 = 1;
  bVar2 = -1 < CpuChannel->Enabled;
  local_18 = param_1;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_IPCGAttributeAccessorKeys::GetKeys<__int64>(int,TArrayView<__int64*___ptr64,int>)___ptr64'
                ::__l2::__CpuProfilerEventSpecId487,"IPCGAttributeAccessorKeys::GetKeys",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessorKeys.h"
               ,0x1e7);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_IPCGAttributeAccessorKeys::GetKeys<__int64>(int,TArrayView<__int64*___ptr64,int>)___ptr64'
               ::__l2::__CpuProfilerEventSpecId487);
  }
  if (this->bIsReadOnly == false) {
    uVar1 = (**(code **)(this->_padding_ + 0x48))(this,0,&local_18);
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return (bool)uVar1;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return false;
}

// GetKeys<FPCGPoint> @ 149f28d10

bool __thiscall
IPCGAttributeAccessorKeys::GetKeys<FPCGPoint>
          (IPCGAttributeAccessorKeys *this,int param_1,TArrayView<FPCGPoint_*,int> *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_IPCGAttributeAccessorKeys::GetKeys<FPCGPoint>(int,TArrayView<FPCGPoint*___ptr64,int>)___ptr64'
                ::__l2::__CpuProfilerEventSpecId487,"IPCGAttributeAccessorKeys::GetKeys",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessorKeys.h"
               ,0x1e7);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_IPCGAttributeAccessorKeys::GetKeys<FPCGPoint>(int,TArrayView<FPCGPoint*___ptr64,int>)___ptr64'
               ::__l2::__CpuProfilerEventSpecId487);
  }
  if (this->bIsReadOnly == false) {
    local_18 = *(undefined4 *)&param_2->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_10 = param_2->ArrayNum;
    uStack_c = *(undefined4 *)&param_2->field_0xc;
    uVar1 = (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_18);
  }
  else {
    uVar1 = 0;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)uVar1;
}

// GetKeys<FPCGPoint> @ 149f28dc0

bool __thiscall
IPCGAttributeAccessorKeys::GetKeys<FPCGPoint>
          (IPCGAttributeAccessorKeys *this,int param_1,TArrayView<FPCGPoint_const_*,int> *param_2)

{
  undefined1 uVar1;
  undefined4 in_register_00000014;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (CpuChannel->Enabled < 0) {
    local_18 = *(undefined4 *)&param_2->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_10 = param_2->ArrayNum;
    uStack_c = *(undefined4 *)&param_2->field_0xc;
    uVar1 = (**(code **)(this->_padding_ + 0x20))
                      (local_18,CONCAT44(in_register_00000014,param_1),&local_18);
    return (bool)uVar1;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&`public:_bool___cdecl_IPCGAttributeAccessorKeys::GetKeys<FPCGPoint>(int,TArrayView<FPCGPoint_const*___ptr64,int>)const___ptr64'
              ::__l2::__CpuProfilerEventSpecId515,"IPCGAttributeAccessorKeys::GetKeys",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGAttributeAccessorKeys.h"
             ,0x203);
  FCpuProfilerTrace::OutputBeginEvent
            (`public:_bool___cdecl_IPCGAttributeAccessorKeys::GetKeys<FPCGPoint>(int,TArrayView<FPCGPoint_const*___ptr64,int>)const___ptr64'
             ::__l2::__CpuProfilerEventSpecId515);
  local_18 = *(undefined4 *)&param_2->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_10 = param_2->ArrayNum;
  uStack_c = *(undefined4 *)&param_2->field_0xc;
  uVar1 = (**(code **)(this->_padding_ + 0x20))(this,param_1,&local_18);
  FCpuProfilerTrace::OutputEndEvent();
  return (bool)uVar1;
}

