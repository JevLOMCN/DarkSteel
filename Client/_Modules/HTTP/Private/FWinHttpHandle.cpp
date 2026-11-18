// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 9

// FWinHttpHandle @ 14314eb70

FWinHttpHandle * __thiscall
FWinHttpHandle::FWinHttpHandle(FWinHttpHandle *this,FWinHttpHandle *param_1)

{
  this->Handle = param_1->Handle;
  param_1->Handle = (void *)0x0;
  return this;
}

// FWinHttpHandle @ 14314eb90

FWinHttpHandle * __thiscall FWinHttpHandle::FWinHttpHandle(FWinHttpHandle *this,void *param_1)

{
  this->Handle = param_1;
  return this;
}

// ~FWinHttpHandle @ 1431510c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWinHttpHandle::~FWinHttpHandle(FWinHttpHandle *this)

{
  int iVar1;
  DWORD DVar2;
  FStaticBasicLogRecord *pFVar3;
  
  if (this->Handle == (void *)0x0) {
    return;
  }
  iVar1 = WinHttpCloseHandle();
  if (iVar1 != 0) goto LAB_143151169;
  DVar2 = GetLastError();
  if (DVar2 == 8) {
    if ((byte)LogWinHttp._0_1_ < 2) goto LAB_143151169;
    pFVar3 = &::LOG_Static;
  }
  else if (DVar2 == 0x2ee4) {
    if ((byte)LogWinHttp._0_1_ < 2) goto LAB_143151169;
    pFVar3 = &::LOG_Static;
  }
  else {
    if (DVar2 != 0x2eec) {
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        this->Handle = (void *)0x0;
        return;
      }
      goto LAB_143151169;
    }
    if ((byte)LogWinHttp._0_1_ < 2) goto LAB_143151169;
    pFVar3 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar3,(FLogCategoryBase *)&LogWinHttp);
LAB_143151169:
  this->Handle = (void *)0x0;
  return;
}

// operator= @ 1431513e0

FWinHttpHandle * __thiscall FWinHttpHandle::operator=(FWinHttpHandle *this,FWinHttpHandle *param_1)

{
  void *pvVar1;
  
  if (this != param_1) {
    pvVar1 = param_1->Handle;
    param_1->Handle = this->Handle;
    this->Handle = pvVar1;
  }
  return this;
}

// operator= @ 143151400

FWinHttpHandle * __thiscall FWinHttpHandle::operator=(FWinHttpHandle *this,void *param_1)

{
  void *pvVar1;
  FWinHttpHandle local_18 [2];
  
  pvVar1 = this->Handle;
  if (pvVar1 != param_1) {
    local_18[0].Handle = param_1;
    if (this != local_18) {
      this->Handle = param_1;
      local_18[0].Handle = pvVar1;
    }
    ~FWinHttpHandle(local_18);
  }
  return this;
}

// operator_bool @ 143151450

bool __thiscall FWinHttpHandle::operator_bool(FWinHttpHandle *this)

{
  return this->Handle != (void *)0x0;
}

// Get @ 143160bc0

void * __thiscall FWinHttpHandle::Get(FWinHttpHandle *this)

{
  return this->Handle;
}

// IsValid @ 14316cf50

bool __thiscall FWinHttpHandle::IsValid(FWinHttpHandle *this)

{
  return this->Handle != (void *)0x0;
}

// Reset @ 143179650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWinHttpHandle::Reset(FWinHttpHandle *this)

{
  void *pvVar1;
  int iVar2;
  DWORD DVar3;
  FWinHttpHandle local_18 [3];
  
  if (this != local_18) {
    pvVar1 = this->Handle;
    this->Handle = (void *)0x0;
    if (pvVar1 != (void *)0x0) {
      iVar2 = WinHttpCloseHandle();
      if (iVar2 == 0) {
        DVar3 = GetLastError();
        if (DVar3 == 8) {
          if (1 < (byte)LogWinHttp._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
            return;
          }
        }
        else if (DVar3 == 0x2ee4) {
          if (1 < (byte)LogWinHttp._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
            return;
          }
        }
        else if (DVar3 == 0x2eec) {
          if (1 < (byte)LogWinHttp._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
            return;
          }
        }
        else if (1 < (byte)LogWinHttp._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
          return;
        }
      }
    }
  }
  return;
}

