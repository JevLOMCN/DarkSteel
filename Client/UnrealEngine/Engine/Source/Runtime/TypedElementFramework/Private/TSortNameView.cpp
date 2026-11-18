// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 14

// operator== @ 142ce58e0

bool __thiscall
UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>::operator==
          (TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *this,
          TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *param_1)

{
  FName *this_00;
  FName *pFVar1;
  int iVar2;
  
  this_00 = this->View;
  if ((this_00 == (FName *)0x0) || (pFVar1 = param_1->View, pFVar1 == (FName *)0x0)) {
    return (this_00 == (FName *)0x0) == (param_1->View == (FName *)0x0);
  }
  if ((*this_00 != (FName)0x0) && (*pFVar1 != (FName)0x0)) {
    iVar2 = ::FName::Compare(this_00,pFVar1);
    return iVar2 == 0;
  }
  return (*this_00 != (FName)0x0) == (*pFVar1 != (FName)0x0);
}

// operator== @ 142ce5960

bool __thiscall
UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>::operator==
          (TSortNameView<UE::Editor::DataStorage::FSortById> *this,
          TSortNameView<UE::Editor::DataStorage::FSortById> *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  int iVar3;
  
  pFVar1 = this->View;
  if ((pFVar1 == (FName *)0x0) || (pFVar2 = param_1->View, pFVar2 == (FName *)0x0)) {
    iVar3 = (uint)(pFVar1 == (FName *)0x0) - (uint)(param_1->View == (FName *)0x0);
  }
  else {
    iVar3 = (pFVar1->ComparisonIndex).Value - (pFVar2->ComparisonIndex).Value;
    if (iVar3 == 0) {
      return pFVar1->Number == pFVar2->Number;
    }
  }
  return iVar3 == 0;
}

// operator< @ 142ce5aa0

bool __thiscall
UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>::operator<
          (TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *this,
          TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *param_1)

{
  FName *this_00;
  FName *pFVar1;
  int iVar2;
  
  this_00 = this->View;
  if ((this_00 == (FName *)0x0) || (pFVar1 = param_1->View, pFVar1 == (FName *)0x0)) {
    return SUB41((uint)(this_00 == (FName *)0x0) - (uint)(param_1->View == (FName *)0x0) >> 0x1f,0);
  }
  if ((*this_00 != (FName)0x0) && (*pFVar1 != (FName)0x0)) {
    iVar2 = ::FName::Compare(this_00,pFVar1);
    return SUB41((uint)iVar2 >> 0x1f,0);
  }
  return SUB41((uint)(*this_00 != (FName)0x0) - (uint)(*pFVar1 != (FName)0x0) >> 0x1f,0);
}

// operator< @ 142ce5b20

bool __thiscall
UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>::operator<
          (TSortNameView<UE::Editor::DataStorage::FSortById> *this,
          TSortNameView<UE::Editor::DataStorage::FSortById> *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  int iVar3;
  
  pFVar1 = this->View;
  if ((pFVar1 == (FName *)0x0) || (pFVar2 = param_1->View, pFVar2 == (FName *)0x0)) {
    iVar3 = (uint)(pFVar1 == (FName *)0x0) - (uint)(param_1->View == (FName *)0x0);
  }
  else {
    iVar3 = (pFVar1->ComparisonIndex).Value - (pFVar2->ComparisonIndex).Value;
    if (iVar3 == 0) {
      return SUB41(pFVar1->Number - pFVar2->Number >> 0x1f,0);
    }
  }
  return SUB41((uint)iVar3 >> 0x1f,0);
}

// CacheCompareType @ 142cec9c0

void __thiscall
UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>::CacheCompareType
          (TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *this)

{
  if ((this->View != (FName *)0x0) && (this->bIsCached == false)) {
    ::FString::Reset(&this->Cache,0);
    if (*this->View != (FName)0x0) {
      ::FName::ToString(this->View,&this->Cache);
    }
    this->bIsCached = true;
  }
  return;
}

// CacheCompareType @ 142ceca10

void __thiscall
UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>::CacheCompareType
          (TSortNameView<UE::Editor::DataStorage::FSortById> *this)

{
  if ((this->View != (FName *)0x0) && (this->bIsCached == false)) {
    this->Cache = this->View->Number;
    this->bIsCached = true;
  }
  return;
}

// CalculatePrefix @ 142cee770

FPrefixInfo * __thiscall
UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>::CalculatePrefix
          (TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *this,
          FPrefixInfo *__return_storage_ptr__,int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined7 uVar3;
  FPrefixInfo *pFVar4;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  if ((this->View != (FName *)0x0) && (this->bIsCached == false)) {
    ::FString::Reset(&this->Cache,0);
    if (*this->View != (FName)0x0) {
      ::FName::ToString(this->View,&this->Cache);
    }
    this->bIsCached = true;
  }
  iVar1 = (this->Cache).Data.ArrayNum;
  local_28.View.DataPtr = (wchar_t *)(this->Cache).Data.AllocatorInstance.Data;
  local_28.View.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.View.Size = 0;
  }
  pFVar4 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
           ::CalculatePrefix(&local_18,param_1,param_2,&local_28);
  bVar2 = pFVar4->bHasRemainingBytes;
  uVar3 = *(undefined7 *)&pFVar4->field_0x9;
  __return_storage_ptr__->Prefix = pFVar4->Prefix;
  __return_storage_ptr__->bHasRemainingBytes = bVar2;
  *(undefined7 *)&__return_storage_ptr__->field_0x9 = uVar3;
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cee830

FPrefixInfo * __thiscall
UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>::CalculatePrefix
          (TSortNameView<UE::Editor::DataStorage::FSortById> *this,
          FPrefixInfo *__return_storage_ptr__,int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  uint7 uStack_f;
  
  if ((this->View != (FName *)0x0) && (this->bIsCached == false)) {
    this->Cache = this->View->Number;
    this->bIsCached = true;
  }
  uVar3 = ((ulonglong)(uint)-(this->Cache >> 0x1f) | 0x80000000) ^ (ulonglong)(uint)this->Cache;
  iVar1 = (param_2 - param_1) * 8 + 0x20;
  bVar2 = (byte)iVar1;
  if (iVar1 < 0) {
    uVar4 = uVar3 >> (-bVar2 & 0x3f);
  }
  else {
    uVar4 = uVar3 << (bVar2 & 0x3f);
  }
  __return_storage_ptr__->Prefix = uVar4;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = (ulonglong)uStack_f << 8;
  return __return_storage_ptr__;
}

// Compare @ 142cf4400

int __thiscall
UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>::Compare
          (TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *this,FName *param_1,
          FName *param_2)

{
  FName FVar1;
  int iVar2;
  
  FVar1 = *this->View;
  if ((FVar1 != (FName)0x0) && (*param_2 != (FName)0x0)) {
    iVar2 = ::FName::Compare(this->View,param_2);
    return iVar2;
  }
  return (uint)(FVar1 != (FName)0x0) - (uint)(*param_2 != (FName)0x0);
}

// Compare @ 142cf4440

int __thiscall
UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>::Compare
          (TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *this,
          TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *param_1)

{
  FName *this_00;
  FName *pFVar1;
  int iVar2;
  
  this_00 = this->View;
  if ((this_00 == (FName *)0x0) || (pFVar1 = param_1->View, pFVar1 == (FName *)0x0)) {
    return (uint)(this_00 == (FName *)0x0) - (uint)(param_1->View == (FName *)0x0);
  }
  if ((*this_00 != (FName)0x0) && (*pFVar1 != (FName)0x0)) {
    iVar2 = ::FName::Compare(this_00,pFVar1);
    return iVar2;
  }
  return (uint)(*this_00 != (FName)0x0) - (uint)(*pFVar1 != (FName)0x0);
}

// Compare @ 142cf44a0

int __thiscall
UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>::Compare
          (TSortNameView<UE::Editor::DataStorage::FSortById> *this,FName *param_1,FName *param_2)

{
  int iVar1;
  
  iVar1 = (this->View->ComparisonIndex).Value - (param_2->ComparisonIndex).Value;
  if (iVar1 == 0) {
    iVar1 = this->View->Number - param_2->Number;
  }
  return iVar1;
}

// Compare @ 142cf44c0

int __thiscall
UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>::Compare
          (TSortNameView<UE::Editor::DataStorage::FSortById> *this,
          TSortNameView<UE::Editor::DataStorage::FSortById> *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  int iVar3;
  
  pFVar1 = this->View;
  if ((pFVar1 == (FName *)0x0) || (pFVar2 = param_1->View, pFVar2 == (FName *)0x0)) {
    iVar3 = (uint)(pFVar1 == (FName *)0x0) - (uint)(param_1->View == (FName *)0x0);
  }
  else {
    iVar3 = (pFVar1->ComparisonIndex).Value - (pFVar2->ComparisonIndex).Value;
    if (iVar3 == 0) {
      return pFVar1->Number - pFVar2->Number;
    }
  }
  return iVar3;
}

// GetByteSize @ 142cf5410

uint __thiscall
UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>::GetByteSize
          (TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *this)

{
  int iVar1;
  int iVar2;
  
  if ((this->View != (FName *)0x0) && (this->bIsCached == false)) {
    ::FString::Reset(&this->Cache,0);
    if (*this->View != (FName)0x0) {
      ::FName::ToString(this->View,&this->Cache);
    }
    this->bIsCached = true;
  }
  iVar1 = (this->Cache).Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  return iVar2 * 2;
}

// GetByteSize @ 142cf5470

uint __thiscall
UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>::GetByteSize
          (TSortNameView<UE::Editor::DataStorage::FSortById> *this)

{
  return 4;
}

