// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// TTuple<enum_EBusSendType,FSoundSourceBusSendInfo> @ 14733dfe0

TTuple<EBusSendType,FSoundSourceBusSendInfo> * __thiscall
TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>::TTuple<enum_EBusSendType,FSoundSourceBusSendInfo>
          (void *this,TTuple<EBusSendType,FSoundSourceBusSendInfo> *param_1)

{
  UObject *pUVar1;
  
  *(undefined1 *)this = *(undefined1 *)param_1;
  *(undefined1 *)((longlong)this + 8) = param_1->field_0x8;
  pUVar1 = *(UObject **)&param_1->field_0x10;
  *(UObject **)((longlong)this + 0x10) = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar1 = *(UObject **)&param_1->field_0x18;
  *(UObject **)((longlong)this + 0x18) = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(undefined4 *)((longlong)this + 0x20) = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)((longlong)this + 0x24) = *(undefined4 *)&param_1->field_0x24;
  *(undefined4 *)((longlong)this + 0x28) = *(undefined4 *)&param_1->field_0x28;
  *(undefined4 *)((longlong)this + 0x2c) = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)((longlong)this + 0x30) = *(undefined4 *)&param_1->field_0x30;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  *(undefined8 *)((longlong)this + 0x60) = 0;
  *(undefined4 *)((longlong)this + 0x68) = 0;
  *(undefined4 *)((longlong)this + 0x6c) = 0x80;
  *(undefined4 *)((longlong)this + 0x70) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x74) = 0;
  *(undefined8 *)((longlong)this + 0x80) = 0;
  *(undefined4 *)((longlong)this + 0x88) = 0;
  *(undefined8 *)((longlong)this + 0x90) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined ***)((longlong)this + 0x38) = &___7FRealCurve__6B_;
  *(undefined4 *)((longlong)this + 0xa0) = *(undefined4 *)&param_1->field_0xa0;
  *(undefined1 *)((longlong)this + 0xa4) = param_1->field_0xa4;
  *(undefined1 *)((longlong)this + 0xa5) = param_1->field_0xa5;
  *(undefined ***)((longlong)this + 0x38) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)this + 0xa8) = 0;
  *(undefined8 *)((longlong)this + 0xa8) = *(undefined8 *)&param_1->field_0xa8;
  *(undefined8 *)&param_1->field_0xa8 = 0;
  *(undefined4 *)((longlong)this + 0xb0) = *(undefined4 *)&param_1->field_0xb0;
  *(undefined4 *)((longlong)this + 0xb4) = *(undefined4 *)&param_1->field_0xb4;
  *(undefined8 *)&param_1->field_0xb0 = 0;
  pUVar1 = *(UObject **)&param_1->field_0xb8;
  *(UObject **)((longlong)this + 0xb8) = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return this;
}

// TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_> @ 1474313c0

TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
::
TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
          (TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
           *this,TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                 *param_1)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x28 = 0;
  _Src = *(void **)&param_1->field_0x28;
  iVar1 = *(int *)&param_1->field_0x30;
  *(int *)&this->field_0x30 = iVar1;
  if (_Src == (void *)0x0) {
    _Src = &param_1->field_0x8;
  }
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0x34 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_LinkedAnimLayer_*>_>
              (8,8,iVar1,0,(ForElementType<FAnimNode_LinkedAnimLayer_*> *)&this->field_0x8,iVar1,
               (int *)&this->field_0x34);
    _Dst = *(void **)&this->field_0x28;
    if (*(void **)&this->field_0x28 == (void *)0x0) {
      _Dst = &this->field_0x8;
    }
    memcpy(_Dst,_Src,(longlong)iVar1 << 3);
  }
  return this;
}

// TTuple<FReverbSettings,FInteriorSettings> @ 14761b420

TTuple<FReverbSettings,FInteriorSettings> * __thiscall
TTuple<FReverbSettings,FInteriorSettings>::TTuple<FReverbSettings,FInteriorSettings>
          (TTuple<FReverbSettings,FInteriorSettings> *this,
          TTuple<FReverbSettings,FInteriorSettings> *param_1)

{
  UObject *pUVar1;
  undefined8 uVar2;
  
  *(undefined1 *)this = *(undefined1 *)param_1;
  pUVar1 = *(UObject **)&param_1->field_0x8;
  *(UObject **)&this->field_0x8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar1 = *(UObject **)&param_1->field_0x10;
  *(UObject **)&this->field_0x10 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(undefined4 *)&this->field_0x18 = *(undefined4 *)&param_1->field_0x18;
  *(undefined4 *)&this->field_0x1c = *(undefined4 *)&param_1->field_0x1c;
  uVar2 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&this->field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&param_1->field_0x38;
  *(undefined8 *)&this->field_0x30 = *(undefined8 *)&param_1->field_0x30;
  *(undefined8 *)&this->field_0x38 = uVar2;
  *(undefined4 *)&this->field_0x40 = *(undefined4 *)&param_1->field_0x40;
  return this;
}

