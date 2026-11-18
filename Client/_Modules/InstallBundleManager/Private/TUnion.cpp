// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 2

// GetSubtype<FNull> @ 148bc0a10

FNull * __thiscall
TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull>::GetSubtype<FNull>
          (TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull> *this)

{
  code *pcVar1;
  bool bVar2;
  FNull *pFVar3;
  
  if (this->CurrentSubtypeIndex != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSubtypeIndex == SubtypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Union.h"
                       ,0xa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNull *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FNull *)this;
}

// TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull> @ 148bc2210

/* WARNING: Switch with 1 destination removed at 0x000148bc2387 : 6 cases all go to same destination
    */
/* WARNING: Switch with 1 destination removed at 0x000148bc23a3 : 6 cases all go to same destination
    */
/* WARNING: Switch with 1 destination removed at 0x000148bc23bf : 6 cases all go to same destination
    */
/* WARNING: Enum "Type": Some values do not have unique names */

TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull> * __thiscall
TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull>::
TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull>
          (TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull> *this,
          TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull> *param_1)

{
  uchar uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull> *pTVar5;
  
  this->CurrentSubtypeIndex = 0xff;
  uVar1 = param_1->CurrentSubtypeIndex;
  if (uVar1 == 0xff) {
    return this;
  }
  switch(uVar1) {
  case '\0':
    if ((uVar1 != '\0') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentSubtypeIndex == SubtypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Union.h"
                           ,0xa1,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull> *)(*pcVar2)();
      return pTVar5;
    }
    uVar1 = this->CurrentSubtypeIndex;
    switch(uVar1) {
    case '\0':
      if (uVar1 != '\0') {
        uVar3 = *(undefined8 *)((longlong)&param_1->Values + 8);
        *(undefined8 *)(this->Values).B.Pad = *(undefined8 *)(param_1->Values).B.Pad;
        *(undefined8 *)((longlong)&this->Values + 8) = uVar3;
        this->CurrentSubtypeIndex = '\0';
        return this;
      }
      break;
    case '\x01':
      if (uVar1 != '\x01') {
        uVar3 = *(undefined8 *)((longlong)&param_1->Values + 8);
        *(undefined8 *)(this->Values).B.Pad = *(undefined8 *)(param_1->Values).B.Pad;
        *(undefined8 *)((longlong)&this->Values + 8) = uVar3;
        this->CurrentSubtypeIndex = '\0';
        return this;
      }
      break;
    case '\x02':
    case '\x03':
    case '\x04':
      if (uVar1 != '\x02') {
        uVar3 = *(undefined8 *)((longlong)&param_1->Values + 8);
        *(undefined8 *)(this->Values).B.Pad = *(undefined8 *)(param_1->Values).B.Pad;
        *(undefined8 *)((longlong)&this->Values + 8) = uVar3;
        this->CurrentSubtypeIndex = '\0';
        return this;
      }
      break;
    case '\x05':
      if (uVar1 != '\x02') goto switchD_148bc2298_default;
      break;
    default:
      goto switchD_148bc2298_default;
    }
    this->CurrentSubtypeIndex = 0xff;
switchD_148bc2298_default:
    uVar3 = *(undefined8 *)((longlong)&param_1->Values + 8);
    *(undefined8 *)(this->Values).B.Pad = *(undefined8 *)(param_1->Values).B.Pad;
    *(undefined8 *)((longlong)&this->Values + 8) = uVar3;
    this->CurrentSubtypeIndex = '\0';
    return this;
  case '\x01':
    if ((uVar1 != '\x01') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentSubtypeIndex == SubtypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Union.h"
                           ,0xa1,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull> *)(*pcVar2)();
      return pTVar5;
    }
    *(undefined8 *)(this->Values).B.Pad = *(undefined8 *)(param_1->Values).B.Pad;
    this->CurrentSubtypeIndex = '\x01';
    return this;
  case '\x02':
    GetSubtype<FNull>(param_1);
    break;
  case '\x03':
    GetSubtype<FNull>(param_1);
    break;
  case '\x04':
    GetSubtype<FNull>(param_1);
    break;
  case '\x05':
    GetSubtype<FNull>(param_1);
    break;
  default:
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`private:_static_void___cdecl_TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull>::FatalErrorUndefinedSubtype(void)'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnion);
    return this;
  }
  this->CurrentSubtypeIndex = '\x02';
  return this;
}

