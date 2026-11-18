// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsLog
// Functions: 7

// `dynamic_initializer_for_'ModuleRegistrantAnalyticsLog'' @ 141445320

void __cdecl _dynamic_initializer_for__ModuleRegistrantAnalyticsLog__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AnalyticsLog";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AnalyticsLog",0xc);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAnalyticsLog>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14ea171c0

void * __thiscall FAnalyticsLog::_scalar_deleting_destructor_(FAnalyticsLog *this,uint param_1)

{
  *this = (FAnalyticsLog)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea177e0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FAnalyticsProviderLog::RecordEvent'::__l5::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *lpTlsValue;
  
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      puVar1 = TlsGetValue(SmallTaskAllocator._0_4_);
      lpTlsValue = (undefined8 *)0x0;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = ::operator_new(0x18);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)(puVar1 + 2) = 0;
          lpTlsValue = puVar1;
        }
        TlsSetValue(SmallTaskAllocator._0_4_,lpTlsValue);
        puVar1 = lpTlsValue;
      }
      if (0xff < *(int *)(puVar1 + 2)) {
        if ((void **)*puVar1 != (void **)0x0) {
          TLockFreePointerListLIFOPad<void_*,64>::Push
                    ((TLockFreePointerListLIFOPad<void_*,64> *)&SmallTaskAllocator.field_0x40,
                     (void **)*puVar1);
        }
        *puVar1 = puVar1[1];
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
      }
      *(undefined8 *)this = puVar1[1];
      *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + 1;
      puVar1[1] = this;
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea178d0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FAnalyticsProviderLog::RecordEvent'::__l5::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea17910

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnalyticsProviderLog,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAnalyticsProviderLog,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea17950

void * __thiscall
FAnalyticsProviderLog::_scalar_deleting_destructor_(FAnalyticsProviderLog *this,uint param_1)

{
  ~FAnalyticsProviderLog(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// IMPLEMENT_MODULE_AnalyticsLog @ 14ea185d0

void __cdecl IMPLEMENT_MODULE_AnalyticsLog(void)

{
  return;
}

