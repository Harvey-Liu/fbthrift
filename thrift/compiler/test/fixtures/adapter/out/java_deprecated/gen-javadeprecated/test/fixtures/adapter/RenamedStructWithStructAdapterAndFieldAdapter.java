/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.adapter;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class RenamedStructWithStructAdapterAndFieldAdapter implements TBase, java.io.Serializable, Cloneable, Comparable<RenamedStructWithStructAdapterAndFieldAdapter> {
  private static final TStruct STRUCT_DESC = new TStruct("RenamedStructWithStructAdapterAndFieldAdapter");
  private static final TField FIELD_FIELD_DESC = new TField("field", TType.I32, (short)1);

  public int field;
  public static final int FIELD = 1;

  // isset id assignments
  private static final int __FIELD_ISSET_ID = 0;
  private BitSet __isset_bit_vector = new BitSet(1);

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(FIELD, new FieldMetaData("field", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.I32)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(RenamedStructWithStructAdapterAndFieldAdapter.class, metaDataMap);
  }

  public RenamedStructWithStructAdapterAndFieldAdapter() {
  }

  public RenamedStructWithStructAdapterAndFieldAdapter(
      int field) {
    this();
    this.field = field;
    setFieldIsSet(true);
  }

  public static class Builder {
    private int field;

    BitSet __optional_isset = new BitSet(1);

    public Builder() {
    }

    public Builder setField(final int field) {
      this.field = field;
      __optional_isset.set(__FIELD_ISSET_ID, true);
      return this;
    }

    public RenamedStructWithStructAdapterAndFieldAdapter build() {
      RenamedStructWithStructAdapterAndFieldAdapter result = new RenamedStructWithStructAdapterAndFieldAdapter();
      if (__optional_isset.get(__FIELD_ISSET_ID)) {
        result.setField(this.field);
      }
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public RenamedStructWithStructAdapterAndFieldAdapter(RenamedStructWithStructAdapterAndFieldAdapter other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    this.field = TBaseHelper.deepCopy(other.field);
  }

  public RenamedStructWithStructAdapterAndFieldAdapter deepCopy() {
    return new RenamedStructWithStructAdapterAndFieldAdapter(this);
  }

  public int getField() {
    return this.field;
  }

  public RenamedStructWithStructAdapterAndFieldAdapter setField(int field) {
    this.field = field;
    setFieldIsSet(true);
    return this;
  }

  public void unsetField() {
    __isset_bit_vector.clear(__FIELD_ISSET_ID);
  }

  // Returns true if field field is set (has been assigned a value) and false otherwise
  public boolean isSetField() {
    return __isset_bit_vector.get(__FIELD_ISSET_ID);
  }

  public void setFieldIsSet(boolean __value) {
    __isset_bit_vector.set(__FIELD_ISSET_ID, __value);
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case FIELD:
      if (__value == null) {
        unsetField();
      } else {
        setField((Integer)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case FIELD:
      return new Integer(getField());

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof RenamedStructWithStructAdapterAndFieldAdapter))
      return false;
    RenamedStructWithStructAdapterAndFieldAdapter that = (RenamedStructWithStructAdapterAndFieldAdapter)_that;

    if (!TBaseHelper.equalsNobinary(this.field, that.field)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {field});
  }

  @Override
  public int compareTo(RenamedStructWithStructAdapterAndFieldAdapter other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetField()).compareTo(other.isSetField());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(field, other.field);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case FIELD:
          if (__field.type == TType.I32) {
            this.field = iprot.readI32();
            setFieldIsSet(true);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    oprot.writeFieldBegin(FIELD_FIELD_DESC);
    oprot.writeI32(this.field);
    oprot.writeFieldEnd();
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("RenamedStructWithStructAdapterAndFieldAdapter");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("field");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getField(), indent + 1, prettyPrint));
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

