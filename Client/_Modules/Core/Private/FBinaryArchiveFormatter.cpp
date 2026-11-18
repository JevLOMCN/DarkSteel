// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 51

// EnterArray @ 1416eca50

void __thiscall FBinaryArchiveFormatter::EnterArray(FBinaryArchiveFormatter *this,int *param_1)

{
  FArchive *this_00;
  int *piVar1;
  
  this_00 = this->Inner;
  piVar1 = (int *)**(undefined8 **)&this_00->field_0x8;
  if (piVar1 + 1 <= (int *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *param_1 = *piVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001416eca86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,(uint *)param_1);
  return;
}

// Serialize @ 14170ff20

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,int *param_1)

{
  FArchive *this_00;
  int *piVar1;
  
  this_00 = this->Inner;
  piVar1 = (int *)**(undefined8 **)&this_00->field_0x8;
  if (piVar1 + 1 <= (int *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *param_1 = *piVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014170ff56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,(uint *)param_1);
  return;
}

// Serialize @ 14170ff70

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,FString *param_1)

{
  ::operator<<(this->Inner,param_1);
  return;
}

// Serialize @ 14170ff80

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,bool *param_1)

{
  FArchiveState *this_00;
  int *piVar1;
  uint local_res8 [2];
  
  this_00 = (FArchiveState *)this->Inner;
  piVar1 = (int *)this_00->ActiveFPLB->StartFastPathLoadBuffer;
  if (piVar1 + 1 <= this_00->ActiveFPLB->EndFastPathLoadBuffer) {
    *param_1 = *piVar1 != 0;
    this_00->ActiveFPLB->StartFastPathLoadBuffer = this_00->ActiveFPLB->StartFastPathLoadBuffer + 4;
    return;
  }
  local_res8[0] = 0;
  if (this_00->ArIsLoading == 0) {
    local_res8[0] = (uint)(*param_1 != false);
  }
  (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res8,4);
  if (1 < local_res8[0]) {
    FArchiveState::SetError(this_00);
  }
  if (this_00->ArIsLoading != 0) {
    *param_1 = local_res8[0] != 0;
  }
  return;
}

// Serialize @ 141779140

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,schar *param_1)

{
  FArchive *pFVar1;
  schar *psVar2;
  
  pFVar1 = this->Inner;
  psVar2 = (schar *)**(undefined8 **)&pFVar1->field_0x8;
  if (psVar2 + 1 <= (schar *)(*(undefined8 **)&pFVar1->field_0x8)[1]) {
    *param_1 = *psVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014177916f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,param_1,1);
  return;
}

// Serialize @ 141779180

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,uchar *param_1)

{
  FArchive *pFVar1;
  uchar *puVar2;
  
  pFVar1 = this->Inner;
  puVar2 = (uchar *)**(undefined8 **)&pFVar1->field_0x8;
  if (puVar2 + 1 <= (uchar *)(*(undefined8 **)&pFVar1->field_0x8)[1]) {
    *param_1 = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001417791af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,param_1,1);
  return;
}

// Serialize @ 1417791c0

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,uint *param_1)

{
  FArchive *this_00;
  uint *puVar1;
  
  this_00 = this->Inner;
  puVar1 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if (puVar1 + 1 <= (uint *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *param_1 = *puVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001417791f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,param_1);
  return;
}

// Serialize @ 141779210

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,float *param_1)

{
  FArchive *this_00;
  float *pfVar1;
  
  this_00 = this->Inner;
  pfVar1 = (float *)**(undefined8 **)&this_00->field_0x8;
  if (pfVar1 + 1 <= (float *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *param_1 = *pfVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141779246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,(uint *)param_1);
  return;
}

// Serialize @ 141779260

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,double *param_1)

{
  FArchive *this_00;
  double *pdVar1;
  
  this_00 = this->Inner;
  pdVar1 = (double *)**(longlong **)&this_00->field_0x8;
  if (pdVar1 + 1 <= (double *)(*(longlong **)&this_00->field_0x8)[1]) {
    *param_1 = *pdVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141779297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_1,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,(ulong64 *)param_1);
  return;
}

// Serialize @ 1417792b0

void __thiscall
FBinaryArchiveFormatter::Serialize
          (FBinaryArchiveFormatter *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(this->Inner,param_1);
  return;
}

// Serialize @ 1417792c0

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,FName *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001417792c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->Inner + 0x178))();
  return;
}

// Serialize @ 1417792e0

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,FText *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001417792e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->Inner + 0x170))();
  return;
}

// Serialize @ 141779300

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,long64 *param_1)

{
  FArchive *this_00;
  long64 *plVar1;
  
  this_00 = this->Inner;
  plVar1 = (long64 *)**(longlong **)&this_00->field_0x8;
  if (plVar1 + 1 <= (long64 *)(*(longlong **)&this_00->field_0x8)[1]) {
    *param_1 = *plVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141779337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_1,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,(ulong64 *)param_1);
  return;
}

// Serialize @ 141779350

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,ulong64 *param_1)

{
  FArchive *this_00;
  ulong64 *puVar1;
  
  this_00 = this->Inner;
  puVar1 = (ulong64 *)**(longlong **)&this_00->field_0x8;
  if (puVar1 + 1 <= (ulong64 *)(*(longlong **)&this_00->field_0x8)[1]) {
    *param_1 = *puVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141779387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_1,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,param_1);
  return;
}

// Serialize @ 1418f49a0

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,ushort *param_1)

{
  FArchive *this_00;
  ushort *puVar1;
  
  this_00 = this->Inner;
  puVar1 = (ushort *)**(undefined8 **)&this_00->field_0x8;
  if (puVar1 + 1 <= (ushort *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *param_1 = *puVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 2;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418f49d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_1,2);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,param_1);
  return;
}

// FBinaryArchiveFormatter @ 1419cc700

FBinaryArchiveFormatter * __thiscall
FBinaryArchiveFormatter::FBinaryArchiveFormatter(FBinaryArchiveFormatter *this,FArchive *param_1)

{
  this->Inner = param_1;
  this->_padding_ = (longlong)&___7FBinaryArchiveFormatter__6B_;
  return this;
}

// ~FBinaryArchiveFormatter @ 1419d1f40

void __thiscall FBinaryArchiveFormatter::~FBinaryArchiveFormatter(FBinaryArchiveFormatter *this)

{
  this->_padding_ = (longlong)&___7FStructuredArchiveFormatter__6B_;
  return;
}

// EnterArrayElement @ 1419f66c0

void __thiscall FBinaryArchiveFormatter::EnterArrayElement(FBinaryArchiveFormatter *this)

{
  return;
}

// EnterAttribute @ 1419f66d0

void __thiscall
FBinaryArchiveFormatter::EnterAttribute(FBinaryArchiveFormatter *this,FArchiveFieldName param_1)

{
  return;
}

// EnterAttributedValue @ 1419f66e0

void __thiscall FBinaryArchiveFormatter::EnterAttributedValue(FBinaryArchiveFormatter *this)

{
  return;
}

// EnterAttributedValueValue @ 1419f66f0

void __thiscall FBinaryArchiveFormatter::EnterAttributedValueValue(FBinaryArchiveFormatter *this)

{
  return;
}

// EnterField @ 1419f6700

void __thiscall
FBinaryArchiveFormatter::EnterField(FBinaryArchiveFormatter *this,FArchiveFieldName param_1)

{
  return;
}

// EnterMap @ 1419f6710

void __thiscall FBinaryArchiveFormatter::EnterMap(FBinaryArchiveFormatter *this,int *param_1)

{
  FArchive *this_00;
  int *piVar1;
  
  this_00 = this->Inner;
  piVar1 = (int *)**(undefined8 **)&this_00->field_0x8;
  if (piVar1 + 1 <= (int *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *param_1 = *piVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001419f6746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,(uint *)param_1);
  return;
}

// EnterMapElement @ 1419f6760

void __thiscall
FBinaryArchiveFormatter::EnterMapElement(FBinaryArchiveFormatter *this,FString *param_1)

{
  ::operator<<(this->Inner,param_1);
  return;
}

// EnterRecord @ 1419f6770

void __thiscall FBinaryArchiveFormatter::EnterRecord(FBinaryArchiveFormatter *this)

{
  return;
}

// EnterStream @ 1419f6780

void __thiscall FBinaryArchiveFormatter::EnterStream(FBinaryArchiveFormatter *this)

{
  return;
}

// EnterStreamElement @ 1419f6790

void __thiscall FBinaryArchiveFormatter::EnterStreamElement(FBinaryArchiveFormatter *this)

{
  return;
}

// GetUnderlyingArchive @ 141a04770

FArchive * __thiscall FBinaryArchiveFormatter::GetUnderlyingArchive(FBinaryArchiveFormatter *this)

{
  return this->Inner;
}

// HasDocumentTree @ 141a061d0

bool __thiscall FBinaryArchiveFormatter::HasDocumentTree(FBinaryArchiveFormatter *this)

{
  return false;
}

// LeaveArray @ 141a08060

void __thiscall FBinaryArchiveFormatter::LeaveArray(FBinaryArchiveFormatter *this)

{
  return;
}

// LeaveArrayElement @ 141a08070

void __thiscall FBinaryArchiveFormatter::LeaveArrayElement(FBinaryArchiveFormatter *this)

{
  return;
}

// LeaveAttribute @ 141a08080

void __thiscall FBinaryArchiveFormatter::LeaveAttribute(FBinaryArchiveFormatter *this)

{
  return;
}

// LeaveAttributedValue @ 141a08090

void __thiscall FBinaryArchiveFormatter::LeaveAttributedValue(FBinaryArchiveFormatter *this)

{
  return;
}

// LeaveField @ 141a080a0

void __thiscall FBinaryArchiveFormatter::LeaveField(FBinaryArchiveFormatter *this)

{
  return;
}

// LeaveMap @ 141a080b0

void __thiscall FBinaryArchiveFormatter::LeaveMap(FBinaryArchiveFormatter *this)

{
  return;
}

// LeaveMapElement @ 141a080c0

void __thiscall FBinaryArchiveFormatter::LeaveMapElement(FBinaryArchiveFormatter *this)

{
  return;
}

// LeaveRecord @ 141a080d0

void __thiscall FBinaryArchiveFormatter::LeaveRecord(FBinaryArchiveFormatter *this)

{
  return;
}

// LeaveStream @ 141a080e0

void __thiscall FBinaryArchiveFormatter::LeaveStream(FBinaryArchiveFormatter *this)

{
  return;
}

// LeaveStreamElement @ 141a080f0

void __thiscall FBinaryArchiveFormatter::LeaveStreamElement(FBinaryArchiveFormatter *this)

{
  return;
}

// Serialize @ 141a1de40

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,short *param_1)

{
  FArchive *this_00;
  short *psVar1;
  
  this_00 = this->Inner;
  psVar1 = (short *)**(undefined8 **)&this_00->field_0x8;
  if (psVar1 + 1 <= (short *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *param_1 = *psVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 2;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141a1de78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_1,2);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,(ushort *)param_1);
  return;
}

// Serialize @ 141a1de90

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,UObject **param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141a1de97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->Inner + 0x168))();
  return;
}

// Serialize @ 141a1deb0

void __thiscall
FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,FLazyObjectPtr *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141a1deb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->Inner + 0x158))();
  return;
}

// Serialize @ 141a1ded0

void __thiscall
FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,FObjectPtr *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141a1ded7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->Inner + 0x150))();
  return;
}

// Serialize @ 141a1def0

void __thiscall
FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,FSoftObjectPath *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141a1def7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->Inner + 0x140))();
  return;
}

// Serialize @ 141a1df10

void __thiscall
FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,FSoftObjectPtr *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141a1df17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->Inner + 0x148))();
  return;
}

// Serialize @ 141a1df30

void __thiscall
FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,FWeakObjectPtr *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141a1df37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->Inner + 0x138))();
  return;
}

// Serialize @ 141a1df50

void __thiscall FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,wchar32 *param_1)

{
  FArchive *this_00;
  wchar32 *pwVar1;
  
  this_00 = this->Inner;
  pwVar1 = (wchar32 *)**(undefined8 **)&this_00->field_0x8;
  if (pwVar1 + 1 <= (wchar32 *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *param_1 = *pwVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141a1df86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,param_1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,param_1,4);
  return;
}

// Serialize @ 141a1dfa0

void __thiscall
FBinaryArchiveFormatter::Serialize(FBinaryArchiveFormatter *this,void *param_1,ulong64 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141a1dfa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->Inner + 0x188))();
  return;
}

// TryEnterAttribute @ 141a25750

bool __thiscall
FBinaryArchiveFormatter::TryEnterAttribute
          (FBinaryArchiveFormatter *this,FArchiveFieldName param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  uint local_res18 [4];
  
  this_00 = (FArchiveState *)this->Inner;
  pFVar3 = this_00->ActiveFPLB;
  piVar1 = (int *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (piVar1 <= pFVar3->EndFastPathLoadBuffer) {
    iVar2 = *(int *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)piVar1;
    return iVar2 != 0;
  }
  local_res18[0] = 0;
  if (this_00->ArIsLoading == 0) {
    local_res18[0] = (uint)param_2;
  }
  (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res18,4);
  if (1 < local_res18[0]) {
    FArchiveState::SetError(this_00);
  }
  if (this_00->ArIsLoading != 0) {
    return local_res18[0] != 0;
  }
  return param_2;
}

// TryEnterAttributedValueValue @ 141a257f0

bool __thiscall FBinaryArchiveFormatter::TryEnterAttributedValueValue(FBinaryArchiveFormatter *this)

{
  return false;
}

// TryEnterField @ 141a25800

bool __thiscall
FBinaryArchiveFormatter::TryEnterField
          (FBinaryArchiveFormatter *this,FArchiveFieldName param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  uint local_res18 [4];
  
  this_00 = (FArchiveState *)this->Inner;
  pFVar3 = this_00->ActiveFPLB;
  piVar1 = (int *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (piVar1 <= pFVar3->EndFastPathLoadBuffer) {
    iVar2 = *(int *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)piVar1;
    return iVar2 != 0;
  }
  local_res18[0] = 0;
  if (this_00->ArIsLoading == 0) {
    local_res18[0] = (uint)param_2;
  }
  (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res18,4);
  if (1 < local_res18[0]) {
    FArchiveState::SetError(this_00);
  }
  if (this_00->ArIsLoading != 0) {
    return local_res18[0] != 0;
  }
  return param_2;
}

