// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SQLiteCore
// Functions: 132

// GetColumnValueByIndex_Integer<signed_char> @ 14d11f530

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex_Integer<signed_char>
          (FSQLitePreparedStatement *this,int param_1,schar *param_2)

{
  long64 lVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      lVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = (schar)lVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex_Integer<unsigned_char> @ 14d11f5a0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex_Integer<unsigned_char>
          (FSQLitePreparedStatement *this,int param_1,uchar *param_2)

{
  long64 lVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      lVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = (uchar)lVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex_Integer<short> @ 14d11f610

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex_Integer<short>
          (FSQLitePreparedStatement *this,int param_1,short *param_2)

{
  long64 lVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      lVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = (short)lVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex_Integer<unsigned_short> @ 14d11f680

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex_Integer<unsigned_short>
          (FSQLitePreparedStatement *this,int param_1,ushort *param_2)

{
  long64 lVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      lVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = (ushort)lVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex_Integer<int> @ 14d11f6f0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex_Integer<int>
          (FSQLitePreparedStatement *this,int param_1,int *param_2)

{
  long64 lVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      lVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = (int)lVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex_Integer<unsigned_int> @ 14d11f760

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex_Integer<unsigned_int>
          (FSQLitePreparedStatement *this,int param_1,uint *param_2)

{
  long64 lVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      lVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = (uint)lVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex_Integer<__int64> @ 14d11f7d0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex_Integer<__int64>
          (FSQLitePreparedStatement *this,int param_1,long64 *param_2)

{
  long64 lVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      lVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = lVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex_Integer<unsigned___int64> @ 14d11f840

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex_Integer<unsigned___int64>
          (FSQLitePreparedStatement *this,int param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      uVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = uVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex_Real<float> @ 14d11f8b0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex_Real<float>
          (FSQLitePreparedStatement *this,int param_1,float *param_2)

{
  double dVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      dVar1 = sqlite3_column_double(this->Statement,param_1);
      *param_2 = (float)dVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex_Real<double> @ 14d11f920

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex_Real<double>
          (FSQLitePreparedStatement *this,int param_1,double *param_2)

{
  double dVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      dVar1 = sqlite3_column_double(this->Statement,param_1);
      *param_2 = dVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName_Integer<signed_char> @ 14d11f990

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName_Integer<signed_char>
          (FSQLitePreparedStatement *this,wchar_t *param_1,schar *param_2)

{
  int iVar1;
  long64 lVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      lVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = (schar)lVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName_Integer<unsigned_char> @ 14d11fa00

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName_Integer<unsigned_char>
          (FSQLitePreparedStatement *this,wchar_t *param_1,uchar *param_2)

{
  int iVar1;
  long64 lVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      lVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = (uchar)lVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName_Integer<short> @ 14d11fa70

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName_Integer<short>
          (FSQLitePreparedStatement *this,wchar_t *param_1,short *param_2)

{
  int iVar1;
  long64 lVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      lVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = (short)lVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName_Integer<unsigned_short> @ 14d11fae0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName_Integer<unsigned_short>
          (FSQLitePreparedStatement *this,wchar_t *param_1,ushort *param_2)

{
  int iVar1;
  long64 lVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      lVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = (ushort)lVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName_Integer<int> @ 14d11fb50

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName_Integer<int>
          (FSQLitePreparedStatement *this,wchar_t *param_1,int *param_2)

{
  int iVar1;
  long64 lVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      lVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = (int)lVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName_Integer<unsigned_int> @ 14d11fbc0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName_Integer<unsigned_int>
          (FSQLitePreparedStatement *this,wchar_t *param_1,uint *param_2)

{
  int iVar1;
  long64 lVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      lVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = (uint)lVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName_Integer<__int64> @ 14d11fc30

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName_Integer<__int64>
          (FSQLitePreparedStatement *this,wchar_t *param_1,long64 *param_2)

{
  int iVar1;
  long64 lVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      lVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = lVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName_Integer<unsigned___int64> @ 14d11fca0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName_Integer<unsigned___int64>
          (FSQLitePreparedStatement *this,wchar_t *param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 uVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      uVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = uVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName_Real<float> @ 14d11fd10

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName_Real<float>
          (FSQLitePreparedStatement *this,wchar_t *param_1,float *param_2)

{
  int iVar1;
  double dVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      dVar2 = sqlite3_column_double(this->Statement,iVar1);
      *param_2 = (float)dVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName_Real<double> @ 14d11fd90

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName_Real<double>
          (FSQLitePreparedStatement *this,wchar_t *param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      dVar2 = sqlite3_column_double(this->Statement,iVar1);
      *param_2 = dVar2;
      return true;
    }
  }
  return false;
}

// SetBindingValueByIndex_Integer<signed_char> @ 14d11fe90

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex_Integer<signed_char>
          (FSQLitePreparedStatement *this,int param_1,schar param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,(longlong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex_Integer<unsigned_char> @ 14d11fed0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex_Integer<unsigned_char>
          (FSQLitePreparedStatement *this,int param_1,uchar param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,(ulonglong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex_Integer<short> @ 14d11ff10

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex_Integer<short>
          (FSQLitePreparedStatement *this,int param_1,short param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,(longlong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex_Integer<unsigned_short> @ 14d11ff50

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex_Integer<unsigned_short>
          (FSQLitePreparedStatement *this,int param_1,ushort param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,(ulonglong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex_Integer<int> @ 14d11ff90

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex_Integer<int>
          (FSQLitePreparedStatement *this,int param_1,int param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,(longlong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex_Integer<unsigned_int> @ 14d11ffc0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex_Integer<unsigned_int>
          (FSQLitePreparedStatement *this,int param_1,uint param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,(ulonglong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex_Integer<__int64> @ 14d11fff0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex_Integer<__int64>
          (FSQLitePreparedStatement *this,int param_1,long64 param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex_Integer<unsigned___int64> @ 14d120020

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex_Integer<unsigned___int64>
          (FSQLitePreparedStatement *this,int param_1,ulong64 param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex_Real<float> @ 14d120050

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex_Real<float>
          (FSQLitePreparedStatement *this,int param_1,float param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_double(this->Statement,param_1,(double)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex_Real<double> @ 14d120090

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex_Real<double>
          (FSQLitePreparedStatement *this,int param_1,double param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_double(this->Statement,param_1,param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName_Integer<signed_char> @ 14d1200c0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName_Integer<signed_char>
          (FSQLitePreparedStatement *this,wchar_t *param_1,schar param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,(longlong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName_Integer<unsigned_char> @ 14d120110

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName_Integer<unsigned_char>
          (FSQLitePreparedStatement *this,wchar_t *param_1,uchar param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,(ulonglong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName_Integer<short> @ 14d120160

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName_Integer<short>
          (FSQLitePreparedStatement *this,wchar_t *param_1,short param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,(longlong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName_Integer<unsigned_short> @ 14d1201b0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName_Integer<unsigned_short>
          (FSQLitePreparedStatement *this,wchar_t *param_1,ushort param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,(ulonglong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName_Integer<int> @ 14d120200

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName_Integer<int>
          (FSQLitePreparedStatement *this,wchar_t *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,(longlong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName_Integer<unsigned_int> @ 14d120250

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName_Integer<unsigned_int>
          (FSQLitePreparedStatement *this,wchar_t *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,(ulonglong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName_Integer<__int64> @ 14d1202a0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName_Integer<__int64>
          (FSQLitePreparedStatement *this,wchar_t *param_1,long64 param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName_Integer<unsigned___int64> @ 14d1202f0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName_Integer<unsigned___int64>
          (FSQLitePreparedStatement *this,wchar_t *param_1,ulong64 param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName_Real<float> @ 14d120340

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName_Real<float>
          (FSQLitePreparedStatement *this,wchar_t *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_double(this->Statement,iVar1,(double)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName_Real<double> @ 14d1203a0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName_Real<double>
          (FSQLitePreparedStatement *this,wchar_t *param_1,double param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_double(this->Statement,iVar1,param_2);
    return iVar1 == 0;
  }
  return false;
}

// FSQLitePreparedStatement @ 14d120470

FSQLitePreparedStatement * __thiscall
FSQLitePreparedStatement::FSQLitePreparedStatement
          (FSQLitePreparedStatement *this,FSQLitePreparedStatement *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &param_1->CachedColumnNames;
  this->Statement = param_1->Statement;
  piVar2 = &(param_1->CachedColumnNames).ArrayMax;
  (this->CachedColumnNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedColumnNames).AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CachedColumnNames).ArrayNum = (param_1->CachedColumnNames).ArrayNum;
  (this->CachedColumnNames).ArrayMax = *piVar2;
  (param_1->CachedColumnNames).ArrayNum = 0;
  *piVar2 = 0;
  param_1->Statement = (sqlite3_stmt *)0x0;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  iVar3 = (param_1->CachedColumnNames).ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<FString,int>((FString *)pFVar4,iVar3);
    (param_1->CachedColumnNames).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar4,iVar3);
    (param_1->CachedColumnNames).ArrayNum = 0;
  }
  return this;
}

// FSQLitePreparedStatement @ 14d120520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FSQLitePreparedStatement * __thiscall
FSQLitePreparedStatement::FSQLitePreparedStatement
          (FSQLitePreparedStatement *this,FSQLiteDatabase *param_1,wchar_t *param_2,
          ESQLitePreparedStatementFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSQLitePreparedStatement *pFVar4;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar5;
  undefined1 auStackY_118 [32];
  FString local_e8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this->Statement = (sqlite3_stmt *)0x0;
  (this->CachedColumnNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedColumnNames).ArrayNum = 0;
  (this->CachedColumnNames).ArrayMax = 0;
  if ((param_1->Database == (sqlite3 *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDatabase.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
                         ,0x46,L"Tried to create a prepared statement from an invalid database!"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FSQLitePreparedStatement *)(*pcVar1)();
    return pFVar4;
  }
  if (this->Statement == (sqlite3_stmt *)0x0) {
    pTVar5 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
             TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                       (&local_d8,param_2);
    iVar3 = sqlite3_prepare_v3(param_1->Database,pTVar5->Ptr,-1,param_3 & 1,&this->Statement,
                               (char **)0x0);
    if ((void *)local_d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    if ((iVar3 != 0) && (2 < (byte)LogSQLitePreparedStatement._0_1_)) {
      FSQLiteDatabase::GetLastError(param_1,&local_e8);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogSQLitePreparedStatement);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
  }
  return this;
}

// FSQLitePreparedStatement @ 14d120650

FSQLitePreparedStatement * __thiscall
FSQLitePreparedStatement::FSQLitePreparedStatement(FSQLitePreparedStatement *this)

{
  this->Statement = (sqlite3_stmt *)0x0;
  (this->CachedColumnNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedColumnNames).ArrayNum = 0;
  (this->CachedColumnNames).ArrayMax = 0;
  return this;
}

// ~FSQLitePreparedStatement @ 14d1206e0

void __thiscall FSQLitePreparedStatement::~FSQLitePreparedStatement(FSQLitePreparedStatement *this)

{
  FScriptContainerElement *pFVar1;
  
  Destroy(this);
  DestructItems<FString,int>
            ((FString *)(this->CachedColumnNames).AllocatorInstance.Data,
             (this->CachedColumnNames).ArrayNum);
  pFVar1 = (this->CachedColumnNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14d120770

FSQLitePreparedStatement * __thiscall
FSQLitePreparedStatement::operator=
          (FSQLitePreparedStatement *this,FSQLitePreparedStatement *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (this != param_1) {
    Destroy(this);
    pTVar1 = &this->CachedColumnNames;
    this->Statement = param_1->Statement;
    param_1->Statement = (sqlite3_stmt *)0x0;
    pTVar5 = &param_1->CachedColumnNames;
    if (pTVar1 != pTVar5) {
      DestructItems<FString,int>
                ((FString *)(pTVar1->AllocatorInstance).Data,(this->CachedColumnNames).ArrayNum);
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      piVar4 = &(param_1->CachedColumnNames).ArrayMax;
      (pTVar1->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
      (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->CachedColumnNames).ArrayNum = (param_1->CachedColumnNames).ArrayNum;
      (this->CachedColumnNames).ArrayMax = *piVar4;
      (param_1->CachedColumnNames).ArrayNum = 0;
      *piVar4 = 0;
    }
    piVar4 = &(param_1->CachedColumnNames).ArrayMax;
    pFVar3 = (pTVar5->AllocatorInstance).Data;
    iVar2 = (param_1->CachedColumnNames).ArrayNum;
    if (*piVar4 < 0) {
      DestructItems<FString,int>((FString *)pFVar3,iVar2);
      (param_1->CachedColumnNames).ArrayNum = 0;
      if (*piVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar5->AllocatorInstance,0,piVar4);
      }
    }
    else {
      DestructItems<FString,int>((FString *)pFVar3,iVar2);
      (param_1->CachedColumnNames).ArrayNum = 0;
    }
  }
  return this;
}

// CacheColumnNames @ 14d120d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSQLitePreparedStatement::CacheColumnNames(FSQLitePreparedStatement *this)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar5;
  bool bVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined1 auStackY_198 [32];
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar6 = false;
  if ((this->Statement != (sqlite3_stmt *)0x0) && ((this->CachedColumnNames).ArrayNum < 1)) {
    uVar2 = sqlite3_column_count(this->Statement);
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &(this->CachedColumnNames).ArrayMax;
    if ((this->CachedColumnNames).ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar2,&(this->CachedColumnNames).AllocatorInstance,
                 (this->CachedColumnNames).ArrayNum,piVar1);
    }
    iVar8 = 0;
    if (0 < (int)uVar2) {
      do {
        pcVar4 = sqlite3_column_name(this->Statement,iVar8);
        if (pcVar4 == (char *)0x0) {
          pwVar7 = L"";
        }
        else {
          bVar6 = true;
          pTVar5 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
                   TStringConversion<FUTF8ToTCHAR_Convert,128>(&local_158,pcVar4);
          pwVar7 = pTVar5->Ptr;
        }
        iVar3 = (this->CachedColumnNames).ArrayNum;
        if (iVar3 == *piVar1) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->CachedColumnNames).AllocatorInstance,piVar1);
          (this->CachedColumnNames).ArrayNum = iVar3;
        }
        (this->CachedColumnNames).ArrayNum = iVar3 + 1;
        ::FString::FString((FString *)
                           ((this->CachedColumnNames).AllocatorInstance.Data +
                           (longlong)iVar3 * 0x10),pwVar7);
        if ((bVar6) && (bVar6 = false, (void *)local_158._padding_ != (void *)0x0)) {
          FMemory::Free((void *)local_158._padding_);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)uVar2);
    }
  }
  return;
}

// ClearBindings @ 14d1210d0

void __thiscall FSQLitePreparedStatement::ClearBindings(FSQLitePreparedStatement *this)

{
  sqlite3_stmt *psVar1;
  sqlite3_mutex *psVar2;
  sqlite3_value *psVar3;
  int iVar4;
  longlong lVar5;
  
  psVar1 = this->Statement;
  if (psVar1 != (sqlite3_stmt *)0x0) {
    psVar2 = *(sqlite3_mutex **)(*(longlong *)psVar1 + 0x18);
    if (psVar2 != (sqlite3_mutex *)0x0) {
      (*sqlite3Config.mutex.xMutexEnter)(psVar2);
    }
    iVar4 = 0;
    if (0 < *(short *)(psVar1 + 0x20)) {
      lVar5 = 0;
      do {
        psVar3 = (sqlite3_value *)(*(longlong *)(psVar1 + 0x80) + lVar5);
        if (((psVar3->flags & 0x9000) != 0) || (psVar3->szMalloc != 0)) {
          vdbeMemClear(psVar3);
        }
        iVar4 = iVar4 + 1;
        *(undefined2 *)(lVar5 + 0x14 + *(longlong *)(psVar1 + 0x80)) = 1;
        lVar5 = lVar5 + 0x38;
      } while (iVar4 < *(short *)(psVar1 + 0x20));
    }
    if (*(int *)(psVar1 + 0x11c) != 0) {
      *(uint *)(psVar1 + 200) = *(uint *)(psVar1 + 200) & 0xfffffffd;
      *(uint *)(psVar1 + 200) = *(uint *)(psVar1 + 200) | 1;
    }
    if (psVar2 != (sqlite3_mutex *)0x0) {
      (*sqlite3Config.mutex.xMutexLeave)(psVar2);
    }
    return;
  }
  return;
}

// Create @ 14d1212f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSQLitePreparedStatement::Create
          (FSQLitePreparedStatement *this,FSQLiteDatabase *param_1,wchar_t *param_2,
          ESQLitePreparedStatementFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar5;
  undefined1 auStackY_108 [32];
  FString local_d8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((param_1->Database == (sqlite3 *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDatabase.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
                         ,0x46,L"Tried to create a prepared statement from an invalid database!"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (this->Statement == (sqlite3_stmt *)0x0) {
    pTVar5 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
             TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                       (&local_c8,param_2);
    iVar4 = sqlite3_prepare_v3(param_1->Database,pTVar5->Ptr,-1,param_3 & 1,&this->Statement,
                               (char **)0x0);
    if ((void *)local_c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._padding_);
    }
    if (iVar4 == 0) {
      return true;
    }
    if (2 < (byte)LogSQLitePreparedStatement._0_1_) {
      FSQLiteDatabase::GetLastError(param_1,&local_d8);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogSQLitePreparedStatement);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// Destroy @ 14d1216b0

bool __thiscall FSQLitePreparedStatement::Destroy(FSQLitePreparedStatement *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (this->Statement == (sqlite3_stmt *)0x0) {
    return false;
  }
  sqlite3_finalize(this->Statement);
  piVar1 = &(this->CachedColumnNames).ArrayMax;
  this->Statement = (sqlite3_stmt *)0x0;
  pFVar3 = (this->CachedColumnNames).AllocatorInstance.Data;
  iVar2 = (this->CachedColumnNames).ArrayNum;
  if (-1 < *piVar1) {
    DestructItems<FString,int>((FString *)pFVar3,iVar2);
    (this->CachedColumnNames).ArrayNum = 0;
    return true;
  }
  DestructItems<FString,int>((FString *)pFVar3,iVar2);
  (this->CachedColumnNames).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->CachedColumnNames).AllocatorInstance,0,piVar1);
  }
  return true;
}

// Execute @ 14d121bc0

long64 __thiscall
FSQLitePreparedStatement::Execute
          (FSQLitePreparedStatement *this,
          TFunctionRef<ESQLitePreparedStatementExecuteRowResult___cdecl(FSQLitePreparedStatement_const_&)>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long64 lVar6;
  char cVar7;
  bool bVar8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId395,"FSQLitePreparedStatement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
               ,0x18b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId395);
  }
  if (((this->Statement == (sqlite3_stmt *)0x0) ||
      (iVar4 = sqlite3_stmt_busy(this->Statement), iVar4 != 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid() && !IsActive()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Database\\SQLiteCore\\Source\\SQLiteCore\\Private\\SQLitePreparedStatement.cpp"
                         ,0x18c,L"SQLite statement must be valid and not-active!"), bVar2)) {
    pcVar1 = (code *)swi(3);
    lVar6 = (*pcVar1)();
    return lVar6;
  }
  lVar6 = 0;
  do {
    if (this->Statement == (sqlite3_stmt *)0x0) goto LAB_14d121c95;
    uVar5 = sqlite3_step(this->Statement);
    uVar5 = uVar5 & 0xff;
    if (uVar5 == 5) {
      cVar7 = '\x01';
      goto LAB_14d121c98;
    }
    if (uVar5 != 100) {
      if (uVar5 != 0x65) goto LAB_14d121c95;
      cVar7 = '\x03';
      goto LAB_14d121c98;
    }
    cVar7 = '\x02';
    lVar6 = lVar6 + 1;
    cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,this);
  } while (cVar3 == '\0');
  if (cVar3 == '\x02') {
LAB_14d121c95:
    cVar7 = '\0';
  }
LAB_14d121c98:
  if (this->Statement != (sqlite3_stmt *)0x0) {
    sqlite3_reset(this->Statement);
  }
  if (cVar7 == '\0') {
    lVar6 = -1;
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return lVar6;
}

// Execute @ 14d121cf0

bool __thiscall FSQLitePreparedStatement::Execute(FSQLitePreparedStatement *this)

{
  long64 lVar1;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSQLitePreparedStatement::Execute'::__l2::<lambda_1>,enum_ESQLitePreparedStatementExecuteRowResult,FSQLitePreparedStatement_const_&>
             ::Call;
  lVar1 = Execute(this,(TFunctionRef<ESQLitePreparedStatementExecuteRowResult___cdecl(FSQLitePreparedStatement_const_&)>
                        *)&local_18);
  return lVar1 != -1;
}

// GetBindingIndexByName @ 14d122050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FSQLitePreparedStatement::GetBindingIndexByName(FSQLitePreparedStatement *this,wchar_t *param_1)

{
  int iVar1;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar2;
  undefined1 auStack_d8 [32];
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (this->Statement == (sqlite3_stmt *)0x0) {
    iVar1 = 0;
  }
  else {
    pTVar2 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
             TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                       (&local_b8,param_1);
    iVar1 = sqlite3_bind_parameter_index(this->Statement,pTVar2->Ptr);
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
  }
  return iVar1;
}

// GetColumnIndexByName @ 14d1220d0

int __thiscall
FSQLitePreparedStatement::GetColumnIndexByName(FSQLitePreparedStatement *this,wchar_t *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  
  CacheColumnNames(this);
  pFVar2 = (this->CachedColumnNames).AllocatorInstance.Data;
  iVar1 = (this->CachedColumnNames).ArrayNum;
  pFVar5 = pFVar2;
  while( true ) {
    if (pFVar5 == pFVar2 + (longlong)iVar1 * 0x10) {
      return -1;
    }
    if (*(int *)(pFVar5 + 8) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)pFVar5;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,param_1);
    if (iVar3 == 0) break;
    pFVar5 = pFVar5 + 0x10;
  }
  return (int)((longlong)pFVar5 - (longlong)pFVar2 >> 4);
}

// GetColumnNames @ 14d122160

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FSQLitePreparedStatement::GetColumnNames(FSQLitePreparedStatement *this)

{
  CacheColumnNames(this);
  return &this->CachedColumnNames;
}

// GetColumnTypeByIndex @ 14d122180

bool __thiscall
FSQLitePreparedStatement::GetColumnTypeByIndex
          (FSQLitePreparedStatement *this,int param_1,ESQLiteColumnType *param_2)

{
  int iVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      iVar1 = sqlite3_column_type(this->Statement,param_1);
      if (iVar1 == 1) {
        *param_2 = Integer;
      }
      else {
        if (iVar1 == 2) {
          *param_2 = Float;
          return true;
        }
        if (iVar1 == 3) {
          *param_2 = String;
          return true;
        }
        if (iVar1 == 4) {
          *param_2 = Blob;
          return true;
        }
        if (iVar1 == 5) {
          *param_2 = Null;
          return true;
        }
      }
      return true;
    }
  }
  return false;
}

// GetColumnTypeByName @ 14d122260

bool __thiscall
FSQLitePreparedStatement::GetColumnTypeByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,ESQLiteColumnType *param_2)

{
  int iVar1;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      iVar1 = sqlite3_column_type(this->Statement,iVar1);
      if (iVar1 == 1) {
        *param_2 = Integer;
      }
      else {
        if (iVar1 == 2) {
          *param_2 = Float;
          return true;
        }
        if (iVar1 == 3) {
          *param_2 = String;
          return true;
        }
        if (iVar1 == 4) {
          *param_2 = Blob;
          return true;
        }
        if (iVar1 == 5) {
          *param_2 = Null;
          return true;
        }
      }
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex @ 14d122350

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,schar *param_2)

{
  long64 lVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      lVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = (schar)lVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex @ 14d1223c0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,uchar *param_2)

{
  long64 lVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      lVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = (uchar)lVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex @ 14d122430

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,short *param_2)

{
  long64 lVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      lVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = (short)lVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex @ 14d1224a0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,ushort *param_2)

{
  long64 lVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      lVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = (ushort)lVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex @ 14d122510

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,int *param_2)

{
  long64 lVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      lVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = (int)lVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex @ 14d122580

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,uint *param_2)

{
  long64 lVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      lVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = (uint)lVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex @ 14d1225f0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,float *param_2)

{
  double dVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      dVar1 = sqlite3_column_double(this->Statement,param_1);
      *param_2 = (float)dVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex @ 14d122660

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,double *param_2)

{
  double dVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      dVar1 = sqlite3_column_double(this->Statement,param_1);
      *param_2 = dVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex @ 14d1226d0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,FDateTime *param_2)

{
  long64 lVar1;
  FDateTime *pFVar2;
  FDateTime local_res8;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      lVar1 = sqlite3_column_int64(this->Statement,param_1);
      pFVar2 = FDateTime::FDateTime(&local_res8,0x7b2,1,1,0,0,0,0);
      param_2->Ticks = pFVar2->Ticks + lVar1 * 10000000;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex @ 14d122770

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,FGuid *param_2)

{
  bool bVar1;
  byte bVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_c8;
  FArchiveState local_b8;
  undefined8 local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 local_18;
  
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  bVar1 = GetColumnValueByIndex(this,param_1,&local_c8);
  if (bVar1) {
    local_b8._padding_ = 0;
    local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_b8._40_8_ = 0;
    local_b8.ArSerializingDefaults = 0;
    local_b8.ArPortFlags = 0;
    local_b8.ArMaxSerializeSize = 0;
    local_b8.ArUEVer.FileVersionUE4 = 0;
    local_b8.ArUEVer.FileVersionUE5 = 0;
    local_b8.ArLicenseeUEVer = 0;
    local_b8.ArEngineVer.Major = 0;
    local_b8.ArEngineVer.Minor = 0;
    local_b8.ArEngineVer.Patch = 0;
    local_b8.ArEngineVer._6_2_ = 0;
    local_b8.ArEngineVer.Changelist = 0;
    local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_b8.SerializedProperty = (FProperty *)0x0;
    local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_b8.bCustomVersionsAreReset = false;
    local_b8._129_7_ = 0;
    local_b8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_b8);
    local_28 = 0;
    local_b8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_20 = &local_c8;
    local_18 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_b8,true);
    (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
    ::operator<<((FArchive *)&local_b8,param_2);
    bVar2 = local_b8.ArIsError;
    FArchive::~FArchive((FArchive *)&local_b8);
    bVar1 = (bool)(bVar2 ^ 1);
  }
  else {
    bVar1 = false;
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetColumnValueByIndex @ 14d122870

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  void *_Src;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      _Src = sqlite3_column_blob(this->Statement,param_1);
      iVar4 = sqlite3_column_bytes(this->Statement,param_1);
      param_2->ArrayNum = 0;
      if (param_2->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
      }
      if ((_Src == (void *)0x0) && (iVar4 != 0)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar4,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax
                        );
      if (iVar4 != 0) {
        memcpy((param_2->AllocatorInstance).Data + iVar5,_Src,(longlong)iVar4);
      }
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex @ 14d1229b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,FName *param_2)

{
  uchar *puVar1;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar2;
  FName *pFVar3;
  wchar_t *pwVar4;
  undefined1 auStack_178 [32];
  FName local_158 [2];
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158[0].ComparisonIndex.Value = 0;
  if (((this->Statement != (sqlite3_stmt *)0x0) && (CacheColumnNames(this), -1 < param_1)) &&
     (param_1 < (this->CachedColumnNames).ArrayNum)) {
    puVar1 = sqlite3_column_text(this->Statement,param_1);
    if (puVar1 == (uchar *)0x0) {
      pwVar4 = L"";
    }
    else {
      pTVar2 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
               TStringConversion<FUTF8ToTCHAR_Convert,128>(&local_148,(char *)puVar1);
      pwVar4 = pTVar2->Ptr;
    }
    pFVar3 = ::FName::FName(local_158,pwVar4);
    *param_2 = *pFVar3;
    if ((puVar1 != (uchar *)0x0) && ((void *)local_148._padding_ != (void *)0x0)) {
      FMemory::Free((void *)local_148._padding_);
    }
    return true;
  }
  return false;
}

// GetColumnValueByIndex @ 14d122a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,FString *param_2)

{
  uchar *puVar1;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar2;
  wchar_t *pwVar3;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158 = 0;
  if (((this->Statement != (sqlite3_stmt *)0x0) && (CacheColumnNames(this), -1 < param_1)) &&
     (param_1 < (this->CachedColumnNames).ArrayNum)) {
    puVar1 = sqlite3_column_text(this->Statement,param_1);
    if (puVar1 == (uchar *)0x0) {
      pwVar3 = L"";
    }
    else {
      pTVar2 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
               TStringConversion<FUTF8ToTCHAR_Convert,128>(&local_148,(char *)puVar1);
      pwVar3 = pTVar2->Ptr;
    }
    ::FString::operator=(param_2,pwVar3);
    if ((puVar1 != (uchar *)0x0) && ((void *)local_148._padding_ != (void *)0x0)) {
      FMemory::Free((void *)local_148._padding_);
    }
    return true;
  }
  return false;
}

// GetColumnValueByIndex @ 14d122b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,FText *param_2)

{
  uchar *puVar1;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar2;
  FText *pFVar3;
  wchar_t *pwVar4;
  undefined1 auStack_198 [32];
  FText local_160;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (((this->Statement != (sqlite3_stmt *)0x0) && (CacheColumnNames(this), -1 < param_1)) &&
     (param_1 < (this->CachedColumnNames).ArrayNum)) {
    puVar1 = sqlite3_column_text(this->Statement,param_1);
    if (puVar1 == (uchar *)0x0) {
      pwVar4 = L"";
    }
    else {
      pTVar2 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
               TStringConversion<FUTF8ToTCHAR_Convert,128>(&local_148,(char *)puVar1);
      pwVar4 = pTVar2->Ptr;
    }
    pFVar3 = FTextStringHelper::CreateFromBuffer
                       (&local_160,pwVar4,(wchar_t *)0x0,(wchar_t *)0x0,false);
    FText::operator=(param_2,pFVar3);
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
    if ((puVar1 != (uchar *)0x0) && ((void *)local_148._padding_ != (void *)0x0)) {
      FMemory::Free((void *)local_148._padding_);
    }
    return true;
  }
  return false;
}

// GetColumnValueByIndex @ 14d122c50

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,long64 *param_2)

{
  long64 lVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      lVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = lVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByIndex @ 14d122cc0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByIndex
          (FSQLitePreparedStatement *this,int param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
      uVar1 = sqlite3_column_int64(this->Statement,param_1);
      *param_2 = uVar1;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName @ 14d122d30

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,schar *param_2)

{
  int iVar1;
  long64 lVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      lVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = (schar)lVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName @ 14d122da0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,uchar *param_2)

{
  int iVar1;
  long64 lVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      lVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = (uchar)lVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName @ 14d122e10

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,short *param_2)

{
  int iVar1;
  long64 lVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      lVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = (short)lVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName @ 14d122e80

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,ushort *param_2)

{
  int iVar1;
  long64 lVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      lVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = (ushort)lVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName @ 14d122ef0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,int *param_2)

{
  int iVar1;
  long64 lVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      lVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = (int)lVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName @ 14d122f60

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,uint *param_2)

{
  int iVar1;
  long64 lVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      lVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = (uint)lVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName @ 14d122fd0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,float *param_2)

{
  int iVar1;
  double dVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      dVar2 = sqlite3_column_double(this->Statement,iVar1);
      *param_2 = (float)dVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName @ 14d123050

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      dVar2 = sqlite3_column_double(this->Statement,iVar1);
      *param_2 = dVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName @ 14d1230c0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,FDateTime *param_2)

{
  int iVar1;
  long64 lVar2;
  FDateTime *pFVar3;
  FDateTime local_res8;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      lVar2 = sqlite3_column_int64(this->Statement,iVar1);
      pFVar3 = FDateTime::FDateTime(&local_res8,0x7b2,1,1,0,0,0,0);
      param_2->Ticks = pFVar3->Ticks + lVar2 * 10000000;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName @ 14d123170

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,FGuid *param_2)

{
  bool bVar1;
  int iVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_c8;
  FArchiveState local_b8;
  undefined8 local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 local_18;
  
  iVar2 = GetColumnIndexByName(this,param_1);
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  bVar1 = GetColumnValueByIndex(this,iVar2,&local_c8);
  if (bVar1) {
    local_b8._padding_ = 0;
    local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_b8._40_8_ = 0;
    local_b8.ArSerializingDefaults = 0;
    local_b8.ArPortFlags = 0;
    local_b8.ArMaxSerializeSize = 0;
    local_b8.ArUEVer.FileVersionUE4 = 0;
    local_b8.ArUEVer.FileVersionUE5 = 0;
    local_b8.ArLicenseeUEVer = 0;
    local_b8.ArEngineVer.Major = 0;
    local_b8.ArEngineVer.Minor = 0;
    local_b8.ArEngineVer.Patch = 0;
    local_b8.ArEngineVer._6_2_ = 0;
    local_b8.ArEngineVer.Changelist = 0;
    local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_b8.SerializedProperty = (FProperty *)0x0;
    local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_b8.bCustomVersionsAreReset = false;
    local_b8._129_7_ = 0;
    local_b8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_b8);
    local_28 = 0;
    local_b8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_20 = &local_c8;
    local_18 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_b8,true);
    (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
    ::operator<<((FArchive *)&local_b8,param_2);
    bVar1 = (bool)(~local_b8.ArIsError & 1);
    FArchive::~FArchive((FArchive *)&local_b8);
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
  }
  else {
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  return bVar1;
}

// GetColumnValueByName @ 14d123290

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = GetColumnIndexByName(this,param_1);
  bVar1 = GetColumnValueByIndex(this,iVar2,param_2);
  return bVar1;
}

// GetColumnValueByName @ 14d1232d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,FName *param_2)

{
  int iVar1;
  uchar *puVar2;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar3;
  FName *pFVar4;
  wchar_t *pwVar5;
  undefined1 auStack_178 [32];
  FName local_158 [2];
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158[0].ComparisonIndex.Value = 0;
  iVar1 = GetColumnIndexByName(this,param_1);
  if (((this->Statement != (sqlite3_stmt *)0x0) && (CacheColumnNames(this), -1 < iVar1)) &&
     (iVar1 < (this->CachedColumnNames).ArrayNum)) {
    puVar2 = sqlite3_column_text(this->Statement,iVar1);
    if (puVar2 == (uchar *)0x0) {
      pwVar5 = L"";
    }
    else {
      pTVar3 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
               TStringConversion<FUTF8ToTCHAR_Convert,128>(&local_148,(char *)puVar2);
      pwVar5 = pTVar3->Ptr;
    }
    pFVar4 = ::FName::FName(local_158,pwVar5);
    *param_2 = *pFVar4;
    if ((puVar2 != (uchar *)0x0) && ((void *)local_148._padding_ != (void *)0x0)) {
      FMemory::Free((void *)local_148._padding_);
    }
    return true;
  }
  return false;
}

// GetColumnValueByName @ 14d1233b0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,FString *param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = GetColumnIndexByName(this,param_1);
  bVar1 = GetColumnValueByIndex(this,iVar2,param_2);
  return bVar1;
}

// GetColumnValueByName @ 14d1233f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,FText *param_2)

{
  int iVar1;
  uchar *puVar2;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar3;
  FText *pFVar4;
  wchar_t *pwVar5;
  undefined1 auStack_198 [32];
  FText local_160;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  iVar1 = GetColumnIndexByName(this,param_1);
  if (((this->Statement != (sqlite3_stmt *)0x0) && (CacheColumnNames(this), -1 < iVar1)) &&
     (iVar1 < (this->CachedColumnNames).ArrayNum)) {
    puVar2 = sqlite3_column_text(this->Statement,iVar1);
    if (puVar2 == (uchar *)0x0) {
      pwVar5 = L"";
    }
    else {
      pTVar3 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
               TStringConversion<FUTF8ToTCHAR_Convert,128>(&local_148,(char *)puVar2);
      pwVar5 = pTVar3->Ptr;
    }
    pFVar4 = FTextStringHelper::CreateFromBuffer
                       (&local_160,pwVar5,(wchar_t *)0x0,(wchar_t *)0x0,false);
    FText::operator=(param_2,pFVar4);
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
    if ((puVar2 != (uchar *)0x0) && ((void *)local_148._padding_ != (void *)0x0)) {
      FMemory::Free((void *)local_148._padding_);
    }
    return true;
  }
  return false;
}

// GetColumnValueByName @ 14d1234f0

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,long64 *param_2)

{
  int iVar1;
  long64 lVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      lVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = lVar2;
      return true;
    }
  }
  return false;
}

// GetColumnValueByName @ 14d123560

bool __thiscall
FSQLitePreparedStatement::GetColumnValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 uVar2;
  
  iVar1 = GetColumnIndexByName(this,param_1);
  if (this->Statement != (sqlite3_stmt *)0x0) {
    CacheColumnNames(this);
    if ((-1 < iVar1) && (iVar1 < (this->CachedColumnNames).ArrayNum)) {
      uVar2 = sqlite3_column_int64(this->Statement,iVar1);
      *param_2 = uVar2;
      return true;
    }
  }
  return false;
}

// IsActive @ 14d123b80

bool __thiscall FSQLitePreparedStatement::IsActive(FSQLitePreparedStatement *this)

{
  int iVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    iVar1 = sqlite3_stmt_busy(this->Statement);
    if (iVar1 != 0) {
      return true;
    }
  }
  return false;
}

// IsReadOnly @ 14d123bb0

bool __thiscall FSQLitePreparedStatement::IsReadOnly(FSQLitePreparedStatement *this)

{
  int iVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    iVar1 = sqlite3_stmt_readonly(this->Statement);
    if (iVar1 != 0) {
      return true;
    }
  }
  return false;
}

// IsValid @ 14d123bf0

bool __thiscall FSQLitePreparedStatement::IsValid(FSQLitePreparedStatement *this)

{
  return this->Statement != (sqlite3_stmt *)0x0;
}

// IsValidColumnIndex @ 14d123c00

bool __thiscall
FSQLitePreparedStatement::IsValidColumnIndex(FSQLitePreparedStatement *this,int param_1)

{
  CacheColumnNames(this);
  if ((-1 < param_1) && (param_1 < (this->CachedColumnNames).ArrayNum)) {
    return true;
  }
  return false;
}

// Reset @ 14d124900

void __thiscall FSQLitePreparedStatement::Reset(FSQLitePreparedStatement *this)

{
  Vdbe *pVVar1;
  sqlite3 *psVar2;
  int iVar3;
  
  pVVar1 = (Vdbe *)this->Statement;
  if (pVVar1 == (Vdbe *)0x0) {
    return;
  }
  if (pVVar1 == (Vdbe *)0x0) {
    return;
  }
  psVar2 = pVVar1->db;
  if (psVar2->mutex != (sqlite3_mutex *)0x0) {
    (*sqlite3Config.mutex.xMutexEnter)(psVar2->mutex);
  }
  if (0 < pVVar1->startTime) {
    invokeProfileCallback(psVar2,pVVar1);
  }
  iVar3 = sqlite3VdbeReset(pVVar1);
  pVVar1->eVdbeState = '\x01';
  pVVar1->rc = 0;
  pVVar1->nChange = 0;
  pVVar1->iStatement = 0;
  pVVar1->nFkConstraint = 0;
  pVVar1->pc = -1;
  pVVar1->errorAction = '\x02';
  pVVar1->minWriteFileFormat = 0xff;
  pVVar1->cacheCtr = 1;
  if ((psVar2->mallocFailed != '\0') || (iVar3 != 0)) {
    apiHandleError(psVar2,iVar3);
  }
  if (psVar2->mutex != (sqlite3_mutex *)0x0) {
    (*sqlite3Config.mutex.xMutexLeave)(psVar2->mutex);
  }
  return;
}

// SetBindingValueByIndex @ 14d1249e0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex(FSQLitePreparedStatement *this,int param_1)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_null(this->Statement,param_1);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex @ 14d124a10

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,FGuid *param_2)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  void *local_d8;
  undefined8 local_d0;
  FArchiveState local_c8;
  undefined8 local_38;
  void **local_30;
  undefined8 local_28;
  
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8._padding_ = 0;
  local_c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_c8._40_8_ = 0;
  local_c8.ArSerializingDefaults = 0;
  local_c8.ArPortFlags = 0;
  local_c8.ArMaxSerializeSize = 0;
  local_c8.ArUEVer.FileVersionUE4 = 0;
  local_c8.ArUEVer.FileVersionUE5 = 0;
  local_c8.ArLicenseeUEVer = 0;
  local_c8.ArEngineVer.Major = 0;
  local_c8.ArEngineVer.Minor = 0;
  local_c8.ArEngineVer.Patch = 0;
  local_c8.ArEngineVer._6_2_ = 0;
  local_c8.ArEngineVer.Changelist = 0;
  local_c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_c8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_c8.SerializedProperty = (FProperty *)0x0;
  local_c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_c8.bCustomVersionsAreReset = false;
  local_c8._129_7_ = 0;
  local_c8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_c8);
  local_38 = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_30 = &local_d8;
  local_28 = 0;
  FArchiveState::SetIsSaving(&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,0);
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  ::operator<<((FArchive *)&local_c8,param_2);
  FArchive::~FArchive((FArchive *)&local_c8);
  pvVar2 = local_d8;
  iVar5 = (int)local_d0;
  if ((int)local_d0 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  if ((this->Statement == (sqlite3_stmt *)0x0) || (param_1 < 1)) {
    bVar3 = false;
  }
  else {
    iVar5 = sqlite3_bind_blob(this->Statement,param_1,pvVar2,iVar5,
                              (_func___cdecl_void_void_ptr *)0xffffffffffffffff);
    bVar3 = iVar5 == 0;
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  return bVar3;
}

// SetBindingValueByIndex @ 14d124b60

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,FString *param_2)

{
  bool bVar1;
  
  if ((param_2->Data).ArrayNum != 0) {
    bVar1 = SetBindingValueByIndex(this,param_1,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
    return bVar1;
  }
  bVar1 = SetBindingValueByIndex(this,param_1,L"");
  return bVar1;
}

// SetBindingValueByIndex @ 14d124b90

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,FText *param_2)

{
  bool bVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FTextStringHelper::WriteToBuffer(&local_18,param_2,false,false);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  bVar1 = SetBindingValueByIndex(this,param_1,(wchar_t *)FVar2.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SetBindingValueByIndex @ 14d124c10

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,schar param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,(longlong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex @ 14d124c50

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,uchar param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,(ulonglong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex @ 14d124c90

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,short param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,(longlong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex @ 14d124cd0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,ushort param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,(ulonglong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex @ 14d124d10

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,int param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,(longlong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex @ 14d124d40

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,uint param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,(ulonglong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex @ 14d124d70

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,float param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_double(this->Statement,param_1,(double)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex @ 14d124db0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,double param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_double(this->Statement,param_1,param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex @ 14d124de0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,void *param_2,int param_3,bool param_4)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_blob(this->Statement,param_1,param_2,param_3,
                              (_func___cdecl_void_void_ptr *)(((ulonglong)param_4 ^ 1) - 1));
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex @ 14d124e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,wchar_t *param_2)

{
  int iVar1;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar2;
  bool bVar3;
  undefined1 auStackY_e8 [32];
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((this->Statement == (sqlite3_stmt *)0x0) || (param_1 < 1)) {
    bVar3 = false;
  }
  else {
    pTVar2 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
             TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                       (&local_b8,param_2);
    iVar1 = sqlite3_bind_text(this->Statement,param_1,pTVar2->Ptr,-1,
                              (_func___cdecl_void_void_ptr *)0xffffffffffffffff);
    bVar3 = iVar1 == 0;
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
  }
  return bVar3;
}

// SetBindingValueByIndex @ 14d124ed0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,FDateTime param_2)

{
  int iVar1;
  FDateTime *pFVar2;
  longlong lVar3;
  FDateTime local_res8;
  
  pFVar2 = FDateTime::FDateTime(&local_res8,0x7b2,1,1,0,0,0,0);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    lVar3 = param_2.Ticks - pFVar2->Ticks;
    lVar3 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar3),8) + lVar3;
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,(lVar3 >> 0x17) - (lVar3 >> 0x3f));
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex @ 14d124f80

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,TArrayView<unsigned_char_const_,int> *param_2,
          bool param_3)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_blob(this->Statement,param_1,param_2->DataPtr,param_2->ArrayNum,
                              (_func___cdecl_void_void_ptr *)(((ulonglong)param_3 ^ 1) - 1));
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex @ 14d124fd0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,FName param_2)

{
  bool bVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FName local_res18 [2];
  FString local_18;
  
  local_res18[0] = param_2;
  pFVar2 = ::FName::ToString(local_res18,&local_18);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  bVar1 = SetBindingValueByIndex(this,param_1,pwVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SetBindingValueByIndex @ 14d125040

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,long64 param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByIndex @ 14d125070

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByIndex
          (FSQLitePreparedStatement *this,int param_1,ulong64 param_2)

{
  int iVar1;
  
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < param_1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,param_1,param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName @ 14d1250a0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = GetBindingIndexByName(this,param_1);
  bVar1 = SetBindingValueByIndex(this,iVar2,param_2);
  return bVar1;
}

// SetBindingValueByName @ 14d1250e0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName(FSQLitePreparedStatement *this,wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_null(this->Statement,iVar1);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName @ 14d125120

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,FGuid *param_2)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  void *local_d8;
  undefined8 local_d0;
  FArchiveState local_c8;
  undefined8 local_38;
  void **local_30;
  undefined8 local_28;
  
  iVar5 = GetBindingIndexByName(this,param_1);
  local_c8._padding_ = 0;
  local_c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_d8 = (void *)0x0;
  local_c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_d0 = 0;
  local_c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_c8._40_8_ = 0;
  local_c8.ArSerializingDefaults = 0;
  local_c8.ArPortFlags = 0;
  local_c8.ArMaxSerializeSize = 0;
  local_c8.ArUEVer.FileVersionUE4 = 0;
  local_c8.ArUEVer.FileVersionUE5 = 0;
  local_c8.ArLicenseeUEVer = 0;
  local_c8.ArEngineVer.Major = 0;
  local_c8.ArEngineVer.Minor = 0;
  local_c8.ArEngineVer.Patch = 0;
  local_c8.ArEngineVer._6_2_ = 0;
  local_c8.ArEngineVer.Changelist = 0;
  local_c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_c8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_c8.SerializedProperty = (FProperty *)0x0;
  local_c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_c8.bCustomVersionsAreReset = false;
  local_c8._129_7_ = 0;
  local_c8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_c8);
  local_38 = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_30 = &local_d8;
  local_28 = 0;
  FArchiveState::SetIsSaving(&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,0);
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  ::operator<<((FArchive *)&local_c8,param_2);
  FArchive::~FArchive((FArchive *)&local_c8);
  pvVar2 = local_d8;
  iVar6 = (int)local_d0;
  if ((int)local_d0 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  if ((this->Statement == (sqlite3_stmt *)0x0) || (iVar5 < 1)) {
    bVar3 = false;
  }
  else {
    iVar6 = sqlite3_bind_blob(this->Statement,iVar5,pvVar2,iVar6,
                              (_func___cdecl_void_void_ptr *)0xffffffffffffffff);
    bVar3 = iVar6 == 0;
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  return bVar3;
}

// SetBindingValueByName @ 14d125270

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,FString *param_2)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  if ((param_2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar2 = GetBindingIndexByName(this,param_1);
  bVar1 = SetBindingValueByIndex(this,iVar2,pwVar3);
  return bVar1;
}

// SetBindingValueByName @ 14d1252c0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,FText *param_2)

{
  bool bVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FTextStringHelper::WriteToBuffer(&local_18,param_2,false,false);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar2 = GetBindingIndexByName(this,param_1);
  bVar1 = SetBindingValueByIndex(this,iVar2,(wchar_t *)FVar3.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SetBindingValueByName @ 14d125350

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,schar param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,(longlong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName @ 14d1253a0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,uchar param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,(ulonglong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName @ 14d1253f0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,short param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,(longlong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName @ 14d125440

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,ushort param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,(ulonglong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName @ 14d125490

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,(longlong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName @ 14d1254e0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,(ulonglong)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName @ 14d125530

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_double(this->Statement,iVar1,(double)param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName @ 14d125590

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,double param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_double(this->Statement,iVar1,param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName @ 14d1255e0

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,void *param_2,int param_3,bool param_4)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_blob(this->Statement,iVar1,param_2,param_3,
                              (_func___cdecl_void_void_ptr *)(((ulonglong)param_4 ^ 1) - 1));
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName @ 14d125660

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,FDateTime param_2)

{
  int iVar1;
  FDateTime *pFVar2;
  longlong lVar3;
  FDateTime local_res8;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  pFVar2 = FDateTime::FDateTime(&local_res8,0x7b2,1,1,0,0,0,0);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    lVar3 = param_2.Ticks - pFVar2->Ticks;
    lVar3 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar3),8) + lVar3;
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,(lVar3 >> 0x17) - (lVar3 >> 0x3f));
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName @ 14d125710

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,bool param_3)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_blob(this->Statement,iVar1,param_2->DataPtr,param_2->ArrayNum,
                              (_func___cdecl_void_void_ptr *)(((ulonglong)param_3 ^ 1) - 1));
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName @ 14d125790

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,FName param_2)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FName local_res18 [2];
  FString local_18;
  
  local_res18[0] = param_2;
  pFVar3 = ::FName::ToString(local_res18,&local_18);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  iVar2 = GetBindingIndexByName(this,param_1);
  bVar1 = SetBindingValueByIndex(this,iVar2,pwVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SetBindingValueByName @ 14d125810

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,long64 param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,param_2);
    return iVar1 == 0;
  }
  return false;
}

// SetBindingValueByName @ 14d125860

bool __thiscall
FSQLitePreparedStatement::SetBindingValueByName
          (FSQLitePreparedStatement *this,wchar_t *param_1,ulong64 param_2)

{
  int iVar1;
  
  iVar1 = GetBindingIndexByName(this,param_1);
  if ((this->Statement != (sqlite3_stmt *)0x0) && (0 < iVar1)) {
    iVar1 = sqlite3_bind_int64(this->Statement,iVar1,param_2);
    return iVar1 == 0;
  }
  return false;
}

// Step @ 14d1259c0

ESQLitePreparedStatementStepResult __thiscall
FSQLitePreparedStatement::Step(FSQLitePreparedStatement *this)

{
  uint uVar1;
  
  if (this->Statement != (sqlite3_stmt *)0x0) {
    uVar1 = sqlite3_step(this->Statement);
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 5) {
      return Busy;
    }
    if (uVar1 == 100) {
      return Row;
    }
    if (uVar1 == 0x65) {
      return Done;
    }
  }
  return Error;
}

