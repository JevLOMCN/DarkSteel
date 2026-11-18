// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 104

// Append<wchar_t,0> @ 14160e570

TStringBuilderBase<wchar_t> * __thiscall
TStringBuilderBase<wchar_t>::Append<wchar_t,0>
          (TStringBuilderBase<wchar_t> *this,wchar_t *param_1,int param_2)

{
  void *pvVar1;
  ulong64 uVar2;
  
  uVar2 = (ulong64)param_2;
  if (this->End < this->CurPos + uVar2) {
    Extend(this,uVar2);
  }
  if (param_2 != 0) {
    pvVar1 = memcpy(this->CurPos,param_1,uVar2 * 2);
    this->CurPos = (wchar_t *)(uVar2 * 2 + (longlong)pvVar1);
  }
  return this;
}

// Append<TStringView<char>_const_&> @ 141788480

TStringBuilderBase<char8_t> * __thiscall
TStringBuilderBase<char8_t>::Append<TStringView<char>_const_&>
          (TStringBuilderBase<char8_t> *this,TStringView<char> *param_1)

{
  char *pcVar1;
  void *pvVar2;
  int iVar3;
  ulong64 uVar4;
  
  pcVar1 = param_1->DataPtr;
  iVar3 = (int)*(undefined8 *)&param_1->Size;
  uVar4 = (ulong64)iVar3;
  if (this->End < this->CurPos + uVar4) {
    Extend(this,uVar4);
  }
  if (iVar3 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(this->CurPos,pcVar1,uVar4);
    this->CurPos = (uchar *)((longlong)pvVar2 + uVar4);
  }
  return this;
}

// Append<TStringView<char8_t>_> @ 141788500

TStringBuilderBase<char8_t> * __thiscall
TStringBuilderBase<char8_t>::Append<TStringView<char8_t>_>
          (TStringBuilderBase<char8_t> *this,TStringView<char8_t> *param_1)

{
  uchar *puVar1;
  void *pvVar2;
  int iVar3;
  ulong64 uVar4;
  
  puVar1 = param_1->DataPtr;
  iVar3 = (int)*(undefined8 *)&param_1->Size;
  uVar4 = (ulong64)iVar3;
  if (this->End < this->CurPos + uVar4) {
    Extend(this,uVar4);
  }
  if (iVar3 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(this->CurPos,puVar1,uVar4);
    this->CurPos = (uchar *)((longlong)pvVar2 + uVar4);
  }
  return this;
}

// Append<char8_t,0> @ 141788580

TStringBuilderBase<wchar_t> * __thiscall
TStringBuilderBase<wchar_t>::Append<char8_t,0>
          (TStringBuilderBase<wchar_t> *this,uchar *param_1,int param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  
  iVar1 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,param_1,param_2);
  if (this->End < this->CurPos + iVar1) {
    Extend(this,(longlong)iVar1);
  }
  if (param_2 != 0) {
    pwVar2 = UE::Core::Private::Convert(this->CurPos,iVar1,param_1,param_2);
    this->CurPos = pwVar2;
  }
  return this;
}

// Append<wchar_t,0> @ 141788600

TStringBuilderBase<char8_t> * __thiscall
TStringBuilderBase<char8_t>::Append<wchar_t,0>
          (TStringBuilderBase<char8_t> *this,wchar_t *param_1,int param_2)

{
  int iVar1;
  uchar *puVar2;
  
  iVar1 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,param_2);
  if (this->End < this->CurPos + iVar1) {
    Extend(this,(longlong)iVar1);
  }
  if (param_2 != 0) {
    puVar2 = UE::Core::Private::Convert(this->CurPos,iVar1,param_1,param_2);
    this->CurPos = puVar2;
  }
  return this;
}

// AppendChar<char,0> @ 141788680

TStringBuilderBase<char8_t> * __thiscall
TStringBuilderBase<char8_t>::AppendChar<char,0>(TStringBuilderBase<char8_t> *this,char param_1)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = param_1;
  this->CurPos = this->CurPos + 1;
  return this;
}

// AppendChar<char,0> @ 1417886d0

TStringBuilderBase<wchar_t> * __thiscall
TStringBuilderBase<wchar_t>::AppendChar<char,0>(TStringBuilderBase<wchar_t> *this,char param_1)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = (short)param_1;
  this->CurPos = this->CurPos + 1;
  return this;
}

// Append<FString_&> @ 14180edd0

TStringBuilderBase<wchar_t> * __thiscall
TStringBuilderBase<wchar_t>::Append<FString_&>(TStringBuilderBase<wchar_t> *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  ulong64 uVar4;
  int iVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  uVar4 = (ulong64)iVar5;
  if (this->End < this->CurPos + uVar4) {
    Extend(this,uVar4);
  }
  if (iVar5 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(this->CurPos,pFVar2,uVar4 * 2);
    this->CurPos = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
  }
  return this;
}

// AddUninitialized @ 1418c72b0

int __thiscall
TStringBuilderBase<char>::AddUninitialized(TStringBuilderBase<char> *this,int param_1)

{
  int iVar1;
  ulong64 uVar2;
  
  uVar2 = (ulong64)param_1;
  if (this->End < this->CurPos + uVar2) {
    Extend(this,uVar2);
  }
  iVar1 = *(int *)&this->CurPos;
  this->CurPos = this->CurPos + uVar2;
  return iVar1 - *(int *)&this->Base;
}

// TStringBuilderBase<char> @ 1419145b0

TStringBuilderBase<char> * __thiscall
TStringBuilderBase<char>::TStringBuilderBase<char>
          (TStringBuilderBase<char> *this,char *param_1,int param_2,
          FDynamicStringBuilderToken param_3)

{
  this->Base = param_1;
  this->End = param_1 + param_2;
  this->CurPos = param_1;
  this->bIsDynamic = false;
  this->bIsExternal = false;
  return this;
}

// TStringBuilderBase<char> @ 1419145e0

TStringBuilderBase<char> * __thiscall
TStringBuilderBase<char>::TStringBuilderBase<char>
          (TStringBuilderBase<char> *this,char *param_1,int param_2,
          FExternalStringBuilderToken param_3)

{
  this->Base = param_1;
  this->End = param_1 + param_2;
  this->CurPos = param_1;
  this->bIsDynamic = false;
  this->bIsExternal = true;
  return this;
}

// TStringBuilderBase<char> @ 141914610

TStringBuilderBase<char> * __thiscall
TStringBuilderBase<char>::TStringBuilderBase<char>
          (TStringBuilderBase<char> *this,char *param_1,int param_2)

{
  this->Base = param_1;
  this->End = param_1 + param_2;
  this->CurPos = param_1;
  this->bIsDynamic = false;
  this->bIsExternal = false;
  return this;
}

// TStringBuilderBase<char8_t> @ 141914640

TStringBuilderBase<char8_t> * __thiscall
TStringBuilderBase<char8_t>::TStringBuilderBase<char8_t>
          (TStringBuilderBase<char8_t> *this,uchar *param_1,int param_2,
          FDynamicStringBuilderToken param_3)

{
  this->Base = param_1;
  this->End = param_1 + param_2;
  this->CurPos = param_1;
  this->bIsDynamic = false;
  this->bIsExternal = false;
  return this;
}

// TStringBuilderBase<char8_t> @ 141914670

TStringBuilderBase<char8_t> * __thiscall
TStringBuilderBase<char8_t>::TStringBuilderBase<char8_t>
          (TStringBuilderBase<char8_t> *this,uchar *param_1,int param_2,
          FExternalStringBuilderToken param_3)

{
  this->Base = param_1;
  this->End = param_1 + param_2;
  this->CurPos = param_1;
  this->bIsDynamic = false;
  this->bIsExternal = true;
  return this;
}

// TStringBuilderBase<char8_t> @ 1419146a0

TStringBuilderBase<char8_t> * __thiscall
TStringBuilderBase<char8_t>::TStringBuilderBase<char8_t>
          (TStringBuilderBase<char8_t> *this,uchar *param_1,int param_2)

{
  this->Base = param_1;
  this->End = param_1 + param_2;
  this->CurPos = param_1;
  this->bIsDynamic = false;
  this->bIsExternal = false;
  return this;
}

// TStringBuilderBase<wchar_t> @ 1419146d0

TStringBuilderBase<wchar_t> * __thiscall
TStringBuilderBase<wchar_t>::TStringBuilderBase<wchar_t>
          (TStringBuilderBase<wchar_t> *this,wchar_t *param_1,int param_2,
          FDynamicStringBuilderToken param_3)

{
  this->Base = param_1;
  this->CurPos = param_1;
  this->bIsDynamic = false;
  this->bIsExternal = false;
  this->End = param_1 + param_2;
  return this;
}

// TStringBuilderBase<wchar_t> @ 141914700

TStringBuilderBase<wchar_t> * __thiscall
TStringBuilderBase<wchar_t>::TStringBuilderBase<wchar_t>
          (TStringBuilderBase<wchar_t> *this,wchar_t *param_1,int param_2,
          FExternalStringBuilderToken param_3)

{
  this->Base = param_1;
  this->CurPos = param_1;
  this->bIsDynamic = false;
  this->bIsExternal = true;
  this->End = param_1 + param_2;
  return this;
}

// TStringBuilderBase<wchar_t> @ 141914730

TStringBuilderBase<wchar_t> * __thiscall
TStringBuilderBase<wchar_t>::TStringBuilderBase<wchar_t>
          (TStringBuilderBase<wchar_t> *this,wchar_t *param_1,int param_2)

{
  this->Base = param_1;
  this->CurPos = param_1;
  this->bIsDynamic = false;
  this->bIsExternal = false;
  this->End = param_1 + param_2;
  return this;
}

// ~TStringBuilderBase<char> @ 14191ae50

void __thiscall TStringBuilderBase<char>::~TStringBuilderBase<char>(TStringBuilderBase<char> *this)

{
  if (this->bIsDynamic != false) {
    FMemory::Free(this->Base);
    return;
  }
  return;
}

// ~TStringBuilderBase<char8_t> @ 14191ae70

void __thiscall
TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(TStringBuilderBase<char8_t> *this)

{
  if (this->bIsDynamic != false) {
    FMemory::Free(this->Base);
    return;
  }
  return;
}

// ~TStringBuilderBase<wchar_t> @ 14191ae90

void __thiscall
TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(TStringBuilderBase<wchar_t> *this)

{
  if (this->bIsDynamic != false) {
    FMemory::Free(this->Base);
    return;
  }
  return;
}

// operator= @ 14191d2b0

TStringBuilderBase<char> * __thiscall
TStringBuilderBase<char>::operator=(TStringBuilderBase<char> *this,char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  int iVar3;
  ulong64 uVar4;
  
  iVar3 = 0;
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    iVar3 = (int)sVar1;
  }
  uVar4 = (ulong64)iVar3;
  this->CurPos = this->Base;
  if (this->End < this->Base + uVar4) {
    Extend(this,uVar4);
  }
  if (iVar3 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(this->CurPos,param_1,uVar4);
    this->CurPos = (char *)((longlong)pvVar2 + uVar4);
  }
  return this;
}

// operator= @ 14191d340

TStringBuilderBase<char> * __thiscall
TStringBuilderBase<char>::operator=(TStringBuilderBase<char> *this,TStringView<char> *param_1)

{
  char *pcVar1;
  void *pvVar2;
  int iVar3;
  ulong64 uVar4;
  
  pcVar1 = param_1->DataPtr;
  iVar3 = (int)*(undefined8 *)&param_1->Size;
  uVar4 = (ulong64)iVar3;
  this->CurPos = this->Base;
  if (this->End < this->Base + uVar4) {
    Extend(this,uVar4);
  }
  if (iVar3 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(this->CurPos,pcVar1,uVar4);
    this->CurPos = (char *)((longlong)pvVar2 + uVar4);
  }
  return this;
}

// operator= @ 14191d3c0

TStringBuilderBase<char8_t> * __thiscall
TStringBuilderBase<char8_t>::operator=(TStringBuilderBase<char8_t> *this,uchar *param_1)

{
  size_t sVar1;
  void *pvVar2;
  int iVar3;
  ulong64 uVar4;
  
  iVar3 = 0;
  if (param_1 != (uchar *)0x0) {
    sVar1 = strlen((char *)param_1);
    iVar3 = (int)sVar1;
  }
  uVar4 = (ulong64)iVar3;
  this->CurPos = this->Base;
  if (this->End < this->Base + uVar4) {
    Extend(this,uVar4);
  }
  if (iVar3 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(this->CurPos,param_1,uVar4);
    this->CurPos = (uchar *)((longlong)pvVar2 + uVar4);
  }
  return this;
}

// operator= @ 14191d450

TStringBuilderBase<char8_t> * __thiscall
TStringBuilderBase<char8_t>::operator=
          (TStringBuilderBase<char8_t> *this,TStringView<char8_t> *param_1)

{
  uchar *puVar1;
  void *pvVar2;
  int iVar3;
  ulong64 uVar4;
  
  puVar1 = param_1->DataPtr;
  iVar3 = (int)*(undefined8 *)&param_1->Size;
  uVar4 = (ulong64)iVar3;
  this->CurPos = this->Base;
  if (this->End < this->Base + uVar4) {
    Extend(this,uVar4);
  }
  if (iVar3 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(this->CurPos,puVar1,uVar4);
    this->CurPos = (uchar *)((longlong)pvVar2 + uVar4);
  }
  return this;
}

// operator= @ 14191d4d0

TStringBuilderBase<wchar_t> * __thiscall
TStringBuilderBase<wchar_t>::operator=(TStringBuilderBase<wchar_t> *this,wchar_t *param_1)

{
  int iVar1;
  size_t sVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  
  iVar1 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar1 = (int)sVar2;
  }
  this->CurPos = this->Base;
  pTVar3 = Append<wchar_t,0>(this,param_1,iVar1);
  return pTVar3;
}

// operator= @ 14191d520

TStringBuilderBase<wchar_t> * __thiscall
TStringBuilderBase<wchar_t>::operator=
          (TStringBuilderBase<wchar_t> *this,TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  this->CurPos = this->Base;
  pTVar3 = Append<wchar_t,0>(this,pwVar2,(int)uVar1);
  return pTVar3;
}

// operator* @ 14191e030

char * __thiscall TStringBuilderBase<char>::operator*(TStringBuilderBase<char> *this)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = '\0';
  return this->Base;
}

// operator* @ 14191e070

char * __thiscall TStringBuilderBase<char>::operator*(TStringBuilderBase<char> *this)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = '\0';
  return this->Base;
}

// operator* @ 14191e0b0

uchar * __thiscall TStringBuilderBase<char8_t>::operator*(TStringBuilderBase<char8_t> *this)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = '\0';
  return this->Base;
}

// operator* @ 14191e0f0

uchar * __thiscall TStringBuilderBase<char8_t>::operator*(TStringBuilderBase<char8_t> *this)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = '\0';
  return this->Base;
}

// operator* @ 14191e130

wchar_t * __thiscall TStringBuilderBase<wchar_t>::operator*(TStringBuilderBase<wchar_t> *this)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = L'\0';
  return this->Base;
}

// operator* @ 14191e170

wchar_t * __thiscall TStringBuilderBase<wchar_t>::operator*(TStringBuilderBase<wchar_t> *this)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = L'\0';
  return this->Base;
}

// AddUninitialized @ 141925cd0

int __thiscall
TStringBuilderBase<char8_t>::AddUninitialized(TStringBuilderBase<char8_t> *this,int param_1)

{
  int iVar1;
  ulong64 uVar2;
  
  uVar2 = (ulong64)param_1;
  if (this->End < this->CurPos + uVar2) {
    Extend(this,uVar2);
  }
  iVar1 = *(int *)&this->CurPos;
  this->CurPos = this->CurPos + uVar2;
  return iVar1 - *(int *)&this->Base;
}

// AddUninitialized @ 141925d10

int __thiscall
TStringBuilderBase<wchar_t>::AddUninitialized(TStringBuilderBase<wchar_t> *this,int param_1)

{
  wchar_t *pwVar1;
  ulong64 uVar2;
  
  uVar2 = (ulong64)param_1;
  if (this->End < this->CurPos + uVar2) {
    Extend(this,uVar2);
  }
  pwVar1 = this->CurPos;
  this->CurPos = pwVar1 + uVar2;
  return (int)((longlong)pwVar1 - (longlong)this->Base >> 1);
}

// AllocBuffer @ 141925e90

void * __thiscall
TStringBuilderBase<char>::AllocBuffer(TStringBuilderBase<char> *this,ulong64 param_1)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Malloc(param_1,1);
  return pvVar1;
}

// AllocBuffer @ 141925eb0

void * __thiscall
TStringBuilderBase<char8_t>::AllocBuffer(TStringBuilderBase<char8_t> *this,ulong64 param_1)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Malloc(param_1,1);
  return pvVar1;
}

// AllocBuffer @ 141925ed0

void * __thiscall
TStringBuilderBase<wchar_t>::AllocBuffer(TStringBuilderBase<wchar_t> *this,ulong64 param_1)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Malloc(param_1 * 2,2);
  return pvVar1;
}

// AppendV @ 1419268e0

TStringBuilderBase<char> * __thiscall
TStringBuilderBase<char>::AppendV(TStringBuilderBase<char> *this,char *param_1,char *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  int iVar3;
  
  puVar2 = __local_stdio_printf_options();
  do {
    iVar3 = *(int *)&this->End - *(int *)&this->CurPos;
    if (iVar3 != 0) {
      iVar1 = __stdio_common_vsprintf(*puVar2 | 2,this->CurPos,(longlong)iVar3,param_1,0,param_2);
      if (iVar1 < 0) {
        iVar1 = -1;
      }
      if (((iVar1 != -1) && (iVar1 < iVar3)) && (-1 < iVar1)) {
        this->CurPos = this->CurPos + iVar1;
        return this;
      }
    }
    Extend(this,0x40);
  } while( true );
}

// AppendV @ 1419269a0

TStringBuilderBase<char8_t> * __thiscall
TStringBuilderBase<char8_t>::AppendV(TStringBuilderBase<char8_t> *this,uchar *param_1,char *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  int iVar3;
  
  puVar2 = __local_stdio_printf_options();
  do {
    iVar3 = *(int *)&this->End - *(int *)&this->CurPos;
    if (iVar3 != 0) {
      iVar1 = __stdio_common_vsprintf(*puVar2 | 2,this->CurPos,(longlong)iVar3,param_1,0,param_2);
      if (iVar1 < 0) {
        iVar1 = -1;
      }
      if (((iVar1 != -1) && (iVar1 < iVar3)) && (-1 < iVar1)) {
        this->CurPos = this->CurPos + iVar1;
        return this;
      }
    }
    Extend(this,0x40);
  } while( true );
}

// AppendV @ 141926a60

TStringBuilderBase<wchar_t> * __thiscall
TStringBuilderBase<wchar_t>::AppendV
          (TStringBuilderBase<wchar_t> *this,wchar_t *param_1,char *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  int iVar3;
  
  puVar2 = __local_stdio_printf_options();
  do {
    iVar3 = (int)((longlong)this->End - (longlong)this->CurPos >> 1);
    if (iVar3 != 0) {
      iVar1 = __stdio_common_vswprintf(*puVar2,this->CurPos,(longlong)iVar3,param_1,0,param_2);
      if (iVar1 < 0) {
        iVar1 = -1;
      }
      if ((-1 < iVar1) && (iVar1 < iVar3)) {
        this->CurPos = this->CurPos + iVar1;
        return this;
      }
    }
    Extend(this,0x40);
  } while( true );
}

// AppendfImpl @ 141926b20

TStringBuilderBase<char> * __cdecl
TStringBuilderBase<char>::AppendfImpl(TStringBuilderBase<char> *param_1,char *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  undefined1 *puVar4;
  
  puVar4 = local_res18;
  puVar2 = __local_stdio_printf_options();
  do {
    iVar3 = *(int *)&param_1->End - *(int *)&param_1->CurPos;
    if (iVar3 != 0) {
      iVar1 = __stdio_common_vsprintf
                        (*puVar2 | 2,param_1->CurPos,(longlong)iVar3,param_2,0,local_res18,puVar4);
      if (iVar1 < 0) {
        iVar1 = -1;
      }
      if (((iVar1 != -1) && (iVar1 < iVar3)) && (-1 < iVar1)) {
        param_1->CurPos = param_1->CurPos + iVar1;
        return param_1;
      }
    }
    Extend(param_1,0x40);
  } while( true );
}

// AppendfImpl @ 141926bd0

TStringBuilderBase<char8_t> * __cdecl
TStringBuilderBase<char8_t>::AppendfImpl(TStringBuilderBase<char8_t> *param_1,uchar *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  undefined1 *puVar4;
  
  puVar4 = local_res18;
  puVar2 = __local_stdio_printf_options();
  do {
    iVar3 = *(int *)&param_1->End - *(int *)&param_1->CurPos;
    if (iVar3 != 0) {
      iVar1 = __stdio_common_vsprintf
                        (*puVar2 | 2,param_1->CurPos,(longlong)iVar3,param_2,0,local_res18,puVar4);
      if (iVar1 < 0) {
        iVar1 = -1;
      }
      if (((iVar1 != -1) && (iVar1 < iVar3)) && (-1 < iVar1)) {
        param_1->CurPos = param_1->CurPos + iVar1;
        return param_1;
      }
    }
    Extend(param_1,0x40);
  } while( true );
}

// AppendfImpl @ 141926c80

TStringBuilderBase<wchar_t> * __cdecl
TStringBuilderBase<wchar_t>::AppendfImpl(TStringBuilderBase<wchar_t> *param_1,wchar_t *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  undefined1 *puVar4;
  
  puVar4 = local_res18;
  puVar2 = __local_stdio_printf_options();
  do {
    iVar3 = (int)((longlong)param_1->End - (longlong)param_1->CurPos >> 1);
    if (iVar3 != 0) {
      iVar1 = __stdio_common_vswprintf
                        (*puVar2,param_1->CurPos,(longlong)iVar3,param_2,0,local_res18,puVar4);
      if (iVar1 < 0) {
        iVar1 = -1;
      }
      if ((-1 < iVar1) && (iVar1 < iVar3)) {
        param_1->CurPos = param_1->CurPos + iVar1;
        return param_1;
      }
    }
    Extend(param_1,0x40);
  } while( true );
}

// EnsureAdditionalCapacity @ 141937b90

void __thiscall
TStringBuilderBase<char>::EnsureAdditionalCapacity(TStringBuilderBase<char> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  char *_Dst;
  ulong64 uVar4;
  size_t _Size;
  
  if (this->CurPos + param_1 <= this->End) {
    return;
  }
  if (this->bIsExternal != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsExternal",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\StringBuilder.cpp"
                       ,0x24,
                       L"Extending the capacity of an external string builder is not supported. Size = %I64u Capacity = %I64u ExtraCapacity = %I64u."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = (ulonglong)(this->End + (((longlong)param_1 + -1) - (longlong)this->Base)) >> 1 |
          (ulonglong)(this->End + (((longlong)param_1 + -1) - (longlong)this->Base));
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = (uVar3 >> 0x10 | uVar3) + 1;
  uVar4 = 0x20;
  if (0x20 < uVar3) {
    uVar4 = uVar3;
  }
  _Dst = FMemory::Malloc(uVar4,1);
  _Size = (longlong)this->CurPos - (longlong)this->Base;
  if (_Size != 0) {
    memcpy(_Dst,this->Base,_Size);
  }
  if (this->bIsDynamic != false) {
    FMemory::Free(this->Base);
  }
  this->Base = _Dst;
  this->CurPos = _Dst + _Size;
  this->End = _Dst + uVar4;
  this->bIsDynamic = true;
  return;
}

// EnsureAdditionalCapacity @ 141937bb0

void __thiscall
TStringBuilderBase<char8_t>::EnsureAdditionalCapacity(TStringBuilderBase<char8_t> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  uchar *_Dst;
  ulong64 uVar4;
  size_t _Size;
  
  if (this->CurPos + param_1 <= this->End) {
    return;
  }
  if (this->bIsExternal != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsExternal",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\StringBuilder.cpp"
                       ,0x24,
                       L"Extending the capacity of an external string builder is not supported. Size = %I64u Capacity = %I64u ExtraCapacity = %I64u."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = (ulonglong)(this->End + (((longlong)param_1 + -1) - (longlong)this->Base)) >> 1 |
          (ulonglong)(this->End + (((longlong)param_1 + -1) - (longlong)this->Base));
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = (uVar3 >> 0x10 | uVar3) + 1;
  uVar4 = 0x20;
  if (0x20 < uVar3) {
    uVar4 = uVar3;
  }
  _Dst = FMemory::Malloc(uVar4,1);
  _Size = (longlong)this->CurPos - (longlong)this->Base;
  if (_Size != 0) {
    memcpy(_Dst,this->Base,_Size);
  }
  if (this->bIsDynamic != false) {
    FMemory::Free(this->Base);
  }
  this->Base = _Dst;
  this->CurPos = _Dst + _Size;
  this->End = _Dst + uVar4;
  this->bIsDynamic = true;
  return;
}

// EnsureAdditionalCapacity @ 141937bd0

void __thiscall
TStringBuilderBase<wchar_t>::EnsureAdditionalCapacity(TStringBuilderBase<wchar_t> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  wchar_t *_Dst;
  ulonglong uVar4;
  longlong lVar5;
  
  if (this->CurPos + param_1 <= this->End) {
    return;
  }
  if (this->bIsExternal != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsExternal",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\StringBuilder.cpp"
                       ,0x24,
                       L"Extending the capacity of an external string builder is not supported. Size = %I64u Capacity = %I64u ExtraCapacity = %I64u."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = ((longlong)this->End - (longlong)this->Base >> 1) + (longlong)param_1 + -1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar3 = (uVar4 >> 0x10 | uVar4) + 1;
  uVar4 = 0x20;
  if (0x20 < uVar3) {
    uVar4 = uVar3;
  }
  _Dst = FMemory::Malloc(uVar4 * 2,2);
  lVar5 = (longlong)this->CurPos - (longlong)this->Base >> 1;
  if (lVar5 != 0) {
    memcpy(_Dst,this->Base,lVar5 * 2);
  }
  if (this->bIsDynamic != false) {
    FMemory::Free(this->Base);
  }
  this->Base = _Dst;
  this->CurPos = _Dst + lVar5;
  this->End = _Dst + uVar4;
  this->bIsDynamic = true;
  return;
}

// EnsureNulTerminated @ 141937bf0

void __thiscall TStringBuilderBase<char>::EnsureNulTerminated(TStringBuilderBase<char> *this)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
    *this->CurPos = '\0';
    return;
  }
  *this->CurPos = '\0';
  return;
}

// EnsureNulTerminated @ 141937c30

void __thiscall TStringBuilderBase<char8_t>::EnsureNulTerminated(TStringBuilderBase<char8_t> *this)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
    *this->CurPos = '\0';
    return;
  }
  *this->CurPos = '\0';
  return;
}

// EnsureNulTerminated @ 141937c70

void __thiscall TStringBuilderBase<wchar_t>::EnsureNulTerminated(TStringBuilderBase<wchar_t> *this)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = L'\0';
  return;
}

// Extend @ 14193a6d0

void __thiscall TStringBuilderBase<char>::Extend(TStringBuilderBase<char> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  char *_Dst;
  ulong64 uVar4;
  size_t _Size;
  
  if (this->bIsExternal != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsExternal",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\StringBuilder.cpp"
                       ,0x24,
                       L"Extending the capacity of an external string builder is not supported. Size = %I64u Capacity = %I64u ExtraCapacity = %I64u."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = (ulonglong)(this->End + ((param_1 - 1) - (longlong)this->Base)) >> 1 |
          (ulonglong)(this->End + ((param_1 - 1) - (longlong)this->Base));
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = (uVar3 >> 0x10 | uVar3) + 1;
  uVar4 = 0x20;
  if (0x20 < uVar3) {
    uVar4 = uVar3;
  }
  _Dst = FMemory::Malloc(uVar4,1);
  _Size = (longlong)this->CurPos - (longlong)this->Base;
  if (_Size != 0) {
    memcpy(_Dst,this->Base,_Size);
  }
  if (this->bIsDynamic != false) {
    FMemory::Free(this->Base);
  }
  this->Base = _Dst;
  this->CurPos = _Dst + _Size;
  this->End = _Dst + uVar4;
  this->bIsDynamic = true;
  return;
}

// Extend @ 14193a7f0

void __thiscall
TStringBuilderBase<char8_t>::Extend(TStringBuilderBase<char8_t> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  uchar *_Dst;
  ulong64 uVar4;
  size_t _Size;
  
  if (this->bIsExternal != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsExternal",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\StringBuilder.cpp"
                       ,0x24,
                       L"Extending the capacity of an external string builder is not supported. Size = %I64u Capacity = %I64u ExtraCapacity = %I64u."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = (ulonglong)(this->End + ((param_1 - 1) - (longlong)this->Base)) >> 1 |
          (ulonglong)(this->End + ((param_1 - 1) - (longlong)this->Base));
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = (uVar3 >> 0x10 | uVar3) + 1;
  uVar4 = 0x20;
  if (0x20 < uVar3) {
    uVar4 = uVar3;
  }
  _Dst = FMemory::Malloc(uVar4,1);
  _Size = (longlong)this->CurPos - (longlong)this->Base;
  if (_Size != 0) {
    memcpy(_Dst,this->Base,_Size);
  }
  if (this->bIsDynamic != false) {
    FMemory::Free(this->Base);
  }
  this->Base = _Dst;
  this->CurPos = _Dst + _Size;
  this->End = _Dst + uVar4;
  this->bIsDynamic = true;
  return;
}

// Extend @ 14193a910

void __thiscall
TStringBuilderBase<wchar_t>::Extend(TStringBuilderBase<wchar_t> *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  wchar_t *_Dst;
  ulonglong uVar4;
  longlong lVar5;
  
  if (this->bIsExternal != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsExternal",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\StringBuilder.cpp"
                       ,0x24,
                       L"Extending the capacity of an external string builder is not supported. Size = %I64u Capacity = %I64u ExtraCapacity = %I64u."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = ((longlong)this->End - (longlong)this->Base >> 1) + (param_1 - 1);
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar3 = (uVar4 >> 0x10 | uVar4) + 1;
  uVar4 = 0x20;
  if (0x20 < uVar3) {
    uVar4 = uVar3;
  }
  _Dst = FMemory::Malloc(uVar4 * 2,2);
  lVar5 = (longlong)this->CurPos - (longlong)this->Base >> 1;
  if (lVar5 != 0) {
    memcpy(_Dst,this->Base,lVar5 * 2);
  }
  if (this->bIsDynamic != false) {
    FMemory::Free(this->Base);
  }
  this->Base = _Dst;
  this->CurPos = _Dst + lVar5;
  this->End = _Dst + uVar4;
  this->bIsDynamic = true;
  return;
}

// FreeBuffer @ 141943ad0

void __thiscall TStringBuilderBase<char>::FreeBuffer(TStringBuilderBase<char> *this,void *param_1)

{
  FMemory::Free(param_1);
  return;
}

// FreeBuffer @ 141943ae0

void __thiscall
TStringBuilderBase<char8_t>::FreeBuffer(TStringBuilderBase<char8_t> *this,void *param_1)

{
  FMemory::Free(param_1);
  return;
}

// FreeBuffer @ 141943af0

void __thiscall
TStringBuilderBase<wchar_t>::FreeBuffer(TStringBuilderBase<wchar_t> *this,void *param_1)

{
  FMemory::Free(param_1);
  return;
}

// GetAllocatedSize @ 141944e50

ulong64 __thiscall TStringBuilderBase<char>::GetAllocatedSize(TStringBuilderBase<char> *this)

{
  if (this->bIsDynamic != false) {
    return (longlong)this->End - (longlong)this->Base;
  }
  return 0;
}

// GetAllocatedSize @ 141944e70

ulong64 __thiscall TStringBuilderBase<char8_t>::GetAllocatedSize(TStringBuilderBase<char8_t> *this)

{
  if (this->bIsDynamic != false) {
    return (longlong)this->End - (longlong)this->Base;
  }
  return 0;
}

// GetAllocatedSize @ 141944e90

ulong64 __thiscall TStringBuilderBase<wchar_t>::GetAllocatedSize(TStringBuilderBase<wchar_t> *this)

{
  if (this->bIsDynamic != false) {
    return ((longlong)this->End - (longlong)this->Base >> 1) * 2;
  }
  return 0;
}

// GetData @ 141946240

char * __thiscall TStringBuilderBase<char>::GetData(TStringBuilderBase<char> *this)

{
  return this->Base;
}

// GetData @ 141946250

char * __thiscall TStringBuilderBase<char>::GetData(TStringBuilderBase<char> *this)

{
  return this->Base;
}

// GetData @ 141946260

uchar * __thiscall TStringBuilderBase<char8_t>::GetData(TStringBuilderBase<char8_t> *this)

{
  return this->Base;
}

// GetData @ 141946270

uchar * __thiscall TStringBuilderBase<char8_t>::GetData(TStringBuilderBase<char8_t> *this)

{
  return this->Base;
}

// GetData @ 141946280

wchar_t * __thiscall TStringBuilderBase<wchar_t>::GetData(TStringBuilderBase<wchar_t> *this)

{
  return this->Base;
}

// GetData @ 141946290

wchar_t * __thiscall TStringBuilderBase<wchar_t>::GetData(TStringBuilderBase<wchar_t> *this)

{
  return this->Base;
}

// Initialize @ 14194f1c0

void __thiscall
TStringBuilderBase<char>::Initialize(TStringBuilderBase<char> *this,char *param_1,int param_2)

{
  this->Base = param_1;
  this->End = param_1 + param_2;
  this->CurPos = param_1;
  return;
}

// Initialize @ 14194f1e0

void __thiscall
TStringBuilderBase<char8_t>::Initialize
          (TStringBuilderBase<char8_t> *this,uchar *param_1,int param_2)

{
  this->Base = param_1;
  this->End = param_1 + param_2;
  this->CurPos = param_1;
  return;
}

// Initialize @ 14194f200

void __thiscall
TStringBuilderBase<wchar_t>::Initialize
          (TStringBuilderBase<wchar_t> *this,wchar_t *param_1,int param_2)

{
  this->Base = param_1;
  this->CurPos = param_1;
  this->End = param_1 + param_2;
  return;
}

// InsertAt @ 141950df0

void __thiscall
TStringBuilderBase<char>::InsertAt
          (TStringBuilderBase<char> *this,int param_1,TStringView<char> *param_2)

{
  TStringView<char> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ReplaceAt(this,param_1,0,&local_18);
  return;
}

// InsertAt @ 141950e20

void __thiscall
TStringBuilderBase<char8_t>::InsertAt
          (TStringBuilderBase<char8_t> *this,int param_1,TStringView<char8_t> *param_2)

{
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ReplaceAt(this,param_1,0,&local_18);
  return;
}

// InsertAt @ 141950e50

void __thiscall
TStringBuilderBase<wchar_t>::InsertAt
          (TStringBuilderBase<wchar_t> *this,int param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ReplaceAt(this,param_1,0,&local_18);
  return;
}

// LastChar @ 141953c70

char __thiscall TStringBuilderBase<char>::LastChar(TStringBuilderBase<char> *this)

{
  return this->CurPos[-1];
}

// LastChar @ 141953c80

uchar __thiscall TStringBuilderBase<char8_t>::LastChar(TStringBuilderBase<char8_t> *this)

{
  return this->CurPos[-1];
}

// LastChar @ 141953c90

wchar_t __thiscall TStringBuilderBase<wchar_t>::LastChar(TStringBuilderBase<wchar_t> *this)

{
  return this->CurPos[-1];
}

// Len @ 141953cd0

int __thiscall TStringBuilderBase<char>::Len(TStringBuilderBase<char> *this)

{
  return *(int *)&this->CurPos - *(int *)&this->Base;
}

// Len @ 141953ce0

int __thiscall TStringBuilderBase<char8_t>::Len(TStringBuilderBase<char8_t> *this)

{
  return *(int *)&this->CurPos - *(int *)&this->Base;
}

// Len @ 141953cf0

int __thiscall TStringBuilderBase<wchar_t>::Len(TStringBuilderBase<wchar_t> *this)

{
  return (int)((longlong)this->CurPos - (longlong)this->Base >> 1);
}

// Prepend @ 14195b590

void __thiscall
TStringBuilderBase<char>::Prepend(TStringBuilderBase<char> *this,TStringView<char> *param_1)

{
  TStringView<char> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ReplaceAt(this,0,0,&local_18);
  return;
}

// Prepend @ 14195b5c0

void __thiscall
TStringBuilderBase<char8_t>::Prepend
          (TStringBuilderBase<char8_t> *this,TStringView<char8_t> *param_1)

{
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ReplaceAt(this,0,0,&local_18);
  return;
}

// Prepend @ 14195b5f0

void __thiscall
TStringBuilderBase<wchar_t>::Prepend
          (TStringBuilderBase<wchar_t> *this,TStringView<wchar_t> *param_1)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ReplaceAt(this,0,0,&local_18);
  return;
}

// RemoveAt @ 141965600

void __thiscall
TStringBuilderBase<char>::RemoveAt(TStringBuilderBase<char> *this,int param_1,int param_2)

{
  TStringView<char> local_18;
  
  local_18.DataPtr = (char *)0x0;
  local_18.Size = 0;
  local_18._12_4_ = 0;
  ReplaceAt(this,param_1,param_2,&local_18);
  return;
}

// RemoveAt @ 141965630

void __thiscall
TStringBuilderBase<char8_t>::RemoveAt(TStringBuilderBase<char8_t> *this,int param_1,int param_2)

{
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = (uchar *)0x0;
  local_18.Size = 0;
  local_18._12_4_ = 0;
  ReplaceAt(this,param_1,param_2,&local_18);
  return;
}

// RemoveAt @ 141965660

void __thiscall
TStringBuilderBase<wchar_t>::RemoveAt(TStringBuilderBase<wchar_t> *this,int param_1,int param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)0x0;
  local_18.Size = 0;
  local_18._12_4_ = 0;
  ReplaceAt(this,param_1,param_2,&local_18);
  return;
}

// RemoveSuffix @ 1419661e0

void __thiscall TStringBuilderBase<char>::RemoveSuffix(TStringBuilderBase<char> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 <= *(int *)&this->CurPos - *(int *)&this->Base) {
    this->CurPos = this->CurPos + -(longlong)param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount <= Len()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                     ,0xe8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->CurPos = this->CurPos + -(longlong)param_1;
  return;
}

// RemoveSuffix @ 141966250

void __thiscall
TStringBuilderBase<char8_t>::RemoveSuffix(TStringBuilderBase<char8_t> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 <= *(int *)&this->CurPos - *(int *)&this->Base) {
    this->CurPos = this->CurPos + -(longlong)param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount <= Len()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                     ,0xe8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->CurPos = this->CurPos + -(longlong)param_1;
  return;
}

// RemoveSuffix @ 1419662c0

void __thiscall
TStringBuilderBase<wchar_t>::RemoveSuffix(TStringBuilderBase<wchar_t> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((int)((longlong)this->CurPos - (longlong)this->Base >> 1) < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount <= Len()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                       ,0xe8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->CurPos = this->CurPos + -(longlong)param_1;
  return;
}

// ReplaceAt @ 141966330

void __thiscall
TStringBuilderBase<char>::ReplaceAt
          (TStringBuilderBase<char> *this,int param_1,int param_2,TStringView<char> *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  ulong64 uVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_1;
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pos >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0x117,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RemoveLen >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0x118,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)&this->CurPos - *(int *)&this->Base < param_1 + param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pos + RemoveLen <= Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0x119,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = param_3->Size;
  iVar6 = iVar2 - param_2;
  uVar9 = (ulong64)iVar6;
  if (iVar6 < 0) {
    this->CurPos = this->CurPos + uVar9;
    pcVar7 = this->Base + lVar10;
    pcVar3 = this->CurPos;
    if (pcVar7 != pcVar3) {
      pcVar8 = pcVar7 + -uVar9;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar7 = cVar1;
        pcVar7 = pcVar7 + 1;
      } while (pcVar7 != pcVar3);
    }
  }
  else if (0 < iVar6) {
    if (this->End < this->CurPos + uVar9) {
      Extend(this,uVar9);
    }
    this->CurPos = this->CurPos + uVar9;
    pcVar3 = this->Base;
    pcVar7 = this->CurPos + -1;
    if (pcVar7 != pcVar3 + lVar10 + iVar2 + -1) {
      pcVar8 = pcVar7 + -uVar9;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + -1;
        *pcVar7 = cVar1;
        pcVar7 = pcVar7 + -1;
      } while (pcVar7 != pcVar3 + lVar10 + iVar2 + -1);
    }
  }
  if (0 < iVar2) {
    memcpy(this->Base + lVar10,param_3->DataPtr,(longlong)iVar2);
  }
  return;
}

// ReplaceAt @ 1419664c0

void __thiscall
TStringBuilderBase<char8_t>::ReplaceAt
          (TStringBuilderBase<char8_t> *this,int param_1,int param_2,TStringView<char8_t> *param_3)

{
  uchar uVar1;
  int iVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uchar *puVar7;
  uchar *puVar8;
  ulong64 uVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_1;
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pos >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0x117,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RemoveLen >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0x118,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)&this->CurPos - *(int *)&this->Base < param_1 + param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pos + RemoveLen <= Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0x119,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = param_3->Size;
  iVar6 = iVar2 - param_2;
  uVar9 = (ulong64)iVar6;
  if (iVar6 < 0) {
    this->CurPos = this->CurPos + uVar9;
    puVar7 = this->Base + lVar10;
    puVar3 = this->CurPos;
    if (puVar7 != puVar3) {
      puVar8 = puVar7 + -uVar9;
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar3);
    }
  }
  else if (0 < iVar6) {
    if (this->End < this->CurPos + uVar9) {
      Extend(this,uVar9);
    }
    this->CurPos = this->CurPos + uVar9;
    puVar3 = this->Base;
    puVar7 = this->CurPos + -1;
    if (puVar7 != puVar3 + lVar10 + iVar2 + -1) {
      puVar8 = puVar7 + -uVar9;
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + -1;
        *puVar7 = uVar1;
        puVar7 = puVar7 + -1;
      } while (puVar7 != puVar3 + lVar10 + iVar2 + -1);
    }
  }
  if (0 < iVar2) {
    memcpy(this->Base + lVar10,param_3->DataPtr,(longlong)iVar2);
  }
  return;
}

// ReplaceAt @ 141966650

void __thiscall
TStringBuilderBase<wchar_t>::ReplaceAt
          (TStringBuilderBase<wchar_t> *this,int param_1,int param_2,TStringView<wchar_t> *param_3)

{
  wchar_t wVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  ulong64 uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_1;
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pos >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0x117,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RemoveLen >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0x118,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((int)((longlong)this->CurPos - (longlong)this->Base >> 1) < param_1 + param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pos + RemoveLen <= Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0x119,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar2 = param_3->Size;
  iVar5 = iVar2 - param_2;
  uVar7 = (ulong64)iVar5;
  if (iVar5 < 0) {
    this->CurPos = this->CurPos + uVar7;
    pwVar9 = this->CurPos;
    pwVar8 = this->Base + lVar10;
    if (pwVar8 != pwVar9) {
      pwVar6 = pwVar8 + -uVar7;
      do {
        wVar1 = *pwVar6;
        pwVar6 = pwVar6 + 1;
        *pwVar8 = wVar1;
        pwVar8 = pwVar8 + 1;
      } while (pwVar8 != pwVar9);
    }
  }
  else if (0 < iVar5) {
    if (this->End < this->CurPos + uVar7) {
      Extend(this,uVar7);
    }
    this->CurPos = this->CurPos + uVar7;
    pwVar8 = this->Base;
    pwVar9 = this->CurPos + -1;
    if (pwVar9 != pwVar8 + lVar10 + iVar2 + -1) {
      pwVar6 = pwVar9 + -uVar7;
      do {
        wVar1 = *pwVar6;
        pwVar6 = pwVar6 + -1;
        *pwVar9 = wVar1;
        pwVar9 = pwVar9 + -1;
      } while (pwVar9 != pwVar8 + lVar10 + iVar2 + -1);
    }
  }
  if (0 < iVar2) {
    memcpy(this->Base + lVar10,param_3->DataPtr,(longlong)iVar2 * 2);
  }
  return;
}

// Reserve @ 141967170

void __thiscall TStringBuilderBase<char>::Reserve(TStringBuilderBase<char> *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)&this->End - *(int *)&this->Base;
  if (iVar1 < param_1) {
    Extend(this,(longlong)(param_1 - iVar1));
    return;
  }
  return;
}

// Reserve @ 141967190

void __thiscall TStringBuilderBase<char8_t>::Reserve(TStringBuilderBase<char8_t> *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)&this->End - *(int *)&this->Base;
  if (iVar1 < param_1) {
    Extend(this,(longlong)(param_1 - iVar1));
    return;
  }
  return;
}

// Reserve @ 1419671b0

void __thiscall TStringBuilderBase<wchar_t>::Reserve(TStringBuilderBase<wchar_t> *this,int param_1)

{
  int iVar1;
  
  iVar1 = (int)((longlong)this->End - (longlong)this->Base >> 1);
  if (iVar1 < param_1) {
    Extend(this,(longlong)(param_1 - iVar1));
    return;
  }
  return;
}

// Reset @ 1419672c0

void __thiscall TStringBuilderBase<char>::Reset(TStringBuilderBase<char> *this)

{
  this->CurPos = this->Base;
  return;
}

// Reset @ 1419672d0

void __thiscall TStringBuilderBase<char8_t>::Reset(TStringBuilderBase<char8_t> *this)

{
  this->CurPos = this->Base;
  return;
}

// Reset @ 1419672e0

void __thiscall TStringBuilderBase<wchar_t>::Reset(TStringBuilderBase<wchar_t> *this)

{
  this->CurPos = this->Base;
  return;
}

// ToString @ 141971f40

char * __thiscall TStringBuilderBase<char>::ToString(TStringBuilderBase<char> *this)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = '\0';
  return this->Base;
}

// ToString @ 141971f80

char * __thiscall TStringBuilderBase<char>::ToString(TStringBuilderBase<char> *this)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = '\0';
  return this->Base;
}

// ToString @ 141971fc0

uchar * __thiscall TStringBuilderBase<char8_t>::ToString(TStringBuilderBase<char8_t> *this)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = '\0';
  return this->Base;
}

// ToString @ 141972000

uchar * __thiscall TStringBuilderBase<char8_t>::ToString(TStringBuilderBase<char8_t> *this)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = '\0';
  return this->Base;
}

// ToString @ 141972040

wchar_t * __thiscall TStringBuilderBase<wchar_t>::ToString(TStringBuilderBase<wchar_t> *this)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = L'\0';
  return this->Base;
}

// ToString @ 141972080

wchar_t * __thiscall TStringBuilderBase<wchar_t>::ToString(TStringBuilderBase<wchar_t> *this)

{
  if (this->End < this->CurPos + 1) {
    Extend(this,1);
  }
  *this->CurPos = L'\0';
  return this->Base;
}

// ToView @ 141973200

TStringView<char> * __thiscall
TStringBuilderBase<char>::ToView
          (TStringBuilderBase<char> *this,TStringView<char> *__return_storage_ptr__)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = this->Base;
  iVar1 = *(int *)&this->CurPos;
  __return_storage_ptr__->DataPtr = pcVar2;
  __return_storage_ptr__->Size = iVar1 - (int)pcVar2;
  return __return_storage_ptr__;
}

// ToView @ 141973220

TStringView<char8_t> * __thiscall
TStringBuilderBase<char8_t>::ToView
          (TStringBuilderBase<char8_t> *this,TStringView<char8_t> *__return_storage_ptr__)

{
  int iVar1;
  uchar *puVar2;
  
  puVar2 = this->Base;
  iVar1 = *(int *)&this->CurPos;
  __return_storage_ptr__->DataPtr = puVar2;
  __return_storage_ptr__->Size = iVar1 - (int)puVar2;
  return __return_storage_ptr__;
}

// ToView @ 141973240

TStringView<wchar_t> * __thiscall
TStringBuilderBase<wchar_t>::ToView
          (TStringBuilderBase<wchar_t> *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = this->Base;
  pwVar2 = this->CurPos;
  __return_storage_ptr__->DataPtr = pwVar1;
  __return_storage_ptr__->Size = (int)((longlong)pwVar2 - (longlong)pwVar1 >> 1);
  return __return_storage_ptr__;
}

